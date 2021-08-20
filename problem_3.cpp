#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main(){
    //Write a program in C++ to display n terms of natural number and their sum.
    int n,sum=0;
    printf("Input a number of terms: ");
    scanf("%d",&n);
    printf("The natural numbers upto %dth terms are: \n",n);
    for(int i=1;i<=n;i++){
       printf("%d ",i);
       sum+=i;       
    }
    printf("\nThe sum of the natural numbers is: %d\n",sum);
   
    system("pause");
    return 0;
}
