#include <stdio.h>


int main()
{
    int i,n,p,a;
    double x,max =0.0;
    scanf("%d" ,&n);
    for(i=0;i<n;i++){
        scanf("%d %lf" ,&a ,&x);
        if(x> max){
            max = x;
             p = a;
        }

    }

    if(max<8.0) printf("Minimum note not reached\n");
    else printf("%d\n" , p);
    return 0;
}
