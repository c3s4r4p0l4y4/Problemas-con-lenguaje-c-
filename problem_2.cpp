#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main(){
    //Write a program in C++ to find the sum of first 10 natural numbers.
    int sum=0;
    printf("Find the first 10 natural numbers: \n");
    printf("-----------------------------------\n");
    printf("The natural numbers are: \n");
    for(int i=1;i<=10;i++){
        printf("%d ",i);
        sum+=i;       
    }
    printf("\nThe sum of first 10 natural numbers: %d\n",sum);
    
    system("pause");
    return 0;
}
