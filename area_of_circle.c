#include <stdio.h>
float area(float radius) {
    return 3.14 * radius * radius;
}
int main() {
    float r;
    scanf("%f", &r);
    printf("%0.2f", area(r));
    return 0;
}
