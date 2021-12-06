/*
Program: Generate Primes
Author: Djamil Lakhdar-Hamina

*/

#include <stdio.h> 
#define ARRAY_SIZE 50

int main () {

    int primes[ARRAY_SIZE]={[0]=2,[1]=3};
    int search=1;
    // iterate through numbers 3...100

    for (int i=3;i<100;++i){

        printf("Number %d\n",i);
            // iterate through arrays 

            for (int k=0;k<search;k++){      

                printf("Position %d and now extent of search is %d\n",k, search);

                if (i%primes[k]==0){
                    printf("The number %d is divisble by %d\n",i, primes[k]);
                    break; 
                } else if (i%primes[k]!=0)
                {
                    printf("The number %d is not divisble by %d\n",i, primes[k]);

                    if (k+1==search) 
                    {
                         ++search; 
                        primes[search]=i;
                        break;

                     }
                        
                }
            
            }

        }

        for (int k=0;k<search;++k){

            printf("Array pos %d %d\n",k, primes[k]);

        }

    return 0; 
}