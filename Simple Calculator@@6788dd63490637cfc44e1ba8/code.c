#include<stdio.h>
int main(){
    int a,b,result;
    char c;
    scanf("%d %d %d",&a,&b,&c);
    if(c = '+'){
        result = a+b;
        printf("result");
    }
    else if(c = '-'){
        result = a-b;
        printf("result");
    }
    else if(c = '*'){
        result = a*b;
        printf("result");
    }
    else if(c = '/'){
        result = a/b;
        printf("result");
    }            
    return 0;
}