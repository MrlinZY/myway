#include <iostream>
#include <malloc.h>
using namespace std;

typedef struct a {
    int date;
    struct a* top;
}Slink;//创建一个链栈，包含头指针以及数据域

void init(Slink* phead) {
    phead->date=0;
    phead->top=NULL;
}//初始化链栈

void menu() {
    cout<<"please choose"<<endl;
    cout<<"  1. push  "<<endl;
    cout<<"  2. cou  "<<endl;
    cout<<"  0. pop  "<<endl;
}//尝试的目录

void push(Slink* phead, int n) {
    Slink* n_ew;
    Slink* cur;
    cur=phead;
    n_ew=(Slink*)malloc(sizeof(Slink));
    
    if (phead->top==NULL) {
        /* code */
        phead->date=n;
        phead->top=n_ew;
        n_ew->top=NULL;
    }
    else {
        while(cur->top !=NULL) {
            cur=cur->top;
        }
        cur->date=n;
        cur->top=n_ew;
        n_ew->top=NULL;
    }
}//压栈

void cou(Slink* phead) {
    Slink* cur=phead;
    while (cur->top!=NULL){
        /* code */
        cout<<cur->date<<endl;
        cur=cur->top;
    }
}//显示栈元素

void pop(Slink* phead){
    Slink* cur=phead;
    Slink* before=phead;
        while(cur->top !=NULL) {
            before=cur;
            cur=cur->top;
        }
    free(cur);
    before->top=NULL;
}//出栈

int main() {
    Slink* pheadlist;//创建头部指针
    pheadlist=(Slink*)malloc(sizeof(Slink));//为指针开辟一块空间
    int n;
    init(pheadlist);
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