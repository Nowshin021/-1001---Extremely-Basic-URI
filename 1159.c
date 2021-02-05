#include <stdio.h>


int main()
{

int x,i,sum=0;
    for(; ;)
    {
        scanf("%d", &x);
        sum=0;
        if(x==0)
            break;
        else if(x%2==0)
        {
            for(i=x; i<=x+8; i=i+2) sum = sum +i;
        }
        else
        {
            for(i=x+1;i<=x+9;i=i+2) sum = sum +i;
        }
        printf("%d\n", sum);
    }



    return 0;
}
