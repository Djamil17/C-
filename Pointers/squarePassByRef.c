/*

*/ 


#include <stdio.h>

void square(int *integer);


void square(int *integer){

    *integer=*integer* (*integer);

}

int main(void){

    int integer=0;

    printf("Enter integer:\n");
    scanf("%d",&integer);

    square(&integer);


    printf("The square is: %d\n",integer);


    return 0; 
}