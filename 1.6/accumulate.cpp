#include<algorithm>
#include<iostream>
#include<numeric> //accmulate는 numeric 헤더파일에 존재
int Product(int *a, int n){//a[0:n-1]의 수의 곱셈을 반환
    
    int initVal=1;
    return accumulate(a, a+n, initVal, multiplies<int>()); 
}

//accumulate(start, end, initialValue, operator)
