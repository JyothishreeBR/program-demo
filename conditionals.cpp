#include<iostream>
using namespace std;
int main(){

   //using if-else conditions
    int n,sum;
    cout<<"Enter the number of natural nors";
    cin>>n;
    if(n>=1){
        sum=n*(n+1)/2;
        cout<<"sum is: "<<sum;
    }
    else{
        cout<<"sum cannot be calculated";
    }

    //using nested-if statement
    int a,b,c;
    cout<<"\nenter a b and c ";
    cin>>a>>b>>c;
    if(a>b&&a>c)
    cout<<"maximum among 3 nors is :"<<a;
    else{
        if(b>c)
        cout<<"maximum among 3 nors is :"<<b;
        else
        cout<<"maximum among 3 nors is :"<<c;
    }

    //using else-if ladder
    int day;
    cout<<"\nEnter the day number";
    cin>>day;
    if(day==1)
    cout<<"Monday";
    else if(day==2)
    cout<<"Tuesday";
    else if(day==3)
    cout<<"Wednesday";
    else if(day==4)
    cout<<"Thursday";
    else if(day==5)
    cout<<"Friday";
    else if(day==6)
    cout<<"Saturday";
    else if(day==7)
    cout<<"Sunday";
    else
    cout<<"Invalid day number";

    //using switch case
    int monthNo;
    cout<<"\nEnter the month number";
    cin>>monthNo;
    switch(monthNo){
     case 1:cout<<"January";
     break;
     case 2:cout<<"February";
     break;
     case 3:cout<<"March";
     break;
     case 4:cout<<"April";
     break;
     case 5:cout<<"May";
     break;
     case 6:cout<<"June";
     break;
     case 7:cout<<"July";
     break;
     case 8:cout<<"August";
     break;
     case 9:cout<<"Semtember";
     break;
     case 10:cout<<"October";
     break;
     case 11:cout<<"November";
     break;
     case 12:cout<<"December";
     break;
     default:
     cout<<"Invalid month number";

    }

    return 0;
}