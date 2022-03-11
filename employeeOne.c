/**
 * @file magicSquare.c
 * @author Marian Remoroza
 * @brief 
 * @version 0.1
 * @date 2022-03-10
 * 
 * @copyright Copyright (c) 2022
 * 
 **/

#include <string.h>
#include "employee.h"

PtrToEmployee searchEmployeeByNumber(PtrtoConstEmployee ptr, int tableSize, long targetNumber){
    const PtrtoConstEmployee endPtr = ptr+tableSize;
    for(; ptr < endPtr; ptr++){
        if(ptr->number == targetNumber) return (PtrToEmployee)ptr;
    }
    return NULL;
}
