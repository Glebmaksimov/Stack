

template<typename T>
bool Stack<T>::empty() {
    if(top == 0)return true;
    return false;
}

template<typename T>
bool Stack<T>::full() {
    if(top == CAPACITY)return true;
    return false;
}

template<typename T>
void Stack<T>::push(T x) {
    if(!full()){
        array[top] = x;
        ++top;
        cout<<x<<" was pushed"<<endl;
        return;
    }
    cout<<"Stack_Overflow"<<endl;
}

template<typename T>
T Stack<T>::pop() {
    if(!empty()){
        --top;
        cout<<array[top]<<" was popped"<<endl;
        return array[top];
    }
    cout<<"Stack_Underflow"<<endl;
    return "-999";
}