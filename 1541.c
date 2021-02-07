#include <stdio.h>


int main()
{
  int a,b,c,area,p;
  double sum;
  for( ; ;)
  {
      scanf("%d" ,&a);
      if(a==0) break;
      else{
        scanf("%d %d" , &b ,&c);
        area = a*b;
        sum = (area*100)/c;
        p = sqrt(sum);
        printf("%d\n" ,p);
      }
  }
    return 0;
}
