#include <iostream>
#include <fstream>
using namespace std;

int main(){

    char data[100];
    ofstream outfile;//writing into the file...(new file)
    
    outfile.open("afile.txt");
    cout<<"Writing to the file"<<endl;
    cout<<"Enter your first name: "<<endl;
    cin.getline(data,100);
    outfile<<data<<endl;

    cout<<"Enter your age: ";
    cin.getline(data,100);
    // cin.ignore();//ricky has bugs
    outfile<<data<<endl;

    outfile.close();
    
    ifstream infile;//reading from the file
    infile.open("afile.txt");

    cout<<"\nReading from the file"<<endl;
    infile>>data;
    cout<<data<<endl;
    
    infile>>data;
    cout<<data<<endl;
    
    infile.close();
    return 0;
}