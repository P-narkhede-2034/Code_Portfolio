
//1 2  3 4  5
#include <stdio.h>

void Display(int iNo)
{
    
    int i = 0;
    for ( i = 1 ; i<= iNo; i++)
    {
        printf("%d \t",i);
    }

    printf("\n");

}
int main()
{ 
    int iValue = 0;
    printf("please enter frequency :");
    scanf("%d",&iValue);
    Display(iValue);

    return 0;
}