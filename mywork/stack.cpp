#include <iostream>
using namespace std;
#define Maxsize 5
//只能在栈顶插入，栈的特点
typedef struct Stack{
    int date[Maxsize];
    int top;
} ;
void init(Stack* ptrs){
    ptrs->top=-1;
}
void Push (Stack *Ptrs,int item){
    if(Ptrs->top==Maxsize-1){
        cout<<"can`t push"<<endl;
        return;
    }
    else{
        Ptrs->top=Ptrs->top+1;
        Ptrs->date[Ptrs->top]=item;
        return;
    }
}
void Pop(Stack* Ptrs){
    cout<<Ptrs->date[Ptrs->top]<<"\n"<<endl;
    Ptrs->top=Ptrs->top-1;
}
int main(){
    int n=0;
    Stack stack;
    init(&stack);
    for (int i = 0; i < 5; i++)
    {
        /* code */
    cin>>n;
    Push(&stack,n);
    }
    for (int i = 0; i < 5; i++)
    {
        /* code */
        Pop(&stack);
    }    
    while(1);
    return 0;
}