#include<stdio.h>
int main()
{
    int a,b,n;
    printf ("enter Number a and b : ");
    scanf("%d %d",&a,&b);
    while(b)
    {
        n=a%b;
        a=b;
        b=n;
    }

    printf("value is : %d",a );


return 0;

}