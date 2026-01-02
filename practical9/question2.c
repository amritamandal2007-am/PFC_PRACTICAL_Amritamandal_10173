#include <stdio.h>
//NAME-AMRITA MANDAL
//ERP no-10173

int main() {
    int arr[] = {5, 2, 9, 1, 7};
    int n = 5;
    int max = arr[0];
    int min = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d", min);

    return 0;
}
//output-
// Maximum element = 9
// Minimum element = 1
