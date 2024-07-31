#include <stdio.h>
int main() {
    int ascii = 97;

    do {
        printf("%c, ", ascii);
        ascii += 4; 
    } while (ascii <= 122); 

    return 0;
}