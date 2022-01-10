#include <iostream>
using namespace std;
class box{
    public:
        double width;
        double height;
        double breadth;
};
int main(){
    box box1;
    box box2;
    double volume=0.0;

    box1.height=30.0;
    box1.width=40.0;
    box1.breadth=50.0;

    box2.height=3.0;
    box2.width=4.0;
    box2.breadth=5.0;

    volume=box1.height*box1.breadth*box1.width;
    cout<<"volume of box1 = "<<volume<<endl;

    volume=box2.height*box2.breadth*box2.width;
    cout<<"volume of box2 = "<<volume<<endl;

}