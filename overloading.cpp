#include<iostream>
using namespace std;

class _printData{
    public:
    void print(int i){
        cout<<"The integer is: "<<i<<endl;
    }
    void print(double d){
        cout<<"The double is: "<<d<<endl;
    }
    void print(string c){
        cout<<"The string: "<<c<<endl;
    }
};
int main(){
    _printData pd;
    
    pd.print(43.232334);
    pd.print(4);
    pd.print("Hello Ricky");

    return 0;

}