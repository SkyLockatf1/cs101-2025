#include <stdio.h>

int main(){
    FILE* fp;
    int a[] ={0,1,2};
    char b[] = "ABC";
    float c[]={1.1,1.2,1.3};
    int reada[3];
    char readb[4];
    float readc[3];
    // write to bin file
    fp = fopen("a.bin","wb+"); 
    // NULL pointer
    if(fp==NULL){
        return 1;
    }
    fwrite(a,sizeof(a),1,fp);
    fwrite(b,sizeof(b),1,fp);
    fwrite(c,sizeof(c),1,fp);
    // write from bin file
    fseek(fp,0,SEEK_SET);
    fread(reada,sizeof(reada),1,fp);
    fread(readb,sizeof(readb),1,fp);
    fread(readc,sizeof(readc),1,fp);
    // print out all data in array
    for(int i=0;i<sizeof(reada)/sizeof(reada[0]);i++){
        printf("%d ",reada[i]);
    }
    printf("\n");
    for(int i=0;i<sizeof(readb)/sizeof(readb[0]);i++){
        printf("%c ",readb[i]);
    }
    printf("\n");
    for(int i=0;i<sizeof(readc)/sizeof(readc[0]);i++){
        printf("%f ",readc[i]);
    }
    printf("\n");
    fclose(fp);
    return 0;
}