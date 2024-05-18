// basic cpp pgm to calculte net salary
#include<iostream>
using namespace std;

int main()
{
    float basic_salary;
    float allowance;
    float deduction;
    float netsalary;

    cout<<"Enter the basic salary";
    cin>>basic_salary;
    cout<<"\nEnter the percentage of allowance";
    cin>>allowance;
    cout<<"\nEnter the percentage of deduction";
    cin>>deduction;

  netsalary=basic_salary+basic_salary*allowance/100-basic_salary*deduction/100;
  cout<<"Jeevan's net salary is :"<<netsalary;
  return 0;
}