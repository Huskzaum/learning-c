#include <stdio.h>
#include<math.h>

int main() {

    int p, n;

    do {
        printf("Enter two numbers: ");
        scanf("%d %d", &p, &n);
        if (n < 0) {
            printf("The second number is invalid, try again! 'n >=0'\n");
        }
    } while (n < 0);
    
    printf("Result: %.2lf\n", pow(p, n));
}