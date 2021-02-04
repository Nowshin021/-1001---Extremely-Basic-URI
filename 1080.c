#include <stdio.h>

int main()
{
 int n,i,p;
    int max = 0;
 for(i=1;i<=100;i++)
 {
     scanf("%d" , &n);
     if(n > max)
     {
         max = n;
         p = i;
     }
 }

 printf("%d\n%d\n" , max ,p);

}
