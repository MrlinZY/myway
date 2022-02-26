#include <iostream>
#include <malloc.h>
using namespace std;

typedef struct a {
    int date;
    struct a* top;
}Slink;//创建一个链栈，包含头指针以及数据域

void menu() {
    cout<<"please choose"<<endl;
    cout<<"  1. push  "<<endl;
    cout<<"  2. cou  "<<endl;
    cout<<"  0. pop  "<<endl;
}//尝试的目录

void push(Slink* phead, int n) {
    Slink* n_ew;
    n_ew=(Slink*)malloc(sizeof(Slink));
    n_ew->date=n;
    n_ew->top=phead->top;
    phead->top=n_ew;
    return;
}//压栈

void cou(Slink* phead) {
    Slink* cur=phead;
    while (cur->top!=NULL){
        /* code */
        cur=cur->top;
        cout<<cur->date<<endl;
    }
        cur=cur->top;
}//显示栈元素

void pop(Slink* phead){
    Slink* cur=phead->top;
    phead->top=phead->top->top;
    free(cur);
}//出栈

int main() {
    Slink* pheadlist;//创建头部指针，或者说叫做栈顶
    pheadlist=(Slink*)malloc(sizeof(Slink));//为指针开辟一块空间
    pheadlist->top=NULL;
    int n;
    do {
        menu();
        int input;
        cin>>input;
        if (1==input) {
            /* code */
            cin>>n;
            push(pheadlist, n);
        }
        else if (2==input) {
        cou(pheadlist);
        }
        else if (0==input) {
            /* code */
            pop(pheadlist);
        }
    }while(1);
    getchar();
    return 0;
}