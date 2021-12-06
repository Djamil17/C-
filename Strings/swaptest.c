/*

*/

#include <stdio.h>


char array[5]="test";

int main(){

    
    printf("%s\n",array);
    char temp=array[1];
    printf("to switch %c\n",temp);
    array[1]=array[3];
    array[3]=temp;
    printf("%s\n",array);

    return 0;

}