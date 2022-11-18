#include <stdio.h>
int main() {
    int n, i;
    unsigned long long factorial = 1;
    printf(" ");
    scanf("%d", &n);

   
    if (n < 0)
        printf("Please try again");
    else {
        for (i = 1; i <= n; ++i) {
            factorial *= i;
        }
        printf("%d",factorial);
    }

    return 0;
}