#include <stdio.h>

int BF(char T[],char S[]){
    int i=0,j=0;
    while(i<7&&j<3){
        if(T[i]==S[j]){
            printf("%c",S[j]);
        i++; 
        j++;
        }
        else{
        i=i-j+1;
        j=0;
        }
    }
    if(j==3)
    return 0;
    else
    return -1;
}

int main(){
    char T[]="ABC\0DEFG";//主串
    char S[]="ABC";//关键字
    int x=BF(T,S);
    printf("%d",x);
    getchar();
    return 0;
}