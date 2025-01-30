#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    int result;
    result = a && (1 << 31);
    if(result != 0){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}