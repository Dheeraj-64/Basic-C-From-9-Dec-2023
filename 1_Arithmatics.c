#include<stdio.h>

int main()
{
    int a=10,b=55;
    int sum=a+b;
    printf("sum=%d\n",sum);

    int mns=b-a;
    printf("mns=%d\n",mns);

    int mlt=a*b;
    printf("mlt=%d\n",mlt);

    float dvd=b*1.0/a;
    printf("dvd=%f\n",dvd);

    int mod=b%a;
    printf("mod=%d",mod);

    return 0;
}