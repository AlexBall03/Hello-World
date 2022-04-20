#include <stdio.h>

int main() {
    char helloWorld[] = "Hello World!";
    
    if (helloWorld[0] == 'H' && helloWorld[1] == 'e') {
        printf("%s", helloWorld);
    }

    return 0;
}