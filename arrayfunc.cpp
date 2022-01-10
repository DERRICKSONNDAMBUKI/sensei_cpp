#include <iostream>
using namespace std;

void getArr(int s[],int size);
void printArr(int s[],int size);

int main(){
    int arr[5];
    getArr(arr,5);
    printArr(arr,5);

}
void getArr(int s[],int size){
    int r;
    for(r=1;r<=5;r++){
        cout<<"Enter score for "<<r<<" :"<<endl;
        cin>>s[r];        
    }
    cout<<"\n";
}
void printArr(int s[],int size){
    int y;
    for(y=1;y<=5;y++){
        cout<<"The score for "<<y<<" is: "<<s[y]<<endl;

    }
}