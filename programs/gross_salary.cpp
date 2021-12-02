#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    float basic, gross, da, hra;
    cout<<"Enter the basic salary: ";
    cin>>basic;
    if (basic<25000){
        da = basic*80/100;
        hra = basic*20/100; }
        else if (basic >=25000&&basic<40000) {
            da=basic*90/100; hra=basic*25/100; }
            else if (basic>=40000){
                da=basic*95/100; hra=basic*30/100; }
    
    //Calculations
    gross = basic+da+hra;
    cout<<setw(25)<<"Basic Pay: "<<setw(10)<<basic<<endl;
    cout<<setw(25)<<"Dearness allowance: "<<setw(10)<<da<<endl;
    cout<<setw(25)<<"House Rent allowance: "<<setw(10)<<hra<<endl;
    cout<<setw(25)<<"-----------------------------------"<<endl;
    cout<<setw(25)<<"Gross Salary: "<<setw(10)<<gross<<endl;
    cout<<setw(25)<<"-----------------------------------"<<endl;
    return 0;
}