//주어진 집합의 모든 가능한 순열을 출력하는 순열 생성기
#include<iostream>
#include<algorithm>
void Permutations(char *a, const int k, const int m){
    //a[k]~a[m]에 대한 모든 순열 생성
    if(k==m){
        for(int i=0; i<=m; i++)
            std::cout<<a[i]<<" ";
        std::cout<<std::endl;    
    }
    else{ //a[k:m]에는 하나 이상의 순열이 있다. 이 순열을 순환적으로 생성
        for(int i=k; i<=m; i++){
            swap(a[k],a[i]);
            Permutations(a,k+1,m);
            swap(a[k],a[i]);
        }
    }
}