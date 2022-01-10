#include <iostream>
using namespace std;

class _account{//performance on account
    protected:
    float deposit=0;
    float withdrawal=0;
    float balance=0;

    public:      
    void deposit_(){        
        cout<<"Enter the amount you want to deposit: ";
        cin>>deposit; 
        balance+= deposit;
        cout<<"\nYou have deposited ksh. "<<deposit<<" into your account."<<endl;
        checkbalance_();
    }
    void withdraw_(){        
        cout<<"Enter the amount you want to withdraw: ";
        cin>>withdrawal;
        if(withdrawal>=balance){
            cout<<"\nUnable to withdraw due to insufficient balance in your account."<<endl;
        }else{
            balance-= withdrawal;
            cout<<"\nYou have withdrawn ksh. "<<withdrawal<<" from your account."<<endl;
        }
         
        checkbalance_();
    }
    void checkbalance_(){
        cout<<"\nYou have balance of ksh. "<<balance<<" remaining in your account."<<endl;
    }
    void perform_(){
        int perform;
        cout<<"What do you want to perform on your acount?\n1. Deposit\n2. Withdraw\n3. Check balance\nReply with 1,2 or 3: ";
        cin>>perform;
        switch(perform){
            case 1:
            deposit_();
            break;
            case 2:
            withdraw_();
            break;
            case 3:
            checkbalance_();
            break;
            default:
            cout<<"Invalid choice";

        };
    }   
   
};
class _student{//student details
    private:
    string f_name;
    string l_name;
    string faculty;
    string course;
    int year_of_study;
    string university;
    int telephone;
    string email;

    public:
    void submit_(){
        cout<<"\tSUBMIT YOUR DETAILS\n"<<endl;
        cout<<"Submit your first name: ";
        cin>>f_name;
        cout<<"Submit your last name: ";
        cin>>l_name;
        cout<<"Submit your faculty: ";
        cin>>faculty;
        cout<<"Submit your course: ";
        cin>>course;
        cout<<"Submit your year of study: ";
        cin>>year_of_study;
        cout<<"Submit your university: ";
        cin>>university;
        cout<<"Submit your telephone contact: ";
        cin>>telephone;
        cout<<"Submit your email address: ";
        cin>>email;
        cout<<"\n"<<f_name<<" "<<l_name<<" you have successfully submitted your details!"<<endl;
    }    
};
class _savings_acc: public _account,_student{//savings account
    public:
    void savings_acc_(){
        string physical_address;
        cout<<"Submit your physical_address: ";
        cin>>physical_address;
        submit_();
        cout<<"||ABOUT ACOUNT||\n"<<endl;
        perform_();    
    }    
};
class _current_acc: public _account,_student{//current account
   public:
    void current_acc_(){
        string birth_date;
        cout<<"Submit your date of birth: ";
        cin>>birth_date;
        submit_();
        cout<<"||ABOUT ACOUNT||\n"<<endl;
        perform_();

        cout<<"\nYou have been issued with a checkbook!"<<endl;//checkbook
        int checkbook;
        int check;

        cout<<"Do you want to use your checkbook to withdraw money from your account?\n1. Yes\n2. No\nReply with 1 or 2: ";
        cin>>checkbook;
        if(checkbook==1){
           withdraw_();
        }else if(checkbook==2){
            cout<<"\nThank you for using our services!"<<endl;
        }
    }
};
int main(){//flow of account
    _savings_acc savings_acc;
    _current_acc current_acc;
    cout<<"\n\nOPEN AN ACOUNT\n"<<endl;
    int acount;
    cout<<"Which kind of account do you want to open?\n1. Savings acount\n2. Current account\nReply with 1 or 2: ";
    cin>>acount;
    switch(acount){
        case 1:
        savings_acc.savings_acc_();
        break;
        case 2:
        current_acc.current_acc_();
        break;
        default:
        cout<<"Invalid choice"<<endl;
    };
}