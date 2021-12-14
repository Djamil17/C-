/*

*/

#include <stdio.h> 

int stringlen(const char *string);

int stringlen(const char *string){

    printf("first position is %p...\n",string);


    const char *begin=&string[0];

    while (*string){

        string++;
        // printf("next position is %p...\n",string);

    }
    
    // printf("final position is %p...\n",string);



    return (int)(string-begin);

}



int main (void){


    const char str[100]="yay!";
    int result=0; 
    // printf("Type in string (100 char):\n");
    // scanf("%99s",str);
    result=stringlen(str);
    printf("The string is %d characters long!\n",result);
    return 0; 


}