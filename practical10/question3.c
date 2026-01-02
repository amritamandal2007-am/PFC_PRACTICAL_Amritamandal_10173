#include <stdio.h>
//NAME -AMRITA MANDAL
//ERP NO-10173

int main() {
    int arr[10][10], r, c, sum;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of the 2D array:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < r; i++) {
        sum = 0;
        for (int j = 0; j < c; j++) {
            sum += arr[i][j];
        }
        printf("Sum of row %d = %d\n", i + 1, sum);
    }

    return 0;
}
// Enter number of rows and columns: 3 4
// Enter elements of the 2D array:
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// Sum of row 1 = 10
// Sum of row 2 = 26
// Sum of row 3 = 42
