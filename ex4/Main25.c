#include <stdio.h>
int multi(int i,int j){
    if(i==1&&j==1){
        printf("%d*%d=%d ",i,j,i*j);
        return 0;
    }else if(j==1){ // i--;
        multi(i-1,9);
        printf("%d*%d=%d ",i,j,i*j);
        return 0;
    }else if(j==9){ //每個i的接入點 
        multi(i,j-1);
        printf("%d*%d=%d\n",i,j,i*j);
    }
    else {  // if 1<j<9
        multi(i,j-1);
        printf("%d*%d=%d ",i,j,i*j);
    }
    
}

int main(){
    multi(9,9);
    return 0;
}