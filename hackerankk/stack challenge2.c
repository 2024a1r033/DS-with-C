/*Create a stack using array and store N elements in and perform the follwing operation on it.

Pop 2 element from the stack
Push 4 element in the stack
pop 1 element from the stack
push 2 element in stack
pop 3 element from stack
After performming given operation display the stack elements in single line with space seperated.*/

#include <stdio.h>
#include<stdlib.h>
#define MAX 100
int stack[MAX], top = -1;
void push(int value){
    if(top==MAX-1){
       return ;
    }
        else{
                
    stack[++top]=value;}
    
    }
void pop()
{
    if(top== -1)
        return ;
    else
    {
        top--;
    }
}
void show(){
    if(top == -1)
        return ;
    
    else{
    int i;
    for (i=top;i>=0;i--)
    printf("%d ",stack[i]);}
}
int main(){
    int n;
    scanf("%d",&n);
        
    for (int i = 0; i < n; i++)// for pushing n values
    {
            int value;
       scanf("%d",&value);
            push(value);
    }
        
    pop();pop();        // for poping 2 values
        
        for (int i = 0; i < 4; i++)// for pushing 4 values
    {
            int value;
       scanf("%d",&value);
            push(value);
    }
        pop();
        for (int i = 0; i < 2; i++)// for pushing 2 values
    {
            int value;
       scanf("%d",&value);
            push(value);
    }
        for (int i = 0; i < 3; i++)// for poping 3 values
    {
            
            pop();
    }
        show();
                
        
    return 0;
}