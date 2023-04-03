class GeneralArray {
//A set of pairs <index,value> where for each value of index in IndexSet
//there is a value of type float. IndexSet is a finite ordered set of one or more
//dimensions, for example, [0,...,n-1] for one dimension, [(0,0),
//(0.1),(0,2),(1,0),(1,1),(1,2),(2,0),(2,1),(2,2)] for two dimensions.
public:
    GeneralArray(int j, RangeList list, float initValue=defaultValue);
    //Create a j dimensional array of floats
    //range of the kth dimension is given by the kth element of list.
    //For each index i in the index set, insert<i,initValue> into the array
    float Retreieve(index i);
    //If i is in the index set of the array, return the float associated with i in the array
    //otherwise throw an exception
    void Store(index i, float x);
    //If i is in the index set of the array, replace the old value associated with i by x;
    //otherwise throw an exception
};



