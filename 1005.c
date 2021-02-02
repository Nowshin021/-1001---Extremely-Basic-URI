#include <stdio.h>
#include <stdlib.h>

int main()
{
   double a, b, media;

	scanf("%lf %lf", &a, &b);

	media = (a/11 * 3.5) + (b/11 * 7.5);

	printf("MEDIA = %.5lf\n", media);

    return 0;
}
