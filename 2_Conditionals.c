#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if(tk >= 100)
    {
        printf("Berate Jabo\n");
    }
    else if(tk >=60)
    {
        printf("Nachbo\n");
    }
    else
    {
        printf("Ghumabo\n");
    }
    return 0;
}
