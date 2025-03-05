#include <stdio.h>

int main(){
    char a[] = "10001111";
    int arr_size = sizeof(a)/sizeof(a[0]);
    int num = 0;
    int temp_sum = 1;
    int digit;
    int power = 3;
    for(int idx=0;idx<arr_size;idx++){
        digit = (int)(a[idx]-'0');
        if(digit==1){
            for(int i=0,temp=0;i<power;i++){
            temp_sum *=2;
            }
            num +=temp_sum;
            temp_sum=1;
        }
        power--;
        if((idx+1)%4==0){
            printf("%X",num);
            power = 3;
            num = 0;
        }
    }
    printf("\n");
    return 0;
}