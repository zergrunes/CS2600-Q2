1) Employee Search
    a) Call this branch – search-multiple-function
    employeeOne.c Complete searching the table for the other entries by creating search functions for the other two entries. Search by number and name have already been completed. Complete search by phone number and salary.   Show example of a match and no match in each of your functions. Hence 4 cases total ->Update employeeMain.c

    b) Call this branch – single-search-pass-function
    employeeTwo.c – Complete searching the table for other entries by passing in the function that will perform the search. (Make sure employeeOne.c is not located in this branch.) 

NOTE: employeeMain.c should be the same for both of the implementations above.

2) Lo Shu Magic Square

    Create a program by simulating a magic square using a two-dimensional array. Write a function that accepts a two-dimensional array as an argument and determines whether the array is a Lo Shu Magic Square. Test the function in a program. 

        1) Create the program and test with an array that is a Lo Shu Magic Square and test where it is not. The array’s can be defined in your main and should not need to be input from the user.
        2) Create and populate a two-dimensional array with random numbers from 1-9. Recall no number should repeat when populating the array. Then check if it is a Lo Shu Magic Share. Put this random number placement in a loop until you do get a Lo Shu Magic Square.  
        Print two things:
            a. The total number of squares generated and tested before success, the count.
            b. Print the square and show the placement of values in the following format:
                    [a b c]
                    [d e f]
                    [g h i]
