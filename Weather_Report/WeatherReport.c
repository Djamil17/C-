/*
Program: WeatherReport
Author: Djamil Jeezy 


*/ 

#include <stdio.h>
#include <string.h>

#define YEARS 4 // defined by array size 
#define MONTHS 11 // same as above

float WeatherReport[5][12]=
{
    {34.3,44.23423,55.232,66.2342,23.5656,45.56456,45.34534,23.4353,55.34534,12.4353,46.324,342},
    {54.234,34.9787,54.7897,61.67867,35.5675,34.123,34.34,56.433,55.3434,11.433,34.23424,28.3435},
    {45.1234,34.789879,12.4633,65.65756,34.56756,45.12342,55.232,66.2342,23.5656,45.56456,45.34534,34.67867},
    {12.4534,23.5654,65.23423,87.234523,65.76867,76.23423,23.2342,65.32423,78.23423,56.23423,98.12321,23.234},
    {45.1234,34.789879,12.4633,65.65756,34.56756,23.12342,76.23423,23.2342,65.32423,78.23423,56.23423,98.12321}
    
};

float monthly[12];
float yearly[5];
float yearly_sum=0;
char tagstr[25] = "";

int main()

{ 
    
    for (int i=0;i<=YEARS;++i){

        for (int j=0;j<=MONTHS;j++) {

            printf("YEAR %d, MONTH %d\n",i,j);
            monthly[j]=monthly[j]+WeatherReport[i][j];
            printf("MONTHLY SUM %f\n",monthly[j]);
            yearly_sum=yearly_sum+WeatherReport[i][j]; 
            printf("SUM %f\n",yearly_sum);

        }

        yearly[i]=yearly_sum;
        printf("SUM IN ARRAY %f\n", yearly[i] );
        yearly_sum=0;

    }

    printf("YEAR AVE RAINFALL (INCHES)\n");

    for (int k=0;k<=YEARS;++k){

        char temp[10]  = "";
        sprintf(temp, "%d", k);
        printf("%s    %f\n",temp,yearly[k]/(YEARS+1));

    }

    printf(" January Febuary  March  April  May  June  July  August  October  November  December\n");

    for (int l; l<=MONTHS;++l){
        
        printf("%f ",monthly[l]/(YEARS+1));

    }
 
    return 0;
    
}




