/*
Author: Djamil Lakhdar-Hamina
Date: 11/15/2020
Description: Structure and Function Prototype 

*/

#ifndef HEADERFILE_H
#define HEADERFILE_H

#define WRONG_PARAMETER 201
#define DEFAULT_M 10
#define DEFAULT_N 10

struct FunctionArray
{ 
    long double x_[100], y_[100];

} ;

typedef struct FunctionArray farray;

double ReinemannSum1d(float upper_x, float lower_x ,float m, double (*f) (double));  

double MidpointSum1d(float upper_x, float lower_x ,float m, double (*f) (double));  

double RightSum1d(float upper_x, float lower_x  ,float m, double (*f) (double));  

double LeftSum1d(float upper_x, float lower_x , float m, double (*f) (double));  

double TrapezoidSum1d(float upper_x, float lower_x ,float m, double (*f) (double));  

double SimpsonSum1d(float upper_x, float lower_x ,float m, double (*f) (double));  

double DivideSum1d(float upper_x, float lower_x ,float m, double (*f) (double));  

double ReinemannSum2d(float upper_x, float lower_x ,float upper_y, float lower_y ,float m, float n, double (*f) (double));  

double MidpointSum2d(float upper_x, float lower_x ,float upper_y, float lower_y  ,float m, float n, double (*f) (double));  

double RightSum2d(float upper_x, float lower_x ,float upper_y, float lower_y  ,float m, float n, double (*f) (double));  

double LeftSum2d(float upper_x, float lower_x ,float upper_y, float lower_y , float m, float n, double (*f) (double));  

double DivideSum2d(float upper_x, float lower_x ,float upper_y, float lower_y  ,float m, float n, double (*f) (double));  


#endif