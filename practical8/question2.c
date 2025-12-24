#include <stdio.h>
//NAME:-AMRITA MANDAL
//ERP No.:-10173

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Before swap: x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("After swap: x = %d, y = %d\n", x, y);

    return 0;
}
//output
// Enter two numbers: 6
// 8
// Before swap: x = 6, y = 8
// After swap: x = 8, y = 6
