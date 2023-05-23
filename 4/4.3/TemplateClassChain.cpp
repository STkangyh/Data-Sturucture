template <class T> class Chain;

template<class T>
class ChainNode{
friend class Chain<T>
private:
    T data;
    ChainNode<T> *link;
};

template<class T>
class Chain{
public:
    Chain(){
        first=0;
    }
    // chain control functions

private:
    ChainNode<T>* first;
}