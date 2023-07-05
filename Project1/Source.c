#include <stdio.h>

// Function to find the GCD of two numbers
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to find the LCM of two numbers
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

// Function to find the LCM of multiple natural numbers
int find_lcm(int arr[], int n) {
    int result = arr[0];  // Initial LCM value

    // Apply LCM to all elements in the array
    for (int i = 1; i < n; i++) {
        result = lcm(result, arr[i]);
    }

    return result;
}

int main() {
    int p; // Number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &p);

    int arr[30]; // Array to store the numbers
    printf("Enter %d numbers separated by space: ", p);
    for (int i = 0; i < p; i++) {
        scanf("%d", &arr[i]);
    }

    int lcm_result = find_lcm(arr, p);
    printf("Least Common Multiple: %d\n", lcm_result);

    return 0;
}
