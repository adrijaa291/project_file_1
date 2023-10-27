#include <iostream>
using namespace std;

template <class A, class B>
float Avg(A a, B b){
    float avg= (a+b)/2.0;
    return avg;
}
int main(){
    
    int num_1, num_2;
    cout<<"Enter number 1"<<"\t";
    cin>>num_1;
    cout<<"Enter number 2"<<"\t";
    cin>>num_2;
    float res;
    res=Avg(num_1, num_2);
    cout<<"Their average is "<<res<<endl;
    return 0;
}
