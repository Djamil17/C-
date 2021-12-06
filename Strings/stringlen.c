/*
Author: Djamil Lakhdar-Hamina
Date: 12/30/2021
Description: 

*/ 

#include <stdio.h>
#define SIZE 100
#define TRUE 1
#define FALSE 0
#define FIRST_ELEM 0
int strlength(char string[]);
char *stringcat(char result[],char strg1[],char strg2[]);
_Bool stringequals(char strg1[],char strg2[]);


int strlength(char string[])
{
    int l;
    for (l=1;(string[l]!='\0');++l) {}
    return l;
}

char *stringcat(char result[], char strg1[],char strg2[]){

    for (int i=0;i<strlength(strg1);++i){ result[i]=strg1[i];}
    for (int j =0;j<strlength(strg2);++j){ result[strlength(strg1)+j]=strg2[j];}

    return result;
};

_Bool stringequals(char strg1[],char strg2[]){

    if (strlength(strg1)==strlength(strg2))
    {
        if (strg1[FIRST_ELEM]==strg2[FIRST_ELEM])
        {
            for (int i=0;(strg1[i]!='\0');++i)
            {       
                    // printf("%c and %c\n",strg1[i],strg2[i]);

                    if (strg1[i]!=strg2[i])
                    {
                        return FALSE;
                    }

            }

            return TRUE;

        }
        else if (strg1[FIRST_ELEM]!=strg2[FIRST_ELEM])
        {

            return FALSE;

        } 

    } 
    else 
    {
        return FALSE; 
    }

return FALSE;

}


int main(void){
    
    char string[SIZE];
    char string2[SIZE];
    char result[SIZE];
    printf("Enter your string up to 100 characters:\n");
    scanf("%s",string);
    printf("Enter your string up to 100 characters:\n");
    scanf("%s",string2);
    printf("The length of the string is %d\n",strlength(string)); 
    printf("The concatenated string is: %s\n",stringcat(result, string,string2)); 
    printf("The two strings are equal: %d\n",stringequals(string,string2)); 


    return 0;


}