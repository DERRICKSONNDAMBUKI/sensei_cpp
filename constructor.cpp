#include <iostream>
using namespace std;
class _book{
    public:
    string name="no name";
    string course="no course";
    int regno=0;

    _book(string cname,string ccourse,int cregno){//constructor
        name=cname;
        course=ccourse;
        regno=cregno;
    }
};

int main(){
    _book book("Ricky","Comp science",60);
    // _book book1("Senseh","Comp engineering",40);
   
    cout<<"\nName: "<<book.name<<endl;
    cout<<"Course: "<<book.course<<endl;
    cout<<"Reg No.: "<<book.regno<<endl;

    // cout<<book1.name<<endl;
    // cout<<book1.course<<endl;
    // cout<<book1.regno<<endl;
    // return 0;
}