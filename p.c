#include <stdio.h>
#include <string.h>

int main() {
    char binary[100];
    int i, count = 0;
    char parity_choice;

    // Input binary number as a string
    printf("Enter a binary number: ");
    scanf("%s", binary);

    // Ask the user for parity type
    printf("Choose parity - even (e) or odd (o) :  ");
    scanf(" %c", &parity_choice);

    // Count number of 1s in the binary string
    for (i = 0; i < strlen(binary); i++) {
        if (binary[i] == '1') {
            count++;
        }
    }
    // Calculate parity
    // e 
    if (parity_choice == 'e') {
        // Even Parity
        if (count % 2 == 0) {
            strcat(binary, "0");  // Append 0 for even parity
        } else {
            strcat(binary, "1");  // Append 1 for even parity
        }
    } else if (parity_choice == 'o') {
        // Odd parity
        if (count % 2 == 0) {
            strcat(binary, "1");  // Append 1 for odd parity
        } else {
        }
    } else {
        strcat(binary, "0");  // Append 0 for odd parity
        printf("Invalid parity choice ! \n");
        return 1;
    }
    // Output the parity encoded binary number
    printf("Parity encoded data : %s\n", binary);
    return 0;
}