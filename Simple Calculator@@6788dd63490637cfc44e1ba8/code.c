#include<stdio.h>
int main(){
    int a,b,results;
    float result;
    char c;
    scanf("%d %d %d",&a,&b,&c);
    if(c = '+'){
        results = a+b;
        printf("%d",results);
    }
    else if(c = '-'){
        results = a-b;
        printf("%d",results);
    }
    else if(c = '*'){
        results = a*b;
        printf("%d",results);
    }
    else if(c = '/'){
        result = a/b;
        printf("%.2f",result);
    }            
    return 0;
}