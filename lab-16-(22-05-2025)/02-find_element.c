
#include <stdio.h>

int main() {
    int n, f;


    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];


    for (int i = 0; i < n; i++) {
        printf("Enter Element[%d]: ", i + 1);
        scanf("%d", &arr[i]);
    }

   
    printf("Enter the element you want to find: ");
    scanf("%d", &f);


    for (int i = 0; i < n; i++) {
        if (f == arr[i]) {
            printf("Element %d found at index: %d\n", f, i);
            return 0;  
        }
    }

 
    printf("Element %d not found in the array.\n", f);
    return 0;
}
