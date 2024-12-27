#include<stdio.h>


int main(){
    int i,j,temp;
 for(i=0; i<5;i++){
    for(j=0;j<5;j++){
        if(i!=j && i+j%2==0){
            if(j==4){
                temp=i;
                i=j;
                j=temp;
            }
            printf("i=%d, j=%d \n", i,j);
        }
    }
    printf("i=%d\n" , i);
    }
}