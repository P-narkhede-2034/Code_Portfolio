// itration
#include<stdio.h>

int main()
{

    int ino = 723614;
    int idigit = 0;
     printf("-------------------------------------------------\n");

    printf("original value of ino is %d\n",ino);

    while(ino != 0)
    {
        printf("-------------------------------------------------\n");

        idigit = ino % 10;
        printf(" idigit is :%d\n",idigit);
        ino = ino / 10;
        printf(" ino is : %d\n",ino);
    
    }

     printf("-------------------------------------------------\n");

    return 0;
}