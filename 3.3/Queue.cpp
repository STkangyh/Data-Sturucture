template<class T>
class Queue{
public:
    Queue(int queueCapacity=10);
    bool isEmpty() const;
    T& Front() const;
    T& Rear() const;
    void Push(const T& item);
    void Pop();
private:
    T* queue;
    int front, rear, capacity;
}
Queue<T>::Queue(int queueCapacity): capacity(queueCapacity){
    if(capacity<1) throw "Queue capaicity must be > 0";
    queue = new T[capacity];
    front = rear = 0;
}
inline bool Queue<T>::isEmpty(){
    return front == rear;
}
inline T& Queue<T>::Front(){
    if (isEmpty())
        throw "Queue is empty. No front element";
    return queue[(front+1)%capacity];
}
inline T& Queue<T>::Rear(){
    if(isEmpty())
        throw "Queue is empty. No rear element";
    return queue[rear];
}
void Queue<T>::Pop(){
    if(isEmpty())
        throw "Queue is empty. Cannot delete.";
    front = (front+1)%capacity;
    queue[front].~T(); //T를 위한 파괴자
}