// Check whether a number is even or odd using bit manipulation 

#include<stdio.h>

int main(){
    int num;
    printf("Please enter a number \n");
    scanf("%d",&num);
    if(num & 1 == 1){
        printf(" %d is odd number\n",num);

    }
    else{
        printf(" %d is even number\n",num);
    }
}