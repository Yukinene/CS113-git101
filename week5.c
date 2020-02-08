#include<stdio.h>

//functions with pointer

void addTen(int *numbers, int n) //call by value
{
    for (int i = 0; i < n ; i++)
    {
        printf("number + %d addr = %p, %d\n",i,numbers+i,*(numbers+i));
        *(numbers + i)+=10 ; 
    }
    
}
int addTwenty(int *n) //simulate call by reference
{
    *n+=20;
    return 1 ;
}

int main()
{
    int numbers[] = {5,6,7,8,9,0};
    int n = 6;

    addTen(numbers,n); //addTen(&numbers[0],n);
    for (int i = 0; i < 6; i++)
    {
        printf("number[%d] = %d\n",i,numbers[i]);
    }
    addTwenty(&n); //addTwenty(address(n[]))
    printf("n = %d\n",n);
}