#include<stdio.h>
int main(){
    int number=0;
    scanf("%d",&number);
    float x=0;
    if(number%50==0){
        x = number*0.53;
    }else if(number%50){
        x = 50*0.53+(number-50)*0.58;
    }
    if (number<0){
        printf("Invalid Value!\n");
    }else {
        printf("cost= %.2f",x);
    }
    return 0;
}