#include <stdio.h>

int main() {
    char helloWorld[] = "Hello World! \n";
    
    if (helloWorld[0] == 'H' && helloWorld[1] == 'e') {
        for (int i = 0; i < 5; i++) {
            printf(helloWorld);
        }
    }

    return 0;
}