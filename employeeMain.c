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
#include <stdlib.h>
#include "employee.h"

int main(void){
    PtrToEmployee searchEmployeeByNumber(const Employee table[], int sizeTable, long numberToFind);
    PtrToEmployee searchEmployeeByName(const Employee table[], int sizeTable, char *nameToFind);
    PtrToEmployee searchEmployeeByPhone(const Employee table[], int sizeTable, char *phoneToFind);
    PtrToEmployee searchEmployeeBySalary(const Employee table[], int sizeTable, double salaryToFind);

    extern Employee EmployeeTable[];
    extern const int EmployeeTableEntries;

    PtrToEmployee matchPtr;
    matchPtr = searchEmployeeByNumber(EmployeeTable, EmployeeTableEntries, 1045);
    if (matchPtr != NULL)
        printf("Employee ID 1045 is in record %ld\n", matchPtr-EmployeeTable);
    else
        printf("Employee ID is NOT found in the record\n");

    matchPtr = searchEmployeeByName(EmployeeTable, EmployeeTableEntries, "Tony Bobcat");
    if (matchPtr!=NULL)
        printf("Employee Tony Bobcat is in record %ld\n", matchPtr-EmployeeTable);
    else
        printf("Employee Tony Bobcat is NOT found in the record\n");

    /***** is in record *****/
    matchPtr = searchEmployeeByPhone(EmployeeTable, EmployeeTableEntries, "310-555-1215");
    if (matchPtr!=NULL)
        printf("Employee phone number is in record %ld.\n", matchPtr-EmployeeTable);
    else
        printf("Employee phone number is NOT found in the record.\n");
    
    /****** is not in record *****/
    matchPtr = searchEmployeeByPhone(EmployeeTable, EmployeeTableEntries, "909-356-9001");
    if(matchPtr!=NULL)
        printf("Employee phone number is in record %ld.\n", matchPtr-EmployeeTable);
    else
        printf("Employee phone number is NOT found in the record.\n");
    
    /******* is in record ********/
    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 4.50);
    if(matchPtr!=NULL)
        printf("Employee salary is in record.\n");
    else    
        printf("Employee salary is NOT found in the record.\n");
    
    /******** is not in record ********/
    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 16.50);
    if(matchPtr!=NULL)
        printf("Employee salary is in record.\n");
    else
        printf("Employee salary is NOT found in the record.\n");

    return EXIT_SUCCESS;
}