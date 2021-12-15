/*
Program: dynamic allocation
Author: Djamil Lakhdar-Hamina
Date: 12/14/2021
Last Modified: 12/14/2021
*/ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int ARRAY_LENGTH=100;

int main(void){

    char source[ARRAY_LENGTH];
    int length=0;

    printf("Enter a limit to your string:\n");
    scanf("%d",&length);
    printf("Enter a string:\n");
    scanf("%s",source); 
    char *string=(char*)calloc(length,sizeof(char));
    strcpy(string, source);
    if (!string){return 1; }
    printf("You entered: %s!\n",string);
    free(string);
    return 0; 

}