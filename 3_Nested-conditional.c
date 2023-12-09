#include<stdio.h>
int main()
{
    int Cash;
    scanf("%d",&Cash);
    if(Cash>=5000)
    {
        printf("I'll go to Cox's Bazar\n");
        if(Cash>=10000)
        {
        printf("I'll go to America\n");
        }
        else
        {
            printf("I'll Come back\n");
        }
    }
    else
    {
        printf("I won't go anywhere\n");
    }
    return 0;
}