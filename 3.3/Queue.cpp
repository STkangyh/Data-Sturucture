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
    T* newQueue = new T[2*capacity];
}

template<class T>
Queue<T>::Queue(int queueCapacity): capacity(queueCapacity){
    if(capacity<1) throw "Queue capacity must be > 0";
    queue = new T[capacity];
    front = rear = 0;
}

template<class T>
inline bool Queue<T>::isEmpty(){
    return front == rear;
}

template<class T>
inline T& Queue<T>::Front(){
    if (isEmpty())
        throw "Queue is empty. No front element";
    return queue[(front+1)%capacity];
}

template<class T>
inline T& Queue<T>::Rear(){
    if(isEmpty())
        throw "Queue is empty. No rear element";
    return queue[rear];
}

template<class T>
void Queue<T>::Push(const T &x) {
    if((rear+1)%capacity==front){
        //queue full, double capacity
        //code to double queue capacity comes here
    }
    rear=(rear+1)%capacity;
    queue[rear]=x;
}
template<class T>
void Queue<T>::Push(const T &x) {
    int start = (front+1)%capacity;
    if(start<2)
        copy(queue+start, queue+start+capacity-1, newQueue);
    else{
        copy(queue+start, queue+capacity, newQueue);
        copy(queue, queue+rear+1, newQueue+capacity-start);
    }
    front=2*capacity-1;
    rear=capacity-2;
    capacity*=2;
    delete []queue;
    queue=newQueue;
}

template<class T>
void Queue<T>::Pop(){
    if(isEmpty())
        throw "Queue is empty. Cannot delete.";
    front = (front+1)%capacity;
    queue[front].~T(); //T를 위한 파괴자
}