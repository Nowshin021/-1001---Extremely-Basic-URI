#include <stdio.h>


int main()
{
    int n,i,c=0,d=0,e=0,f=0;
    scanf("%d" ,&n);
    int x[n];
    for(i=0;i<n;i++){
        scanf("%d" ,&x[i]);
        if(x[i]%2==0) c++;
        if(x[i]%3==0) d++;
        if(x[i]%4==0) e++;
        if(x[i]%5==0) f++;
    }
 printf("%d Multiplo(s) de 2\n",c);
    printf("%d Multiplo(s) de 3\n",d);
    printf("%d Multiplo(s) de 4\n",e);
    printf("%d Multiplo(s) de 5\n",f);

    return 0;
}
