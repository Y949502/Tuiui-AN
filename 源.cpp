//#include<stdio.h>
//int main()
//{
//	int i = 1, sum = 1, add = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		for (; i > 0; i--)
//		{
//			sum *= i;
//		}
//		add += sum;
//		sum = 1;
//	}
//	printf("%d", add);
//	return 0;
//}
#include <stdio.h>
int main()
{
    int i, j, n = 1, m = 1;
    int sum = 0;
    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (j == i)
            {
                n = m * j;
                m = n;//记录当前阶乘的积
            }
        }
        sum += n;
    }
    printf("the sum is %d\n", sum);
    return 0;
}