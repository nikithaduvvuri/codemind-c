#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int divisorsCount = 0;
    for(int i = 1;i <= n;i++)
    {
        int count=0;
        for(int j = 1;j <=i;j++)
        {
            if(i % j == 0)
            {
                count++;
            }
        }
        if(count==9)
        {
            printf("%d ",i);
            divisorsCount++;
        }
    }
    printf("
Total=%d",divisorsCount);
}