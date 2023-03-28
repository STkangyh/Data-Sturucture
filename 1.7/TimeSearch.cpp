#include<iostream>

void main(){
    int a[1001], n[20];
    for(int j=1; j<=1000; j++){
        a[j]=j;
    }
    for(j=0;j<10;j++){
        n[j]=10*j;
        n[j+10]=100*(j+1);
    }
    std::cout<<" n time"<<std::endl;
    for(j=0;j<20;j++){
        long start, stop;
        time(start);
        int k = SequentialSearch(a,n[j],0);
        time(stop);
        long runTime = stop-start;
        std::cout<<" "<<n[j]<<" "<<runTime<<std::endl;
    }
    std::cout<<"Time are in hundredths of a second"<<std::endl;
}