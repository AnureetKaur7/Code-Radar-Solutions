#include <stdio.h>
int main() {
    int a,b;
    scanf("%a %b",&a,&b);
    int result;
    result = a >> b;
    printf("%d", result)
    return 0;
}