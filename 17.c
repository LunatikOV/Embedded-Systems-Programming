// Задача №17

#include <stdio.h>


int main() {
    /* 17.	На вход программы поступает последовательность целых чисел. 
    Количество чисел в последовательности заранее неизвестно. 
    Но известно, что в конце последовательности записано число -9999 и 
    в последовательности всегда есть хотя бы одно число, кроме -9999. 
    Вывести все элементы последовательности, кроме заключительного -9999, на экран. 
    Вывести сумму всех элементов последовательности. */
    
    int summa = 0;
    int number = 0;
    while (number != -9999){
        scanf("%d", &number);
        if (number != -9999){
            printf("Введённое число: %d\n", number);
            summa += number;
        }
    }
    
    printf("Сумма всех элементов кроме -9999: %d", summa);

    return 0;
}