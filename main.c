#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    printf("Игра: угадай число \n");
    //создание случайного значения 
    srand((unsigned int)time(NULL));
    int num = 1+rand()%100;

    int input = 0;
    while (1){
        printf("Какое число я загадал? \n");
        if (scanf("%d", &input)) {
            if (input == num){
                printf("Правильно!!!! \n");
                break;
            }
            if (input > num) {
                printf("Загаданное число меньше \n");
            } else if (input < num){
                printf("Загаданное число больше \n");
            }
        }else {
            printf(" ошибка ввода \n");
            return -1;
        }
    }
    return 0;
}