#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main()
{
int x,n,sum;
string str;
float a,b,c,disc,r1,r2,realp,imgp,radius,area;

//Reading a integer number
cout<<"entr the num";
cin>>x;

//clearing the input buffer to read a string after reading a number
cin.ignore();
cout<<"entr name";

//to read a string with space..it reads the entire line until we hit enter key.
getline(cin,str);//Jyothishree Huller.
cout<<"\nWelcome"<<str;

//code for sum of n natural numbers
cout<<"\nEnter the number of natural nors";
cin>>n;
sum=n*(n+1)/2;
cout<<"sum is"<<sum;

//code for finding the roots of quadratic equation
cout<<"\nread a b c to find roots of the QE";
cin>>a>>b>>c;
disc=pow(b,2)-4*a*c;
if(disc>0){
    r1=(-b+sqrt(disc))/2*a;
    r2=(-b-sqrt(disc))/2*a;
    cout<<"\nroots are real and distinct\n"<<"r1="<< r1<<"\nr2="<< r2;
}

else if(disc==0){
r1=-b/2*a;
r2=-b/2*a;
cout<<"Roots are equal\n"<<r1<<"\n"<<r2;
}

else
{
 realp=-b/2*a;
 imgp=sqrt(disc)/2*a;
cout<<"roots are imaginary\n r1="<<realp<<"+i"<<imgp<<endl;
cout<<"r2="<<realp<<"-i"<<imgp;
}

cout<<"\nenter the radius of Circle";
cin>>radius;
area=3.1425*pow(radius,2);
cout<<"\n area="<<area;

return 0;

}
