/*Обчислити суму квадратів всіх парних чисел у діапазоні [1;20].
* з використанням циклу з передумовою

*/
#include <stdio.h>//Підключаємо необхадні для роботи бібліотеки "Одну"

int main() {// Оголошуємо змінні
    int sum = 0; //Змінна для зберігання суми
    int i = 2;//Змінна для ітерації по парних числах

    while (i <= 20) {// Виконувати цикл, поки 'i' не перевищить 20
        sum += i * i;// Додавати квадрат поточного числа до суми
        i += 2;// Збільшувати i на 2 для переходу до наступного парного числа
    }

    printf("Сума квадратів всіх парних чисел у діапазоні [1;20]: %d\n", sum);//Виведення результату "1540" На екран юзера

    return 0;//Кінець програми
}
