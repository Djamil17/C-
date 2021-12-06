/*
Author: Djamil Lakhdar-Hamina
Date: 11/15/2020
Description: Find how much income you make based on hours worked in a week

15 percent of the first 300
20 percent next 150 
25 percent rest

*/ 

#include <stdio.h>

int main(){


    float hours,normal, overtime, hourly_wage, salary, gross_salary,taxes;

    hourly_wage=12.00;
    overtime=0.0;

    printf("Input hours worked:");
    scanf("\n%f",&hours);

    if (hours>=0.0 && hours<=40.0){

        salary=hours*hourly_wage;

    } else if (hours>40.0) {

        normal=40.0* hourly_wage;
        overtime=(hours-40.0)* 1.5*hourly_wage;
        salary=normal+overtime;

    }

     else if (hours<0) {

        printf("Improper value inputed...");
        return 1 ;
    }

    if (salary<=300.0) 
        {

            taxes=salary*.15;
            gross_salary=salary-taxes;

        } else if (salary>300.0) {

            if (salary>300.0 && salary<=450.0) 
            {
                // e.g. 350, 300
                taxes=300.0*.15+(salary-300.0)*.20;
                gross_salary=(salary)-taxes; 

            } else 
            {
                // e.g. 500, 300, then 150, then 50 
                taxes=300.0*.15+150.0*.20+(salary-450.0)*.25;
                gross_salary=salary-taxes;

            }


        }
    printf("Congrats your measly gross salary was $%f pathetic proletarian!\n",gross_salary);

    return 0; 

}