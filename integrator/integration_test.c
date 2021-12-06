#include <stdio.h> 
#include "integration.h"

#define BASE_CASE 1.0

float up_x, low_x; 
float m; 

double test_f(double x);

double test_f(double x){

    if (x<=1.0){
        return BASE_CASE; 
    } else {

    return x*test_f(x-1);

    }
    }

int main(int argc,char *argv[]){

    printf("Choose upper bound for function:");
    scanf("\n%f",&up_x);
    printf("Choose lower bound for function:");
    scanf("\n%f",&low_x);
    printf("Choose increment m for definite integral:");
    scanf("\n%f",&m);

    if (up_x<=low_x){

        printf("Upper bound is not greater than lower... Try again!\n");
        return 1;
    }

    printf("The integral of the function is %f\n", ReinemannSum1d(up_x, low_x, m , test_f ));
    return 0; 

}