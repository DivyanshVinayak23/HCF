#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int hcf(int , int , int *);

int main(){

    int j,k,factor=0;
    // Taking Two Numbers From User Where ( num1 > num2)
    printf("Enter Number 1:-\n");
    scanf("%d",&j);
    printf("Enter Number 2:-\n");
    scanf("%d",&k);
    hcf(j,k,&factor);
    printf("The HCF of %d and %d = %d\n",j,k,factor);
    return 0;
}


int hcf(int num1, int num2, int *c_factor){
    int q,temp = 0;
    //Loop Until num2 Reaches The Minimum Value
    while(num2 > 0){
        // Stored The Value of num2 To Swap It With num 1 later
        temp = num2;
        q = num1 / num2;
        *c_factor = num2;
        num2 = num1 - q*(num2);
        num1 = temp;
        
    }
    
}