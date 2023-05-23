template<class T> class Tree;

template<class T>
class TreeNode{
friend class Tree<T>;
private:
    T data;
    TreeNode<T> *leftChild;
    TreeNode<T> *rightChild;
};

template<class T>
class Tree{
public:
    // Tree control operator
private:
    TreeNode<T> *root;
};