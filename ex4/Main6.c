#include <stdio.h>
unsigned long long factorial(unsigned long long  n){
    if(n==1){
        return 1;
    }
    return n * factorial(n-1);
}

int main(){
    unsigned long long  n=23;
    unsigned long long  m = factorial(n);
    printf("factorial %llu = %llu\n",n,m);
    return 0;
}