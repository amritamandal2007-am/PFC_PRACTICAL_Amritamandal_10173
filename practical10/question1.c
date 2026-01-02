#include <stdio.h>
//NAMe-AMRITA MANDAL
//ERP NO-10173

int main() {
    int arr[10][10], r, c;
    int max, min;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of the 2D array:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    max = min = arr[0][0];

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (arr[i][j] > max)
                max = arr[i][j];
            if (arr[i][j] < min)
                min = arr[i][j];
        }
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}
// Enter number of rows and columns: 2 3
// Enter elements of the 2D array:
// 1 2 3
// 2 3 4
// Maximum element = 4
// Minimum element = 1