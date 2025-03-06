#include <stdio.h>

void print_sp(int i,int n){
    int space_length=n-i;
    for(int j=0;j<space_length;j++){
        printf("%s"," ");
    }
}

void print_num(int n){
    for(int j=1;j<=n;j++){
        printf("%d",n);
        printf(" ");
    }
}

int main(){
    int rows = 6;
    for(int i=1;i<=rows;i++){
        print_sp(i,rows);
        print_num(i);
        printf("\n");
    }
    return 0;
}