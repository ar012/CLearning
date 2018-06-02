#include <stdio.h>

int main()
{
    int i, n, result;
    printf("Enter your number: ");
    scanf("%d", &n);
    result = 0;
    for (i = 1; i<=n; i++){
        result = result + i;
    }
    printf("Result = %d\n", result);
    return 0;
}
