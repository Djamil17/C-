/*

*/ 

#include <stdio.h>

int main (){

    long double minutes,minute_year, minute_day; 

    minute_year=60.0*24.0*360.0;
    minute_day=60.0*24.0;

    printf("Input a value in terms of minutes: \n");

    scanf("\n%Lf: ",&minutes);

    printf("The size of long type is %lu \n ", sizeof(long double));

    printf("You get %Lf years\n", minutes * 1/minute_year);

    printf("You get %Lf days\n", minutes* 1/minute_day);


    return 0 ;
}