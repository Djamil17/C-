/*

*/ 

#include <stdio.h>
#include <string.h> 
#define SIZE 100

void swap(char *c1, char *c2);
char *reverstr(char list[]);
char *bubbleSort(char list[]);

char *reverstr(char list[])
{

    int length=strlen(list);

    for (int i=0;i<length-1;++i){ 
        list[i]=list[length-i];}

    // for (int i=0;i<length-1;++i){ 
    //     printf("%c", list[i]);}

    return list; 

}


char *bubbleSort(char list[]){
    // lim inner 
    // 2 [0-3] dbca|-> bdca -> bcda->bca|d
    // 0 [0-3] bca|d-> bac|d -> ba|cd
    // 1 [0-3] ba|cd -> ab|cd -> a|bcd

    int length=strlen(list);
    
    printf("the length is %d\n",length);

    char temp;

    for (int j=length-1;j>0; --j)
    { 
        printf("Limit is %d\n",j);

        for (int i=1;i<length; ++i)
        {
            printf("on position %d\n",i+1);

            if (list[i-1]<=list[i])
            {
                
                continue;

            } else if (list[i-1]>list[i])
            {
                temp=list[i-1];
                list[i-1]=list[i];
                list[i]=temp; 
                printf("%c %c\n", list[i],list[i-1]);


            }

        }

    }

        
    return list; 

}



int main() 
{

    char string[SIZE];

    printf("Enter your string up to 100 characters:\n");
    scanf("%s",string);
    // printf("The reverse string is: %s\n",reverstr(string)); 
    printf("The sorted string is: %s\n",bubbleSort(string)); 

    return 0;
}