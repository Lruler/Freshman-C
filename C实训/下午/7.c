#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int*  DeleteArrayElements(int*temparr,int*parrnew,int tag){
    int index=8;
    
    
    for(int i=0;i<30-tag;i++){ 
        if(i<index){
            parrnew[i]=temparr[i];

        }
        else{
            parrnew[i]=temparr[i+1];
        }
    }


    printf("%-5d",temparr[8]);
    
    return parrnew;

}

void main(){
    int arr[30];
    int*temparr=NULL;
    int *parrresult=NULL;
    
    int* parrnew=NULL;
    for(int i=0;i<30;i++){
        arr[i]=i+1;

    }
    temparr=arr;

    int tag=1;
    
    for(int i=1;i<=15;i++){
        parrnew=(int*)malloc((30-tag)*sizeof(int)); 
        int index=8;
        parrresult=DeleteArrayElements(temparr,parrnew,tag);
        
        temparr=parrresult;
        parrnew=NULL;
        tag++;
    }








}





