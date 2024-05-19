#include<iostream>
using namespace std;
int main()
{
   //checking whether the number is Perfect number or not
    int num,sum=0;
    cout<<"\nenter the number to check whether it is a Perfect number or not";
    cin>>num;
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        sum+=i;
    }

    cout<<"\nsum of factors of  "<<num<<"= "<<sum;
  //perfect number means (sum of factors = 2*num)
    if(2*num==sum){
    cout<<"\n"<<num<<" is a Perfect Number"<<endl;
    cout<<"as "<<sum<<" = "<<"2*"<<num;
    }
    else{
    cout<<"\n"<<num<<" is not a Perfect Number";
    cout<<"\nas "<<sum<<" != "<<"2*"<<num;
    } 

    //to display the prime numbers between the given range 1-n
    int n;
    cout<<"\n enter the range";
    cin>>n;
    for(int j=1;j<=n;j++)
 {  
    int count=0;
      for(int k=2;k<=j/2;k++)//k<=5(n/2)
   {
       if(j % k==0)
     {
        count++;break;
     }
   }
   if(count==0 && j!=1)
   cout<<"\n\t"<<j;

 }

 
    return 0;
}