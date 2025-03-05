#include <stdio.h>

int main(){
    char a[] = "AABBBCCCCddd";
    char current = a[0];
    int arr_size = sizeof(a)/sizeof(a[0]);
    int count = 0;
    for(int idx=0;idx<arr_size;idx++){
        if(a[idx]!=current){
            printf("%c%d",current,count);
            current = a[idx];
            count = 1;
        }else{
            count++;
        }
    }
    printf("\n");
    return 0;
}