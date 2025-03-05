#include <stdio.h>

int main(){
    char a[]= "A4B1C3f3";
    char letter;
    int arr_size = sizeof(a)/sizeof(a[0]);
    int count = 0;
    for(int idx=0;idx<arr_size;idx++){
        // process letter
        if(idx%2==0){
            letter = a[idx]; 
        }else{ // process number and print out
            count = (int)(a[idx]-'0'); // ASCII value to int
            for(int i=0;i<count;i++){
                printf("%c",letter);
            }
        }
    }
    printf("\n");
    return 0;
}