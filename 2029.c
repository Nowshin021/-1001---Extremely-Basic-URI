#include <stdio.h>
int main()
{
    double v,d,a,area,height;
    while(scanf("%lf %lf" ,&v,&d)!=EOF){
        a=d/2.0;
        area = 3.14*a*a;
        height=v/(float)area;
        printf("ALTURA = %.2lf\n",height);
        printf("AREA = %.2lf\n",area);
    }
    return 0;
}
