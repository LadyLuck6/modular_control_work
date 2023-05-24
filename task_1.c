#include <stdio.h>

// Функція для введення елементів масиву
void inputArray(float arr[], int n)//Функція inputArray оголошена з типом void, означаючи, що вона не повертає значення. Вона отримує два параметри: arr, який є масивом типу float, і n, який вказує кількість елементів у масиві.
 {
    printf("Введіть елементи масиву:\n");
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i + 1);
        scanf("%f", &arr[i]);
    }
}

// Функція для виведення елементів масиву
void outputArray(float arr[], int n) {
    printf("Елементи масиву:\n");
    for (int i = 0; i < n; i++) {
        printf("a[%d] = %.2f\n", i + 1, arr[i]);
    }
}

// Функція для обчислення показника b = a₁ * a₂ * ... * aₙ
float calculateProduct(float arr[], int n) {
    float product = 1.0;//збереження добутку
    for (int i = 0; i < n; i++) {
        product *= arr[i];
    }
    return product;// процес повторюватиметься для кожного елемента
}

int main() {
    int n;
    printf("Введіть кількість елементів масиву (n): ");
    scanf("%d", &n);

    float arr[n];
    inputArray(arr, n); // Введення елементів масиву
    outputArray(arr, n); // Виведення елементів масиву

    float b = calculateProduct(arr, n); // Обчислення показника b
    printf("Результат: b = %.2f\n", b);
    return 0;
}