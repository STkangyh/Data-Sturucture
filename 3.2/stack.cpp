template<class T>
class Stack
{
private:
    T *stack;
    int pop;
    int capacity;
public:
    stack(int stackCapacity=10);
    bool IsEmpty() const;
    T& Top() const;
    void Push(const T& item);
    void Pop();
};

template<class T>
Stack<T>::Stack(int stackCapacity):capacity(stackCapacity){
    if(capacity<1)
        throw "Stack capacity must be > 0";
    stack = new T[capacity];
    top = -1;
}

template<class T>
inline bool Stack<T>::IsEmpty() const {return top==-1;}

template<class T>
inline T& Stack<T>::Top() const {
    if(IsEmpty()) throw "Stack is empty";
    return stack[top];
}

template<class T>
void Stack<T>::Push(const T &x) {
    //Add x to the stack
    if(top==capacity-1){
        ChangSizeID(stack, capacity, 2*capacity);
        capacity*=2;
    }
    stack[++top]=x;
}

template<class T>
void Stack<T>::Pop() {
    //Delete top element from the stack
    if(IsEmpty()) throw "Stack is empty. Cannot delete";
    stack[top--].~T();
}