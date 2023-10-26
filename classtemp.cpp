#include <iostream>
using namespace std;

/* syntax
template <class T1, class T2
class Name_Of_Class{
    //body
};
*/

template <class T1, class T2>
class MyClass{
    public:
        T1 data1;
        T2 data2;

    void display(T1 m, T2 n){
        data1=m;
        data2=n;
        cout<<data1<<"\n"<<data2<<endl;

    }
};

int main(){
    int a;
    char b;
    MyClass<int, char> obj;
    cout<<"Enter Data 1 and Data 2"<<endl;
    cin>>a>>b;
    obj.display(a, b);
    return 0;
}