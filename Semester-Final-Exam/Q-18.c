//18. Write a C program to perform bubble sort on 10 integer numbers in an ascending order.

#include <stdio.h>

int main() {
    int arr[10];

    for(int i=0; i<10; i++){
        printf("enter array element %d ", i+1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10 - i - 1 ; j++) {

            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

  for(int i=0; i<10; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
