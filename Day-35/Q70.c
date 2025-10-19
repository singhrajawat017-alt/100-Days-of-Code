//Q70.Rotate an array to the right by k positions
#include <stdio.h>
int main() {
    int n, k, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[100];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of positions to rotate (k): ");
    scanf("%d", &k);

    k = k % n;
    int temp[k];
    for(i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }
    for(i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }
    for(i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
    printf("Array after rotating right by %d positions:\n", k);
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
