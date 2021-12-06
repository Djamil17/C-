/*

*/ 

#include <stdio.h>
#define MAGIC 10

int *pinteger=NULL;
int magicNumber=MAGIC;

int main(void){

    pinteger=&magicNumber;


    printf("The address of the pointer is %p and its value is %d!\n",pinteger, *pinteger);


    return 0; 
}