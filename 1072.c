#include <stdio.h>


int main()
{
    int a,n,i;
    int c=0 , p=0;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d", &a);
        if(a>=10 && a<+20)
        {
            c++;
        }
        else
        {
            p++;
        }
    }

     printf("%d in\n", c);
    printf("%d out\n", p);

    return 0;
}
