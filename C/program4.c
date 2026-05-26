// add two no take input user using function
#include<stdio.h>

int addition(int a, int b)
{
    int sum = 0;
     sum = a + b;   //business logic
    return sum;
}
int main()
{
    int i = 0 , j = 0 , ans = 0;
    
    printf("Enter first no :- ");
    scanf("%d",&i);

    printf("Enter second no :- ");
    scanf("%d",&j);

     ans = addition(i,j);
    printf("addition is : %d\n",ans);

    return 0;
}