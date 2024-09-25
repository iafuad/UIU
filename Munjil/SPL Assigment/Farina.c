#include <stdio.h>

#define MAX_WEEKS 44

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int w;
        scanf("%d", &w);

        int problems[MAX_WEEKS];
        for (int i = 0; i < w; i++)
        {
            scanf("%d", &problems[i]);
        }

        int r1, r2;
        scanf("%d %d", &r1, &r2);

        int flag = 0;
        for (int i = r1; i <= r2 && i < w; i++)
        {
            if (problems[i] >= 10)
            {
                printf("%d ", i);
                flag = 1;
            }
        }
        if (!flag)
        {
            printf("No weeks meet the target in the given range");
        }
        printf("\n");
    }

    return 0;
}