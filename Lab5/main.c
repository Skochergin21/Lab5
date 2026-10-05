#define _CRT_SECURE_NO_DEPRECATE
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int task1(void);
int task2(void);
int task3(int A, int B, int C);
int main(void)
{
    setlocale(LC_ALL, "RUS");
    task1();
    task2();
    return 0;
}

int task1(void)
{
    double grad, aw;
    setlocale(LC_ALL, "RUS");
    printf("Введите угол в градусах\n");
    scanf("%lf", &grad);
    aw = sin(grad * M_PI / 180);
    printf("sin(%.0f град) = %.6f\n", grad, aw);
    system("pause");
    return 0;
}
int task2(void)
{
    double x, y, a, b;
    double c = 0.4;
    printf("Введите x\n");
    scanf("%lf", &x);
    a = log10(x);
    b = a * a + sqrt(c * x);
    y = exp(2 * x) + pow(9.7, b);
    printf("x = %.1f, y = %.2f\n", x, y);
    task3((int)a, (int)b, (int)y);
    return 0;
}

int task3(int A, int B, int C )
{
    int a1, a2;
    a1 = (A % 2 == 0) != (B % 2 == 0);
    a2 = (A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0);
    printf("Только одно из чисел A и B четное, условие выполнено (1 - да, 0 - нет): %d\n", a1);
    printf("Каждое из чисел A, B, C кратно трем, условие выполнено (1 - да, 0 - нет): %d\n", a2);
    printf("end(GithubTestwhvbdsbfjhbahdfsdyFbjYFDAGHSdthJYDFfgDHF)\n");
    system("pause");
    return 0;
}
