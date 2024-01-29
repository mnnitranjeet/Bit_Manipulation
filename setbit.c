#include <stdio.h>
#include<stdlib.h>
//#include <limits.h> // for CHAR_BIT

void decimalToBinary(int num){
    int binary[32],i=0;
    while(num > 0){
        binary[i]=num % 2;
        num=num/2;
        i++;
    }
    for(int j = i-1 ; j >= 0; j--){
        printf("%d",binary[j]);
    }
    printf("\n");
}


void setBit(int num,int bit_no){
    int mask = (1 << bit_no-1);
    int ans  = (num | mask);
    decimalToBinary(ans);

}

void offBit(int num , int bit_no){
    int mask = ~(1 << bit_no-1);
    int ans  = (num & mask);
    decimalToBinary(ans);
}

void toggleBit(int num , int bit_no){
    int mask = ( 1 << bit_no -1);
    int ans  = (num ^ mask);
    decimalToBinary(ans);
}

void checkSetBit(int num , int bit_no){
    int mask = (1 << bit_no - 1);
    int ans  = (num & mask);
    if(ans == 0){
        printf("bit number %d is not set \n",bit_no);

    }
    else{
        printf("bit number %d is set \n",bit_no);
    }
}


int main() {
    int num, bit_no;
    
    while(1){
        int choice;

        printf("Press : 1 For On Particular bit \n ");
        printf("Press : 2 For Off Particular bit \n ");
        printf("Press : 3 For Toggle Particular bit \n ");
        printf("Press : 4 For Check Particular bit is set or not \n ");
        printf("Press : 5 For Exit\n");
        scanf("%d",&choice);

        if(choice == 1){
            printf("Enter a number: ");
            scanf("%d", &num);
            printf("Enter the bit number to set  ");
            scanf("%d", &bit_no);
            decimalToBinary(num);
            setBit(num,bit_no);
        }
        else if(choice == 2){
            printf("Enter a number: ");
            scanf("%d", &num);
            printf("Enter the bit number to set  ");
            scanf("%d", &bit_no);
            decimalToBinary(num);
            offBit(num,bit_no);

        }
        else if(choice == 3){
            printf("Enter a number: ");
            scanf("%d", &num);
            printf("Enter the bit number to set  ");
            scanf("%d", &bit_no);
            decimalToBinary(num);
            toggleBit(num,bit_no);
             
        }
        else if(choice == 4){
            printf("Enter a number: ");
            scanf("%d", &num);
            printf("Enter the bit number to set  ");
            scanf("%d", &bit_no);
            decimalToBinary(num);
            checkSetBit(num,bit_no);

        }
        else if(choice == 5){
            exit(0);
        }
        else{
            printf("Invalid input \n");
        }
    }
    

    return 0;

}
