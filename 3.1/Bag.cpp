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
    T& Element() const;

    void Push(const T&);
    void Pop();
}