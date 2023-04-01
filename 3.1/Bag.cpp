template<class T>
class Bag{
private:
    T *array;
    int capacity;
    int top;
public:
    Bag(int bagCapacity=10);
    ~Bag();

    int Size() const;
    bool IsEmpty() const;
    T& Element() const; // Searching element

    void Push(const T&);
    void Pop();
}

template<class T>
Bag<T>::Bag(int bagCapacity): capacity(bagCapacity){
    if(capacity<1)
        throw "Capacity must be > 0";
    array=new T[capacity];
    top=-1;
}

template<class T>
Bag<T>::~Bag(){
    delete []array;
}

template<class T>
inline int Bag<T>::Size() const {return top+1;}

template<class T>
inline bool Bag<T>::IsEmpty() const {return size == 0;}

template<class T>
inline T& Bag<T>::Element() const {
    if(IsEmpty())
        throw "Bag is empty";
    return array[0];
}

template<class T>
void Bag<T>::Push(const T& x){
    if(capacity==top+1){
        ChangSizeID(array,capacity,2*capacity);
        capacity*=2;
    }
    array[++top]=x;
}

template<class T>
void Bag<T>::Pop(){
    if(IsEmpty())
        throw "Bag is empty, cannot delete";
    int deletePos=top/2;
    copy(array+deletePos+1, array+top+1, array+deletePos);
    array[top--].~T();
}
