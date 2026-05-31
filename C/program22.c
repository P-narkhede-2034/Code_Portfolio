// itration
//get user no count digit
#include<stdio.h>

int  CountDigit(int ino)
{
    int idigit = 0;
    int icount = 0;

    while(ino != 0)
    {
        idigit = ino % 10;
        ino = ino / 10;
        icount++;
    }

    return icount;

}

int main()
{

    int iValue = 0;
    int iret =0;

    printf("enter the no :");
    scanf("%d",&iValue);
     iret = CountDigit(iValue);

     printf("no of digit :%d\n",iret);

    return 0;
}