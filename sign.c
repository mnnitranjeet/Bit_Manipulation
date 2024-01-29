//Problem 2. Detect if two integers
// have opposite signs or not


#include<stdio.h>

int main(){
    int num1,num2;
    printf("Please enter two integer \n");
    scanf("%d%d",&num1,&num2);

    if((num1 ^ num2)< 0){
        printf("Negative sign");
    }
    else{
        printf("Positive Sign");
        
    }

    
}