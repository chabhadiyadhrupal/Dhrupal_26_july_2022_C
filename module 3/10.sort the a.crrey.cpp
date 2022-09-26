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
}//Write a program to sort the array of 5 elements.
#include <stdio.h>
int main()
{
	int a, b, c, num[5];
    for (a = 0; a < 5; ++a)
    {
        printf("Enter num[%d]: ",a);
        scanf("%d", &num[a]);
    }
    for (a = 0; a < 5; ++a)
    {
        for (b = a + 1 ; b < 5; ++b)
        {
             if (num[a] > num[b])
            {
                c = num [a];
                num[a] = num[b];
                num[b] = c;
            }
        }
    }
    for (a = 0; a < 5; ++a)
        {
            printf("num[%d]: %d\n",a, num[a]);
        }
}
