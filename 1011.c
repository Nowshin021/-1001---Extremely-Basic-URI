#include <stdio.h>
#include <stdlib.h>

int main()
{
  double r,ans,pi =  3.14159;
  scanf("%lf", &r);
  ans = (4/3.0) * pi *(r*r*r);
  printf("VOLUME = %.3lf\n", ans);

    return 0;
}
