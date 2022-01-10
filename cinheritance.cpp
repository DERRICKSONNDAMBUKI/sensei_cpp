#include <iostream>
using namespace std;

class _shape{
    public:
    void setheight(int h){
        height=h;
    }
    void setwidth(int w){
        width=w;
    }
    protected:
    int height;
    int width;
};
class _rectangle:public _shape{
    public:
    int getArea(){
        return (width *height);
    }
};
int main(){
    _rectangle rect;
    rect.setwidth(4);
    rect.setheight(5);
    cout<<"The area is: "<<rect.getArea()<<endl;
    return 0;
}