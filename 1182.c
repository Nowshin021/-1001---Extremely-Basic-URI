#include <stdio.h>


int main()
{
    int n,i,j;
    double a[12][12],sum=0.0;
    char x[2];
    scanf("%d %s" ,&n ,x);
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%lf",&a[i][j]);
        }
    }

    for(i=0;i<12;i++)
    {
        sum = sum + a[i][n];

    }

    if(x[0]=='S') printf("%.1lf\n",sum);
    else if(x[0]=='M') printf("%.1lf\n",sum/12.0);
    return 0;
}
