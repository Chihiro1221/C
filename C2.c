#include <stdio.h>

int main()
{
    int profit = 0, bonus = 0;
    int stage1 = 100000 * 0.1, stage2 = stage1 + 100000 * 0.075, stage3 = stage2 + 100000 * 0.005, stage4 = stage3 + 200000 * 0.003, stage5 = stage4 + 400000 * 0.015;

    printf("请输入当月利润：");
            scanf("%d", &profit);

    if (profit <= 100000)
    {
        bonus = profit * 0.1;
    }
    else if (profit <= 200000)
    {
        bonus = stage1 + (profit - 100000) * 0.075;
    }
    else if (profit <= 400000)
    {
        bonus = stage2 + (profit - 200000) * 0.05;
    }
    else if (profit <= 600000)
    {
        bonus = stage3 + (profit - 400000) * 0.03;
    }
    else if (profit <= 1000000)
    {
        bonus = stage4 + (profit - 600000) * 0.015;
    }
    else
    {
        bonus = stage5 + (profit - 1000000) * 0.01;
    }

    printf("bonus: %d\n", bonus);
    return 0;
}
