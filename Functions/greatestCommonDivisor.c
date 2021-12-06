/*

Author: Djamil 
Program: Abs and GCD
Description : Find abs and GCD of numbers 

*/

#include <stdio.h>


float absoluteValue(float x);
int quotientFormula(int x,int y);
int greatestCommonDivisor(int x,int y);

float absoluteValue (float x)
{

    float abs=0;

    if (x <0){

        abs=-x;

    } else if (x>0){

        abs=x;

    } else if (x==0){

        return 0;
    }

    return abs;
    
}


// int quotientFormula(int x,int y)
// {
//      int multiplier=0;
//      int local_y=0;
//      int local_x=0;

//      local_x=x;local_y=y;


//      while (multiplier*local_y<local_x)
//      {
//          printf("quotient is %d and multiplier is %d\n",multiplier*local_y, multiplier);
//          ++multiplier;
//      }

//      return multiplier*local_y-1 ;

// }

int greatestCommonDivisor(int x,int y)
{

    /*

    gcf algorithm 

    factorize both numbers 

    find intersection of primes  

    */

    if ((x==0)||(y==0))
    {

        if (y==0 && x==0)
        {
            printf("Invalid arguments 0 and 0\n");
            return 0;
        } else if (y==0)
        {
            printf("Values are %d and %d\n",x,y);
            return x;
        } else if (x==0)
        {
            printf("Values are %d and %d\n",y,x);
            return y;
        }

    } else if (x>y)
    {
       
        printf("Finding GCD of %d and %d...\n",x,y);
        return greatestCommonDivisor(y,x%y);

    } 
      else if (x<y)
    
    {   
        printf("Finding GCD of %d and %d...\n",y,x);
        return greatestCommonDivisor(x,y%x);
    }

    return 1; 

}



int main(void){

    int A,B; 

    printf("Enter number:\n");
    scanf("%d",&A);
    printf("Enter number:\n");
    scanf("%d",&B);

    printf("Zero Case: %f\nNegative Case: %f\nPositive Case: %f\n",absoluteValue(0),absoluteValue(-A), absoluteValue(A)) ;
    printf("Greatest Common Factor of %d and %d is: %d\n",A,B,greatestCommonDivisor(A,B));


    return 0;
}