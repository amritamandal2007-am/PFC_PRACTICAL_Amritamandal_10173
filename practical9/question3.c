#include <stdio.h>
//NAME-AMRITA MANDAL
//ERP NO-10173

int main() {
    int arr[100], n, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }

    printf("Sum of even elements = %d", sum);
    return 0;
}
//output-
// Enter number of elements: 5
// Enter array elements:
// 1 2 3 4 5
// Sum of even elements = 6