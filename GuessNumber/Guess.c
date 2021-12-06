/*
Author: Djamil 
Date: 11/17/2021
Description: Have user guess number between 1-20 

*/ 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main ()

{ 

   int i,guess, n; 
   i=1; 
   srand(time(0));

   n=rand()%20;

   printf("This is a guessing game!\nChoose a number between 1-20.\nYou have five trys!\n"); 

   while (i<5){

        printf("Input number: ") ; 
        scanf("%d",&guess);

        if (guess <1 && guess>20){
            printf("The number you inputed is not between 1-20...\n") ; 
            return 1; 
        }


        if (guess<n){
            printf("The number you inputed is too small, you have %d trys left\n", 5-i) ; 


        } else if (guess > n) {
            
            printf("The number you inputed is too big, you have %d trys left\n", 5-i) ; 



        }  else if (guess==n){

            printf("You did it! The number was %d\n", n) ; 
            break; 

        }

        ++i;

        if (i==5){
            printf("You failed my guy, the number was %d\n",n);
        }


   }
   
    return 0; 

}