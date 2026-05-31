// itration
//get user no count digit
#include<stdio.h>

int  SumDigit(int ino)
{
    int isum = 0 , idigit = 0;

    if(ino < 0)
    {
        ino = -ino ;
    }
    while(ino != 0)
    {
        idigit = ino % 10;
        ino = ino / 10;
        isum = isum + idigit;
    }

    return isum;

}

int main()
{

    int iValue = 0;
    int iret =0;

    printf("enter the no :");
    scanf("%d",&iValue);
     iret = SumDigit(iValue);

     printf("sum of digit :%d\n",iret);

    return 0;
}