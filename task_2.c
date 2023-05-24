#include <stdio.h>
//введення елементів масиву, void слугує для вказання відсутності значення 
void readArray(double arr[], int n) {
    printf("Введіть елементи масиву:\n");
    for (int i = 0; i < n; i++) {
        printf("a%d = ", i + 1);
        scanf("%lf", &arr[i]);
    }
}
//виведення елементів масиву
void printArray(double arr[], int n) {
    printf("Елементи масиву:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2lf ", arr[i]);
    }
    printf("\n");
}
//сортування масиву у порядку спадання
void sortDescending(double arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++)// кожен елементи масиву порівнюються з усіма іншими елементами масиву
         {
            if (arr[j] < arr[j + 1])//перевіряється, чи поточний елемент масиву менший за наступний
             {
                double temp = arr[j];// Зберігаємо значення arr[j] у змінній temp
                arr[j] = arr[j + 1];// Присвоюємо arr[j] значення arr[j + 1]
                arr[j + 1] = temp;// Присвоюємо arr[j + 1] значення temp(для тимчасового зберігання значення)
            }
        }
    }
}//алгоритм сортування бульбашкою

//Знаходження найбільшого значення k у масивах
char findArrayWithLargerElement(double arr1[], double arr2[], int n, int k) {
    sortDescending(arr1, n);
    sortDescending(arr2, n);//сортує масиви у порядку спадання
    if (arr1[k - 1] > arr2[k - 1]) {
        return 'a';
    } else {
        return 'b';
    }
}

int main() {
    int n, k;
    printf("Введіть кількість елементів масиву (n): ");
    scanf("%d", &n);

    double a[n], b[n];//об'являються два масиви
    readArray(a, n);
    readArray(b, n);// функції, які використовуються для заповнення масивів a і b
    sortDescending(a, n);
    sortDescending(b, n);//функції, які сортують масиви у порядку спадання

    printf("Масив A:\n");
    printArray(a, n);//функція, чка виводить елементи масиву
    printf("Масив B:\n");
    printArray(b, n);
     printf("Введіть значення k: ");
    scanf("%d", &k);

    char arrayName = findArrayWithLargerElement(a, b, n, k);//функція, яка  порівнює більший елемент на позиції k в двох вхідних масивах arr1 і arr2
    if (arrayName == 'a') {
        printf("Більший елемент після впорядкування масиву A на %d-му місці: %.2lf\n", k, a[k - 1]);
    } else {
        printf("Більший елемент після впорядкування масиву B на %d-му місці: %.2lf\n", k, b[k - 1]);
    }

    return 0;
}