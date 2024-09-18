#include<iostream>
 #include<cstring>
using namespace std;
#define MAX 100
struct Stack{
    int top;
    int arr[MAX];
};
Stack* createStack(Stack* s){
    s -> top = -1;
    return s;
}
bool isFull(Stack* s){
    if(s -> top == MAX -1){
        return true;
    }else{
        return false;
    }
}
bool isEmpty(Stack* s){
    if(s -> top == -1){
        return true;
    }else{
        return false;
    }
}
int top(Stack* s){
    return s -> arr[s -> top];
}

void push(Stack* s, int val){
    if(isFull(s)){
        return;
    }else{
        s -> arr[++(s -> top) ] = val; 
    }
}

void pop(Stack* s){
    if(isEmpty(s)){
        return;
    }else{
        s -> top--;
    }
}


int evaluate(char* arr){
    Stack* s = new Stack();
    createStack(s);
     int lenghtOfarray = strlen(arr);
//    int lenghtOfarray = sizeof(arr)/sizeof(arr[0]);
    cout<<lenghtOfarray <<endl;
    for(int i =0; i<lenghtOfarray; i++){
        if(isdigit(arr[i])){
            push(s,(arr[i]-'0'));
        }else{
            int val1 = top(s);
            pop(s);
            int val2 = top(s);
            pop(s);
            switch(arr[i]){
                case '+':
                push(s,(val2 + val1));
                break;
                case '-':
                push(s,(val2 - val1));
                break;
                case '/':
                push(s,(val2 / val1));
                break;
                case '*':
                push(s,(val2 * val1));
                break;
            }
        }
    }
    // pop(s);
    // pop(s);
    int topValue = top(s);
    return topValue;
}
int main(){
    char arr[] ={'1','3','*','5','+'};
    int result = evaluate(arr);
    cout<<result<<endl;
}

// #include<iostream>
// #include<cstring>  // For strlen
// using namespace std;

// #define MAX 100

// struct Stack {
//     int top;
//     int arr[MAX];
// };

// Stack* createStack() {
//     Stack* s = new Stack();
//     s->top = -1;
//     return s;
// }

// bool isFull(Stack* s) {
//     return (s->top == MAX - 1);
// }

// bool isEmpty(Stack* s) {
//     return (s->top == -1);
// }

// int top(Stack* s) {
//     return s->arr[s->top];
// }

// void push(Stack* s, int val) {
//     if (isFull(s)) {
//         cout << "Stack overflow!" << endl;
//         return;
//     }
//     s->arr[++(s->top)] = val;
// }

// void pop(Stack* s) {
//     if (isEmpty(s)) {
//         cout << "Stack underflow!" << endl;
//         return;
//     }
//     s->top--;
// }

// int evaluate(char* arr) {
//     Stack* s = createStack();
//     int lengthOfArray = strlen(arr);  // Correct way to get length

//     for (int i = 0; i < lengthOfArray; i++) {
//         if (isdigit(arr[i])) {
//             push(s, (arr[i] - '0'));  // Push the integer value of the character
//         } else {
//             int val1 = top(s);
//             pop(s);
//             int val2 = top(s);
//             pop(s);
//             switch (arr[i]) {
//                 case '+':
//                     push(s, (val2 + val1));  // Correct operand order
//                     break;
//                 case '-':
//                     push(s, (val2 - val1));  // Correct operand order
//                     break;
//                 case '/':
//                     push(s, (val2 / val1));  // Correct operand order
//                     break;
//                 case '*':
//                     push(s, (val2 * val1));
//                     break;
//                 // default:
//                 //     cout << "Invalid operator encountered!" << endl;
//                 //     return -1;
//             }
//         }
//     }

//     int topValue = top(s);
//     return topValue;
// }

// int main() {
//     char arr[] = {'1', '3', '*', '5', '+'};  // Example of postfix expression
//     int result = evaluate(arr);
//     cout << "Result: " << result << endl;

//     return 0;
// }
