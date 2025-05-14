#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int user;
     scanf("%d",&user);
    switch(user)
    {
        case 1:
        printf("%dAdd:",a+b);
        break;
        case2:
        printf("%dSub:",a-b);
        break;
        case 3:
        printf("%dMul:",a*b);
        break;
        case 4:
        printf("%ddiv:",a/b);
        break;
        case 5:
        printf("%dmod",a%b);
        break;
        
    }
}