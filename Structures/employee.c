/*
Program: employee struct
*/ 

#include <stdio.h>
#define CHAR_SIZE 100


typedef struct employee{

    char name[CHAR_SIZE];
    int hireDate;
    float salary; 

} employee;

int main (void){


    employee emp1={.name="Djamil Lakhdar-Hamina",.hireDate=01032012, .salary=12302342};
    printf("The employee is called %s and he was hired on %d with a salary of %f:\n",emp1.name,emp1.hireDate,emp1.salary);
    employee emp2 ;
    printf("What is the guys name, date of hire, and salary?\n");
    scanf("%s %d %f",emp2.name,&emp2.hireDate,&emp2.salary);
    printf("The employee is called %s and he was hired on %d with a salary of %f.\n",emp2.name,emp2.hireDate,emp2.salary);
 
    return 0; 
}