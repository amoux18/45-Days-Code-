#include <stdio.h>

int main() {
    int n;
    
    printf("Enter the num of friends: ");
    scanf("%d", &n);

    int carsrequired = (n + 3) / 4;

    printf("Min num of cars required: %d\n", carsrequired);

    return 0;
}
