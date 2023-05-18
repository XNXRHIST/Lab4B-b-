#include <stdio.h>

int main() {
    int sum = 0;
    int i = 2;

    while (i <= 20) {
        sum += i * i;
        i += 2;
    }

    printf("Сума квадратів всіх парних чисел у діапазоні [1;20]: %d\n", sum);

    return 0;
}
