#include <stdio.h>
#include <string.h>

int main()
{
    int n,p,i;
    char x[100];
    scanf("%d" ,&n);
    for(i=0;i<n;i++)
    {
        scanf("%s %d" ,x,&p);
        if(!strcmp(x, "Thor"))printf("Y\n");
        else printf("N\n");
    }
    return 0;
}
