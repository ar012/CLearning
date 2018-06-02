#include <stdio.h>

int main()
{
    int n1, n2, result;
    n1 = 101;
    n2 = 10;
    result = n1 + n2;
    printf("%d", result);
    return 0;
}

#include <stdio.h>
int main()
{
    int n, result;

    scanf("%d", &n);

    result = n*(n+1)/2;

    printf("result = %d\n", result);

    return 0;
}
