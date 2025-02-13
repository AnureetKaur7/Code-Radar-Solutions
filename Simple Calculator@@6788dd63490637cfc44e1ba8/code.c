#include<stdio.h>
int main(){
    int a,b;
    float result;
    char c;
    scanf("%d %d %d",&a,&b,&c);
    if(c = '+'){
        result = a+b;
        printf("%f",result);
    }
    else if(c = '-'){
        result = a-b;
        printf("%f",result);
    }
    else if(c = '*'){
        result = a*b;
        printf("%.2f",result);
    }
    else if(c == '/'){
        result = a/b;
        printf("%.2f",result);
    }            
    return 0;
}