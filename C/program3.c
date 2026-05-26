//add two no take input user
#include<stdio.h>
int main()
{
    int i = 0 , j = 0 , ans = 0;
    
    printf("Enter first no :- ");
    scanf("%d",&i);

    printf("Enter second no :- ");
    scanf("%d",&j);

    ans = i+j;  // business logic
    printf("addition is : %d\n",ans);

    return 0;
}