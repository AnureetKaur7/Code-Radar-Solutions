#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    if(a+b>c && b+c>a && a+c>b){
        if(a==b && b==c && a==c){
            printf("Equilateral");
        }
        else if((a==b && b!=c) || (a!=b && b==c) || (a==c && b!=c)){
            printf("Isoceles");
        }
        else{
            printf("Scalene");
        }
    }
    return 0;
}