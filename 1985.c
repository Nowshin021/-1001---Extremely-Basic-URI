#include <stdio.h>


int main()
{
    int n,x,y,i;
    double sum = 0.0;
    scanf("%d" ,&n);
    for(i=0;i<n;i++){
        scanf("%d %d" ,&x,&y);
        if(x==1001) sum = sum + y*1.50;
        else if(x==1002) sum = sum + y*2.50;
        else if(x==1003) sum = sum + y*3.50;
        else if(x==1004) sum = sum + y*4.50;
        else if(x==1005) sum = sum + y*5.50;
    }

    printf("%.2lf\n",sum);
    return 0;
}
