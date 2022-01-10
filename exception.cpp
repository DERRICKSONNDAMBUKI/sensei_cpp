#include <iostream>
using namespace std;
double division(double a,double b){
    if(b==0){
        throw "Division by zero condition";
    }
    return (a/b);
}

int main(){
    double r=0.0;
    try{
        r=division(45,0);
        cout<<"Division is: "<<r<<endl;
    }catch(const char* msg){
        cerr<<msg<<endl;
    }
    return 0;

}