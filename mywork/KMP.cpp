#include <iostream>
using namespace std;
#define size 7

void get_next(char* T,char* NEXT){
    int k=-1;//k其实是前端
    NEXT[0]=-1;
    int i=0;
    while (i<size)
    {
        if(k==-1||T[i]==T[k]){//前端等于-1，或者代表前端等于后端时都往后挪一位，next【】记录下来
            i++;
            k++;
            NEXT[i]=k;//
        }
        else{//当前位与匹配位不符合，回溯
            k=NEXT[k];//有点递归的意思
        }
    }
}

int main(){
    char* T="ababaab";
    char NEXT[10];
    get_next(T,NEXT);
    for (int i = 0; i < size; i++)
    {
        printf("%d",NEXT[i]);
    }
    
    getchar();
    return 0;
}
