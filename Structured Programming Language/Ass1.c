#include <stdio.h>

int sum1(int n) {
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int sum2(int n) {
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += i * i;
    }
    return sum;
}

float sum3(int n) {
    float sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }
    return sum;
}

float sum4(int n) {
    float sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += 1.0 / (i * i);
    }
    return sum;
}

int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

float sum5(int n) {
    float sum = 0;
    for(float i = 1; i <= n; i++) {
        sum += (i / factorial(i));
    }
    return sum;
}

void pattern(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

void sort_array() {

    int n;
    printf("Enter the size of the Array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter Array Elements: ");
    for (int i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
    }
  
    for (int i = 0; i < n; i++) {
        int min_index = i;
        for (int j = i; j < n; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }

    printf("Ascending: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nDescending: ");
    for(int i = n-1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
}


int main() {
  printf("Enter a Number: ");
  int n;
  scanf("%d", &n);
  printf("%f", sum5(n));
  return 0;
}