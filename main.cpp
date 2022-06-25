#include "Declarations.h"

int main() {
    Stack<string> stack;
    string data[5] = {"Hello,","my","name","is","Gleb",};
    cout<<endl;
    for (int i = 0; i <CAPACITY ;++i){
        stack.push(data[i]);
    }
    cout<<endl;
    for (int i = 0; i < CAPACITY-2 ; ++i){
        stack.pop();
    }

    return 0;
}
