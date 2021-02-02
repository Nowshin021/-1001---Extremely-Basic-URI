#include <stdio.h>
#include <stdlib.h>

int main()
{

  int n;
    int b,c;
    float x,y,z;

    scanf("%d", &n);
    x = (n/3600.0);
    b = x;
    y = (x-b)*60.0;
    c = y;
    z = (y-c)*60.0;
    printf("%d:%d:%.lf\n" , b, c, z);
    return 0;
}
