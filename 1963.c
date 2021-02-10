#include <stdio.h>
int main()
{
   double a,b,c,ans;
   scanf("%lf %lf" , &a ,&b);
   c = b-a;
   ans = (c*100.0)/a;
   printf("%.2lf%%\n",ans);
    return 0;
}
