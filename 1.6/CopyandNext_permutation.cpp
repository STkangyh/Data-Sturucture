#include<algorithm>
void Permutations(char *a, const int m){
    //a[0:m]의 모든 순열 생성
    //모든 순열을 하나씩 출력
    do{
        copy(a, a+m+1, ostream_iterator<char>(cout,""));
        cout<<endl;
    } while (next_permutation(a,a+m+1));
}

//copy와 next_permutation은 algorithm 헤더파일