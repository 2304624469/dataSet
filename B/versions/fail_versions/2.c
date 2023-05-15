#include <stdio.h>
int main(){
    float number=0, cost=0;	  
    scanf("%f", &number);   
    if( number < 0 ){
        printf("Invalid Value!");        
    }
    else if( number <= 50 )
        cost = number * 0.53;
    else
        cost = (number-50) * 0.58 + 0.53 * 50;    
    printf("cost= %.2f", cost);    
    return 0;
}