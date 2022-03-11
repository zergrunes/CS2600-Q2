/**
 * @file magicSquare.c
 * @author Marian Remoroza
 * @brief 
 * @version 0.1
 * @date 2022-03-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <string.h>
#include "employee.h"

/* Note from Nima:
5 functions have been defined below--
    ptr - points to table to be searched
    tableSize - size of the table
    targetPtr - points to val that will be searched for in table
    functionPtr - points to a comparison function below and will perform the associated check*/

static PtrToEmployee searchEmployeeTable(PtrtoConstEmployee ptr, int tableSize, const void *targetPtr,
                                         int (*functionPtr)(const void *, PtrtoConstEmployee))
{
    PtrtoConstEmployee endPtr = ptr+tableSize;
    for(; ptr<endPtr; ptr++)
        if((*functionPtr)(targetPtr, ptr)==0)
            return (PtrToEmployee) ptr;
    return NULL;
}                                                                       
/*Explanation:
setting a function to static */

static int compareEmployeeNumber(const void *targetPtr, PtrtoConstEmployee tableValuePtr){
    return *(long *) targetPtr != tableValuePtr->number;
}

static int compareEmployeeName(const void *targetPtr, PtrtoConstEmployee tableValuePtr){
    return strcmp((char *)targetPtr, tableValuePtr->name);
}

PtrToEmployee searchEmployeeByNumber(PtrtoConstEmployee ptr, int size, long number){
    return searchEmployeeTable(ptr, size, &number, compareEmployeeNumber);
}

PtrToEmployee searchEmployeeByName(PtrtoConstEmployee ptr, int size, char* name){
    return searchEmployeeTable(ptr,size,name,compareEmployeeName);
}