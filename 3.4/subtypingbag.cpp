class Bag{
public:
    Bag(int bagCapacity=10);
    virtual ~Bag();

    virtual int Size() const;
    virtual bool IsEmpty() const;
    virtual int Element() const;

    virtual void Push(const int);
    virtual void Pop();
protected:
    int *array;
    int capacity;
    int top;
};

class Stack:public Bag{
public:
    Stack(int stackCapacity=10);
    ~Stack();
    int Top() const;
    void Pop();
};

Stack::Stack(int stackCapacity) : Bag(stackCapacity){
    //Constructor for Stack calls constructor for Bag
}

Stack::~Stack(){
    //Destructor for Bag is automatically called when Stack
    //is destroyed. This ensures that array is deleted
}

int Stack::Top() const {
    if(IsEmpty()) throw "Stack is empty";
    return array[top];
}

void Stack::Pop() {
    if(IsEmpty()) throw "Stack is empty. Cannot delete";
    top--;
}

int main(){
    Bag b(3);
    Stack s(3);

    b.Push(1);b.Push(2);b.Push(3);
    s.Push(1);s.Push(2);s.Push(3);
    //Stack::Push not defined, so use Bag::Push

    b.Pop(); //uses Bag::Pop, which calls Bag::IsEmpty
    s.Pop();
    //uses Stack::Pop, which calls Bag::IsEmpty becauses not redefined in Stack
    s.Size(); //uses Bag::Size
    s.Element(); //uses Bag::Element
}