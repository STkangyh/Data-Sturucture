template<class T>
void SelectionSort(T*a, const int n){
    //Sort a[0] to a[n-1] into nondecreasing order
    for(int i=0;i<n;i++){
        int j=i;
        //find smallest integer in a[i] to a[n-1]
        for(int k=i+1;k<n;k++){
            if(a[k]<a[j])
                j=k;
        }
        swap(a[i],a[j]);
    }
}