#include <stdio.h>

#define MAX_SACKS 100000

int main()
{
    int n, q;
    int sacks[MAX_SACKS];

    scanf("%d %d", &n, &q);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &sacks[i]);
    }

    for (int query = 0; query < q; query++)
    {
        int type, i, j, v;
        scanf("%d", &type);

        switch (type)
        {
        case 1:
            scanf("%d", &i);
            if (i >= 0 && i < n)
            {
                printf("%d\n", sacks[i]);
                sacks[i] = 0;
            }
            break;
        case 2:
            scanf("%d %d", &i, &v);
            if (i >= 0 && i < n)
            {
                sacks[i] += v;
            }
            break;
        case 3:
            scanf("%d %d", &i, &j);
            int sum = 0;
            if (i >= 0 && i <= j && j < n)
            {
                for (int k = i; k <= j; k++)
                {
                    sum += sacks[k];
                }
            }
            printf("%d\n", sum);
            break;
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", sacks[i]);
    }
    printf("\n");

    return 0;
}