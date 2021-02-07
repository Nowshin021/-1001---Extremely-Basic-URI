#include <stdio.h>


int main()
{
   int n,p,q,i,s;
   scanf("%d" ,&n);
   for(i=0;i<n;i++)
   {
       scanf("%d %d" ,&p ,&q);
       s = p+q;
       printf("%d\n" , s);

   }

    return 0;
}
