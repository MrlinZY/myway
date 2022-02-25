#include <iostream>
using namespace std;
#define Maxsize 5 //只能在栈顶插入，栈的特点

typedef struct Stack {
    int date[Maxsize];
    int top;
}

; //栈一般由一个数组加上顶部来组成

void init(Stack* ptrs) {
    ptrs->top=-1;
}

//初始化栈----栈顶赋值为-1，因为第一个栈的位置是0

void Push (Stack *Ptrs, int item) {
    if(Ptrs->top==Maxsize-1) {
        cout<<"can`t push"<<endl;
        return;
    }

    //判断栈是否已满，已满直接退回
    else {
        Ptrs->top=Ptrs->top+1;
        Ptrs->date[Ptrs->top]=item;
        return;
    }

    //压栈，栈未满的情况下，栈顶向上移1，赋值给当前位置
}

void Pop(Stack* Ptrs) {
    cout<<Ptrs->date[Ptrs->top]<<"\n"<<endl;
    Ptrs->top=Ptrs->top-1;
}

//出栈，顺便验证是否压栈成功

//主程序
int main() {
    int n=0;
    Stack stack;
    //创建一个栈和储存对象
    init(&stack);

    for (int i=0; i < 5; i++) {
        /* code */
        cin>>n;
        Push(&stack, n);
    }

    for (int i=0; i < 5; i++) {
        /* code */
        Pop(&stack);
    }

    while(1);
    return 0;
}