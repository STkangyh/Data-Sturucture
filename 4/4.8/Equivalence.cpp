void Equivalence(){
    read n;
    first[0:n-1]를 0, out[0,n-1]를 false로 초기화;
    while more pairs{
        (i,j) 판독
        first[i]=j
        first[j]=i;
    }
    for (i=0; i<n; i++){
        if (!out[i])
        {
            out[i]=true;
            객체 i를 포함하고 있는 동치 부류 출력;
        }
        
    }
}