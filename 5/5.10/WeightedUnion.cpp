void sets::WeightedUnion(int i, int j){
    // 가중 규칙을 이용하여 루트가 i와 j인 집합의 합을 구한다.
    // parent[i] = -count[i]이며 parent[j] = -count[j]
    int temp = parent[i]+parent[j];

    if(parent[i]>parent[j]){ // i의 노드 수(count)가 적으면
        parent[i]=j; // j를 새 루트로 만든다
        parent[j]=temp;
    }
    else{ // j의 노드 수(count)가 적으면
        parent[j]=i; // i를 새 루트로 만든다
        parent[i]=temp;
    }
}

int Sets::CollapsingFind(int i){
    // 원소 i를 포함하는 루트를 찾아서 붕괴 규칙을 이용해 i에서 루트로 가는 모든 노드를 붕괴
    for(int r=i; parent[r]>=0; r=parent[r]){ // 루트를 찾기 위함
        while(i!=r){ // 붕괴
            int s = parent[i];
            parent[i] = r;
            i = s;
        }
    }
    return r; // 루프가 끝나면 노드 i는 루트 노드에 연결되어 있을 것이다
}