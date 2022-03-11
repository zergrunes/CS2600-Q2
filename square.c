/**
 * @file square.c
 * @author Marian Remoroza
 * @brief 
 * @version 0.1
 * @date 2022-03-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

/*
make a function that will swap the integers in the 
2D array.
*/

void swapInt(int *a, int *b){
    int c = *a;
    *a = *b;
    *b = c;
}

/*
random array generator function
*/

void randArrayGen(int array[], int a){
    time_t t;
    srand((unsigned) time(&t));

    for(int x=a-1; x>0; x--){
        int y = rand() % (x+1);
        swapInt(&array[x], &array[y]);
    }
}

/* main function! */
int main(){

    printf("Lo Shu Magic Square\n");
    bool rows = false;
    bool columns = false;
    bool diagonals = false;

    int squareCount = 0;

    int magicsq[3][3];
    int index = 0;
    int populatedArray[9]={1,2,3,4,5,6,7,8,9};

    if(rows == false || columns == false || diagonals == false){
        do{
            rows = false;
            columns = false;
            diagonals = false;

            int s = sizeof(populatedArray)/sizeof(populatedArray[0]);
            randArrayGen(populatedArray, s);
            for(int i=0; i<3; i++){
                for(int j=0; j<3; j++){
                    magicsq[i][j] = populatedArray[index];
                    index++;
                } 
            }

            index = 0;   

            int sum = 15;

            int row1 = magicsq[0][0] + magicsq[0][1] + magicsq[0][2];
            int row2 = magicsq[1][0] + magicsq[1][1] + magicsq[1][2];
            int row3 = magicsq[2][0] + magicsq[2][1] + magicsq[2][2];
            if(row1==15 && row2==15 && row3==15)  rows = true;

            int column1 = magicsq[0][0] + magicsq[1][0] + magicsq[2][0];
            int column2 = magicsq[0][1] + magicsq[1][1] + magicsq[2][1];
            int column3 = magicsq[0][2] + magicsq[1][2] + magicsq[2][2];
            if(column1==15 && column2==15 && column3==15)  columns = true;

            int diagonal1 = magicsq[0][0] + magicsq[1][1] + magicsq[2][2];
            int diagonal2 = magicsq[0][2] + magicsq[1][1] + magicsq[2][0];
            if(diagonal1==15 && diagonal2==15) diagonals = true;

            squareCount++;

        } while(rows==false || columns==false || diagonals==false);
    }

    printf("Generating a Lo Shu Magic Square:\n");
    for(int i = 0; i < 3; i++){
        printf("[ ");
        for(int j = 0; j < 3; j++){
            printf("%d ", magicsq[i][j]);
        }
        printf("]\n");
    }

    printf("It took: %d attempts", squareCount);
    
    return EXIT_SUCCESS;
    
}