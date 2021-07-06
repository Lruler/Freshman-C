#include <stdio.h>
#include <string.h>
#include <stdlib.h>
    void main(){
        int amount;
        int goalnumber;
        
        printf("Please input how many numbers you want to input:\n");
        scanf("%d",&amount);
        int arr[amount];
        printf("Please input number you want to input:\n");

        for (int i=0;i<amount;i++){ 
            scanf("%d",&arr[i]);
        }
        printf("Please input number you want to find:\n");
        scanf("%d",&goalnumber);
        for(int i=0;i<amount;i++){
            if (arr[i]==goalnumber){
                printf("It's index is%d\n",i);
                break;

            }

        }




    }