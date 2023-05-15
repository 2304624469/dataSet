#include <stdio.h>
    int main()
    {
    int number=0;
    float price=0;
    scanf("%d",&number);
    if(number<=50)
    {
    price=number*0.53;
    printf("cost= %.2f",price);
    }
    else if(number>50)
    {
    price=50*0.53+(number-50)*0.58;
    printf("cost= %.2f",price);
    }
    else if(number<=0)
    {
    printf("Invalid Value!");
    }
    return 0;
    }