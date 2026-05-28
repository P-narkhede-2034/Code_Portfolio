// input : 12   2             output = true
// input : 12   3             output = false
// input : 12   12            output = true
// input : 12   5             output = false

#include <stdio.h>
#include <stdbool.h>

bool CheckDivisible(int iNo1 , int iNo2)
{
    if((iNo1 % iNo2) == 0)
    {
         return true;
    }
    else{

        return false;
    }
}

int main()
{ 
    int iValue1 = 0 , iValue2 = 0;
    bool bret = 0; // 0 is false

    printf("enter the first no 1:");
    scanf("%d",&iValue1);

    printf("enter the first no 2 :");
    scanf("%d",&iValue2);

    bret = CheckDivisible(iValue1 ,iValue2);
    if(bret == true)
    {
        printf("It is completely divisible\n");
    }
    else
    {
        printf("It is not divisible\n");
    }

    

    return 0;
}