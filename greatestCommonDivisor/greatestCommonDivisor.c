/*

Author: Djamil 
Program: Abs and GCD


*/

#include <stdio.h>


float absoluteValue(float x);
float factorize(float x);
float greatestCommonDivisor(float x);

float absoluteValue (float x)
{

    float abs=0;

    if (x <=0){

        abs=-x;

    } else if (x>=0){

        abs=x;

    }

    return abs;
    
}


float factorize(float x)
{


    float factors[]; 



    return 0;

}

float intersection(float x[],float y[])
{

    float z[sizeof(x)/sizeof(x[0])];


    return ; 

}


float greatestCommonDivisor(float x,float y){

    /*

    gcf algorithm 

    factorize both numbers 

    find intersection of primes is gcd 

    */


    float gcd=0;


    return gcd;
}


int main(void){

    float x,y; 

    printf("Enter number:\n");
    scanf("%f\n",&x)
    printf("Enter number:\n");
    scanf("%f\n",&y)

    printf("Zero Case:%f\nNegative Case:%f\nPositive Case:%f",absoluteValue(-x),absoluteValue(-x), absoluteValue(x)) ;

    printf("Greatest Common Factor of %f and %f is: %f ",x,y,greatestCommonDivisor(x,y));


    return 0;
}