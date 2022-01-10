#include <iostream>
using namespace std;
class DayOfYear{
    public:
    void output();
    int month;
    int day;
};
int main(){
    DayOfYear today,birthday;
    cout<< "Enter todays date\n";
    cout<< "Enter a month as a number\n";
    cin>> today.month;
    cout<<"Enter the day of the month:\n";
    cin>>today.day;
    cout<<"Enter your birthday\n";
    cout<<"Enter month as a number\n";
    cin>>birthday.month;
    cout<<"Enter the day of the month:\n";
    cin>>birthday.day;

    cout<<"Today's date is:\n";
    today.output();
    cout<<endl;
    cout<<"Your birthday is:\n";
    birthday.output();
    cout<<endl;
    if(today.month == birthday.month&&today.day == birthday.day)
    cout<<"@@@@@Happy birthday!@@@@@";
    else{
        cout<<"Sorry,it is not your birthday."<<endl;
    }
    
    
}
void DayOfYear::output(){
    switch (month){
        case 1:
        cout<<"January ";break;
        case 2:
        cout<<"February ";break;
        case 3:
        cout<<"March ";break;
        case 4:
        cout<<"April ";break;
        case 5:
        cout<<"May ";break;
        case 6:
        cout<<"June ";break;
        case 7:
        cout<<"July ";break;
        case 8:
        cout<<"August ";break;
        case 9:
        cout<<"September ";break;
        case 10:
        cout<<"October ";break;
        case 11:
        cout<<"November ";break;
        case 12:
        cout<<"December ";break;
        default:
        cout<<"Error in DayOfYear::output.contact software vender,";
                
    }
    cout<<day;

}