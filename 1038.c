#include <stdio.h>
#include <stdlib.h>

int main()
{
 int x,y;
 double prize = 0.0;
 scanf("%d %d" ,&x ,&y);
 if(x == 1)
 {
     prize = y*4.00;

 }
 else if(x == 2)
 {
     prize = y*4.50;
 }
 else if(x == 3)
 {
     prize = y*5.00;
 }
 else if( x == 4)

 {
    prize = y*2.00;
 }

 else if(x == 5)
 {
     prize = y*1.50;
 }

 printf("Total: R$ %.2lf\n" , prize);

    return 0;
}
