#include <stdio.h>

int main(){
    char a[] = "Hello";
    int arr_size = sizeof(a)/sizeof(a[0]);
    for(int i=arr_size-1;i>=0;i--){
        printf("%c",a[i]);
    }
    printf("\n");
    return 0;
}