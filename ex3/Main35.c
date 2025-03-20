#include <stdio.h>

int main(){
    char v = 'A';
    char* p = NULL;
    // int* p = NULL;
    p = &v;
    printf("Address of V: %d\n",v);
    printf("Address stored in p: %x\n",p);
    printf("Address of p: %x\n",&p);
    printf("Value of *p: %c\n",*p);
    return 0;
}