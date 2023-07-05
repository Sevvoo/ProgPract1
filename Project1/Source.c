#include <stdio.h>

// Функція для знаходження найбільшого спільного дільника (НСД) двох чисел
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Функція для знаходження найменшого спільного кратного (НСК) двох чисел
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

// Функція для знаходження НСК різних натуральних чисел
int find_lcm(int arr[], int n) {
    int result = arr[0];  // Початкове значення НСК

    // Застосовуємо НСК до всіх елементів масиву
    for (int i = 1; i < n; i++) {
        result = lcm(result, arr[i]);
    }

    return result;
}

int main() {
    int n; // Кількість елементів
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[20]; // Масив для зберігання чисел
    printf("Enter %d numbers separated by space: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int lcm_result = find_lcm(arr, n);
    printf("Least Common Multiple: %d\n", lcm_result);

    return 0;
}
