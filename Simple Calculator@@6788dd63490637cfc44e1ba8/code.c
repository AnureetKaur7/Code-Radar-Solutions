#include<stdio.h>
int main(){
    int a,b,results;
    int result;
    char c;
    scanf("%d %d %d",&a,&b,&c);
    if(c = '+'){
        results = a+b;
        printf("%d",results);
    }
    else if(c == '-'){
        results = a-b;
        printf("%d",results);
    }
    else if(c == '*'){
        results = a*b;
        printf("%d",results);
    }
    else if(c == '/'){
        if(a%b==0){
        result = a/b;
        printf("%d",result);
        }
        else{
            printf("error");
        }

    }            
    return 0;
}