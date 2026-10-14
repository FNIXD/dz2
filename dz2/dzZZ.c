#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    double x, sum;
    int a;

    printf("Введите ставку за час x (руб.): ");
    scanf("%lf", &x);

    printf("Введите количество отработанных часов a (> 38): ");
    scanf("%d", &a);

    int zp = (a < 38) ? a : 38;
    int pere = (a > 38) ? (a - 38) : 0;

    sum = x * zp + 1.5 * x * pere;

    printf("\n--- Расчёт заработной платы ---\n");
    printf("Ставка за час:         %.2f руб.\n", x);
    printf("Отработано часов:      %d ч.\n", a);
    printf("Обычных часов: %d ч.\n", zp);
    printf("Сверхурочных часов:    %d ч.\n", pere);
    printf("Оплата за 38 часов:    %.2f руб.\n", x * zp);
    printf("Оплата за переработку: %.2f руб.\n", 1.5 * x * pere);
    printf("--------------------------------\n");
    printf("ИТОГО к выплате:       %.2f руб.\n", sum);

    return 0;
}