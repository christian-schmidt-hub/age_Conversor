#include <iostream>
using namespace std;

int get_age(){
    int age;
    cout<<"Enter your age\n";
    cin>>age;
    return age;
}
void calc_age(int age){
    int months,weeks;
    float hours, days;
    
    months = age * 12;
    days = age * 365.25;
    weeks = days / 7;
    hours = days * 24;
    
    cout<<"You have: \n" << "Months: "<< months <<"\nWeeks: "<<weeks<< "\nDays: "<<days<<"\nHours: "<<hours;
}
int main(){
    int age = get_age();
    calc_age(age);
    return 0;
}