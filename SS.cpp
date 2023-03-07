void Selection_Sorting(int *a, const int n){
    //n개의 정수 a[0]부터 a[n-1]까지 비감소 순으로 정렬한다.
    for(int i=0;i<n;i++){
        int j=i;
        for(int k=i+1;k<n;k++){ //a[i]와 a[n-1] 사이에 가장 작은 정수를 찾는다.
            if(a[k]<a[j])
                j=k;
        }
        swap(a[i],a[j]);
    }
}

for(int i=0;i<n;i++){
    //a[i]부터 a[n-1]까지의 정수 값을 검사한 결과 a[j]가 가장 작은 값이라고 하자
    //a[i]와 a[j]를 서로 교환
}
엥