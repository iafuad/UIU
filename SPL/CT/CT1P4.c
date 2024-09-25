#include <stdio.h>

int main()
{
    int password, flag1 = 0, flag2 = 0, flag3 = 0;

    scanf("%d", &password);

    password = password / 10;

    if (password % 2 == 0)
    {
        flag1 = flag2;
    }
    if (password % 2 == 1)
    {
        flag1 = !flag2;
    }

    if (password % 10 == 3)
    {
        printf("You will Die\n");
    }
    else if (password % 10 == 7)
    {
        printf("Hell is waiting for you\n");
    }
    else if (password % 10 == 5)
    {
        printf("Try Jing da Ding Dong\n");
    }
    else
    {
        flag2 = 1;
        password = password / 10;
    }

    if (password % 2 == 0)
    {
        if (password < 10)
        {
            password--;
        }
        else if ((password >= 6) || (password < 15))
        {
            printf("Why are you trying?\n");
        }
        if (password >= 7 && password < 10)
        {
            flag3 = 1;
        }
    }

    if (flag1 == 1 && flag2 && flag3 != 0)
    {
        printf("The box is Unlocked\n");
        // Unlock();
    }
    else
    {
        printf("Too close but not close enough\n");
    }
    return 0;
}