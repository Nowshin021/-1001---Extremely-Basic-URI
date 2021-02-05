#include <stdio.h>


int main()
{
    int n,a,b,i,c=0;
    double ga,gb;
    scanf("%d" ,&n);
    for(i=0;i<n;i++)
    {
        c=0;
        scanf("%d %d %lf %lf",&a, &b ,&ga ,&gb);

        while(a<=b)
        {
            a = a+((a*ga)/100.0);
            b = b+((b*gb)/100.0);
            c++;

            if(c>100){ printf("Mais de 1 seculo.\n");
            break; }
        }

        if(c<=100) printf("%d anos.\n" , c);
    }
    return 0;
}
