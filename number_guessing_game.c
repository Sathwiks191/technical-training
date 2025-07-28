#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int guess, number;
    srand(time(0));
    number = rand() % 100 + 1;
    do {
        scanf("%d", &guess);
        if (guess > number)
            printf("Lower\n");
        else if (guess < number)
            printf("Higher\n");
        else
            printf("Correct\n");
    } while (guess != number);
    return 0;
}
