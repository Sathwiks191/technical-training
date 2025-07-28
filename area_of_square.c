#include <stdio.h>
int area(int side) {
    return side * side;
}
int main() {
    int s;
    scanf("%d", &s);
    printf("%d", area(s));
    return 0;
}
