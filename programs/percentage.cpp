/* Percentage */
#include<iostream>
using namespace std;
int main(){
    float percent; int x;
    cout<<"Enter your percentage: ";
    cin>>percent;
    cout<<"You scored "<<percent<<"%"<<endl;
    x = percent/10;
    switch (x){
        case 10:
        case 9:
        case 8:
        cout<<"You have passed with distinction! "; break;
        case 7:
        case 6:
        cout<<"You have passed in first class"; break;
        case 5:
        cout<<"You have passed in second class"; break;
        case 4:
        cout<<"You have passed in third class"; break;
        default: cout<<"Sorry: You've failed"<<endl;
    }
}