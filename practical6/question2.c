#include <stdio.h>

int main() {
    //NAME :- AMRITA MANDAL 
    //EPR NO.:-10173
    int n, sum = 0;

    printf("Enter number: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        if(i % 2 != 0)
            continue;   

        sum += i;      
    }

    printf("Sum of even numbers = %d", sum);

    return 0;
}
//OUTPUT:-
//Enter number: 3
//Sum of even numbers = 2
