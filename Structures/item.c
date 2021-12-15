/*

*/


#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 
#define MAX_SLEN 100 

typedef struct item {

char *itemName; 
int quantity; 
float price; 
float amount; 

} item ; 


void readItem(item *item_){

    char temp[MAX_SLEN];
    printf("Read in name of commodity:\n");
    scanf("%s", temp);
    item_->itemName=(char *)malloc(strlen(temp)+1);
    strcpy(item_->itemName,temp);
    printf("Read in (quantity, price):\n");
    scanf("%d %f",&item_->quantity, &item_->price); 
    item_->amount=item_->quantity * item_->price;
}

void printItem(item *item_){


    printf("The commodity with name %s is worth %f and was bought in quantity %d so total is %f.\n",item_->itemName, item_->price, item_->quantity, item_->amount);

}

int main(void){


    item commodity;
    item *ptrCommodity=&commodity;  
    readItem(ptrCommodity);
    printItem(ptrCommodity);

    return 0; 
}