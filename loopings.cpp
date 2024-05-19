#include<iostream>
using namespace std;
int main()
{

 //using while loop
    int n,r,i=0;
     char reverse[10]; 
    cout<<"enter n";
    cin>>n;
   while(n>0) 
 { 
 r=n % 10;
 reverse[i]=r+'0';  // ‘0’ is added to make a digit as character.
 n =n/ 10;
 ++i;
 } 
reverse[i]='\0'; 
cout<<"\nreverse="<<reverse;


// using for loop
int size,sum=0;
cout<<"\n enter the size of the array";
cin>>size;
int array[size];
cout<<"\nRead array elements";
for(int i=0;i<size;++i){
    cin>>array[i];
    sum+=array[i];
}
cout<<"\nsum of the array elements is :"<<sum<<endl;

//using do-while loop
   int a=0;
   do{
    cout<<"\na= "<<a;
    a++;
   }while(a<10);


    return 0;
}