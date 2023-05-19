/* searchspace에 따라 탐색 방법이 달라진다. lineal search보다 binary search가 빠른 경우가 발생할 수 있다.
하지만 정렬을 먼저 하여 시간 복잡도가 O(n^2)로 증가하기 때문에 무엇이 빠를지는 search space에 따라 달라질 수 있다.
예를 들어 lineal search는 자료에 변수가 계속 추가될 때 정렬을 할 필요가 없기 때문에 binary search보다 유리할 수 있다.*/
int Binary_Search(int *a, const int x, const int left, const int right){
    //정렬된 배열 a[left]~a[right]에서 x 탐색
    if(left<=right){
        int middle=(left+right)/2;
        if(x<a[middle]) return Binary_Search(a,x,left,middle-1);
        else if(x>a[middle]) return Binary_Search(a,x,middle+1,right);
        else return middle;
    }
    return -1;
}
//순환이원탐색