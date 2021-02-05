#include <stdio.h>


int main()
{
   int a,b,i;
   int sum1,sum2;
   scanf("%d %d" ,&a ,&b);
   if(a>b){
        sum1 =0;
   for(i=b ; i<=a ; i++)
   {
       if(i % 13 !=0)
        sum1 = sum1 + i;
   }

   printf("%d\n", sum1);
   }

   else if (a<b)
   {    sum2 =0;
       for(i=a;i<=b;i++)
       {
           if(i % 13!=0)
            sum2 = sum2 +i;
       }

       printf("%d\n" , sum2);
   }
    return 0;
}
