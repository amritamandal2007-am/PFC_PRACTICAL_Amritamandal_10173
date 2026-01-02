#include <stdio.h>
//NAME-AMRITA MANDAL
//ERP NO-10173

int main() {
    int arr[10][10], n, sum = 0;

    printf("Enter the order of square matrix: ");
    scanf("%d", &n);

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
            if (i == j) {
                sum += arr[i][j];
            }
        }
    }

    printf("Sum of diagonal elements = %d", sum);
    return 0;
}
// Enter the order of square matrix: 3
// Enter elements of the matrix:
// 1 2 3
// 3 5 6
// 2 3 4
// Sum of diagonal elements = 10
