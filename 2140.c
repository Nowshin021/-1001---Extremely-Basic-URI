#include <stdio.h>


int main()
{
    int a,b,c;
    while (scanf("%d %d" ,&a ,&b)!=EOF){
          if(a==0 && b==0)  break;  
        c=b-a;
        if(c==7 || c==12 || c==22 || c== 52|| c==102 || c== 15 || c==25 || c==55 || c==105 || c==30 || c==60 || c==110 || c==70 || c==120 || c==150)
        {
            printf("possible\n");
        }

        else printf("impossible\n");
    }
    return 0;
}
