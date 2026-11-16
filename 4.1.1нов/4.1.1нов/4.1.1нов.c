#include <stdio.h>
#include<Windows.h>
int isLeapYear(int year) {
    if (year % 400 == 0)
        return 1;
    if (year % 100 == 0)
        return 0;
    if (year % 4 == 0)
        return 1;
    return 0;

}

void main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int a, b;

    printf("Введите 2 целых числа.\n");
    printf("1. Начало анализируемого интервала\n");
    printf("2. Конец анализируемого интервала\n");

    scanf_s("%d", &a);
    scanf_s("%d", &b);

    int num = a;
    do {
        // если функция вернула 1 (истина), выводим год
        if (isLeapYear(num)) {
            printf("%d\t", num);
        }
        num++;
    } while (num <= b);

    printf("\n");
}


//правка1