#include <stdio.h>
 
int main()
{
  int x,i,z,d=0,sum=0;
  scanf("%d %d" , &x,&z);
  while(z<=x) scanf("%d" ,&z);
  for(i=x;i<=z;i++)
  {
      sum = sum+ i;
      if(sum>z) break;
      d++;
  }
  printf("%d\n" , d+1);
    return 0;
}
