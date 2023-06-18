#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    
    srand(time(0));
    n = rand() % 201 - 100;  // Generate a random number between -100 and 100
    
    printf("The number %d ", n);
    
    if (n > 0) {
        printf("is positive");
    } else if (n == 0) {
        printf("is zero");
    } else {
        printf("is negative");
    }
    
    printf("\n");
    
    return 0;
}

