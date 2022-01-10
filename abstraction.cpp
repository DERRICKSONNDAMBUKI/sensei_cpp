#include <iostream>
using namespace std;
class abstractpromotion{
    virtual void promotion_()=0;
};
class _employee:public abstractpromotion{
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
    void promotion_(){
        if(Age>=30){
            cout<<"Congratulations "<<Name<<", you got promoted!"<<endl;
        }else{
            cout<<"Sorry "<<Name<<", you do not qualify for promotion"<<endl;
        }
    }
};
int main(){
    _employee employee1("Ricky","Ndambuki Consolidate",24);
    employee1.print_();
    employee1.promotion_();
    cout<<"\n";
    _employee employee2("Sensei","Ndambuki Consolidate",34);
    employee2.print_();    
    employee2.promotion_();

    // employee1.setname_("Sensei");
    // employee1.setage_(22);
    // cout<<"\nNew Name: "<<employee1.getname_()<<"\nCompany: "<<employee1.getcompany_()<<"\nAge: "<<employee1.getage_()<<endl;

    return 0;
}
