#include <stdio.h>

int main() {
    //NAME:- AMRITA MANDAL
    //ERP NO.10173
    int pin = 1234;     
    int enteredPin;
    int attempts = 3;

    while (attempts > 0) {
        printf("Enter ATM PIN: ");
        scanf("%d", &enteredPin);

        if (enteredPin == pin) {
            printf("PIN verified successfully. Access granted.\n");
            return 0;
        } else {
            attempts--;
            printf("Incorrect PIN. Attempts left: %d\n", attempts);
        }
    }

    printf("ATM card blocked. Too many wrong attempts.\n");
    return 0;
}
//output:
//Enter ATM PIN: 5467
//Incorrect PIN. Attempts left: 2
//Enter ATM PIN: 234
//Incorrect PIN. Attempts left: 1
//Enter ATM PIN: 1234
//PIN verified successfully. Access granted.
