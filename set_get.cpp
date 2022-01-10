#include <iostream>
using namespace std;
class _employee{
    private:
    string Name;
    string Company;
    int Age;
    public:
    void setname_(string name){
        Name=name;
    }
    string getname_(){
        return Name;
    }

    void setcompany_(string company){
        Company=company;
    }
    string getcompany_(){
        return Company;
    }
    void setage_(int age){
        Age=age;
    }

    int getage_(){
        return Age;
    }
    
    _employee(string name,string company,int age){
        Name=name;
        Company=company;
        Age=age;
        }
    void print_(){
        cout<<"Name: "<<Name<<"\nCompany: "<<Company<<"\nAge: "<<Age<<endl;

    }
};
int main(){
    _employee employee1("Ricky","Ndambuki Consolidate",24);
    employee1.print_();

    employee1.setname_("Sensei");
    employee1.setage_(22);
    cout<<"\nNew Name: "<<employee1.getname_()<<"\nCompany: "<<employee1.getcompany_()<<"\nAge: "<<employee1.getage_()<<endl;

    return 0;

}
