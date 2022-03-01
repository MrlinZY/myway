#include <string.h>
#include <stdio.h>
int main(){
    char cur;
    char now;
    char arr[200]="i hope no war";
    for(int i=0;i<(strlen(arr));i++){
        if(arr[i]!=' '){
            printf("%c",arr[i]);
        }
        else{
            for(int j=strlen(arr)+3;j>i+3;j--){
                arr[j]=arr[j-3];
            }
            getc(stdout);
            arr[i+1]='%';
                arr[i+2]='2';
                arr[i+3]='0';
        }
    }
    getchar();
    return 0;
}