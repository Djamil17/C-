/*
Program: Area of Circle
Author: Djamil Lakhdar-Hamina
Date Created: 11/04/2021

*/ 

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {

    
    float r, area; 
    r=atoi(argv[1]);

    printf("Input a value for the radius...\n");
    // scanf("\n%f",&r);

    area=3.14 * r * r ;

    printf("area is %f \n",area);

    return 0; 

}