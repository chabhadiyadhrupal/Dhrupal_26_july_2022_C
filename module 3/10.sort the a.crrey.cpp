#include <stdio.h>
int main()
{
	int d, h, r, num[5];
    for (d = 0; d < 5; ++d)
    {
        printf("Enter num[%d]: ",d);
        scanf("%d", &num[d]);
    }
    for (d = 0; d < 5; ++d)
    {
        for (h = d + 1; h< 5; ++h)
        {
             if (num[d] > num[h])
            {
                r = num [d];
                num[d] = num[h];
                num[h] = r;
            }
        }
    }
    for (d = 0; d < 5; ++d)
        {
            printf("num[%d]: %d\n",d, num[d]);
        }
}
