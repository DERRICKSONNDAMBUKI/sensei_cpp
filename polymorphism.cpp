#include <iostream>
using namespace std;
class _shape{
    protected:
    int height;
    int width;
    public:
    _shape(int w=0,int h=0){
        width=w;
        height=h;
    }
    virtual int area(){
        cout<<"Parrent class area: "<<endl;
        return 0*0;
    }
};
class _rectangle:public _shape{
    public:
    _rectangle(int w=0,int h=0){
        _shape(w,h);
    }
    int area(){
        cout<<"Rectangle class area: "<<endl;
        return height*width;
    }
};

class _triangle:public _shape{
    public:
    _triangle(int w,int h){
        _shape(w,h);
    }
    int area(){
        cout<<"Triangle class area: "<<endl;
        return (width*height/2);
    }
};

int main(){
    _shape *shape;
    _rectangle rec(4,6);
    _triangle tri(4,6);
    shape=&rec;
    shape->area();
    shape=&tri;
    shape->area();
}
//ricky has not understood output here