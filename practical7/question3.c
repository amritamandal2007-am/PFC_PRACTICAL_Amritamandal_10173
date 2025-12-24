#include <stdio.h>
//NAME:-AMRITA MANDAL
//ERP No.:-10173

int main() {
    
    for(char i = 'A'; i <= 'D'; i++) {
        for(char j = 'A'; j <= i; j++) {
            printf("%c", j);
        }
        printf("\n");
    }
    return 0;
}
//output
/*
A
AB
ABC
ABCD
*/