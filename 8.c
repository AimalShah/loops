#include<stdio.h>
#include<math.h>

int main(){
    int sum = 0;
    for(int  i =1; i<=5; i++){
        sum += pow(i ,2);

        if(i == 3){
            break;
        }
    }
    printf("The sum is: %d\n",sum);
    return 0;
}