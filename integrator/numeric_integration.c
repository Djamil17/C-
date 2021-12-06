/*
Author: Djamil Lakhdar-Hamina
Date: 11/15/2020
Description : Integration Functions 
*/

#include <stdio.h>
#include "integration.h"


double ReinemannSum1d(float upper_x, float lower_x ,float m, double (*f) (double)){

    // error checking for parameters 

    float increment_x, i;
    int step;
    double result;
    increment_x=(upper_x-lower_x)/m;

    printf("Increment for x is:%f\n",increment_x);

    for (i=lower_x; i<upper_x; i=i+increment_x) {

        ++step;
        result=result+f((i+(i+increment_x))/2)*increment_x; 
        printf("At step %d and x-value %f integral thus far is %f\n",step, i,result );

    }


    return result; 
};  


double RightSum1d(float upper_x, float lower_x ,float m, double (*f) (double)){

    // error checking for parameters 

    float increment_x, i;
    int step;
    double result;
    increment_x=(upper_x-lower_x)/m;

    printf("Increment for x is:%f\n",increment_x);

    for (i=lower_x; i<upper_x; i=i+increment_x) {

        ++step;
        result=result+f(i+increment_x)*increment_x; 
        printf("At step %d and x-value %f integral thus far is %f\n",step, i,result );

    }


    return result; 
};  


double LeftSum1d(float upper_x, float lower_x ,float m, double (*f) (double)){

    // error checking for parameters 

    float increment_x, i;
    int step;
    double result;
    increment_x=(upper_x-lower_x)/m;

    printf("Increment for x is:%f\n",increment_x);

    for (i=lower_x; i<upper_x; i=i+increment_x) {

        ++step;
        result=result+f(i)*increment_x; 
        printf("At step %d and x-value %f integral thus far is %f\n",step, i,result );

    }


    return result; 
};  



// double ReinemannSum(float upper_x, float lower_x ,float upper_y, float lower_y ,int m, int n, double (*f) (double)){

//     // error checking for parameters 

//     float increment_x, increment_y,area, i, j;
//     long double result;
//     increment_x=(upper_x-lower_x)/m;
//     increment_y=(upper_y-lower_y)/n;
//     area=increment_x*increment_y;

//     for (i=lower_x; i<upper_x; i=i+increment_x) {
    
//         for(j=lower_y;j<upper_y;j=j+increment_y )
            
//         {
//             result=result+f((i-(i-increment_y))/2)*area; 
//         }

//     }


//     return result; 
// };  

// double MidpointSum(float upper, float lower ,int m, int n, void (*) (farray)){ };  

// double RightSum(float upper, float lower ,int m, int n, void (*) (farray)){ };  

// double LeftSum(float upper, float lower ,int m, int n, void (*) (farray)){ };  

// double DivideSum(float upper, float lower ,int m, int n, void (*) (farray)){ };  

// double ErrorAnalysis(float upper, float lower ,int m, int n, void (*) (farray)){ };  