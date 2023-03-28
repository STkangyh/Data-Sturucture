template<class T>
class stack
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
stack<T>::stack(int stackCapacity):capacity(stackCapacity){
    if(capacity<1)
        throw "Stack capacity must be > 0";
    stack = new T[capacity];
    top = -1;
}
