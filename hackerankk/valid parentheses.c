/*Problem Statement Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.

Input Format

Take string as a input i.e s
Constraints

1 <= s.length <= 10,000
s consists of parentheses only '()[]{}'.
Output Format

Print True if a given string expression is correctly parenthesized otherwise print False*/

#include<stdio.h>
#include<string.h>
int checkBalanced(char*str){
     int len=strlen(str);
     char stack[len];
     int top=-1;
     for(int i=0;i<len;i++){
        char ch=str[i];
         if(ch=='('||ch=='{'||ch=='[')
         stack[++top]=ch;
         else if(ch==')'||ch=='}'||ch==']')
         {
         if(top==-1)
         return 0;
         else if(ch==')'&& stack[top]!='(')
         return 0;
         else if(ch=='}'&& stack[top]!='{')
         return 0;
         else if(ch==']'&& stack[top]!='[')
         return 0;
         else
         top--;
     }
    }
    if(top==-1)
    return 1;
    else 
    return 0;
}
int main(){
    char str[100];
    
    fgets(str,100,stdin);
    int result=checkBalanced(str);
    if(result==1)
    printf("True\n");
    else
    printf("False\n");
    return 0;
}