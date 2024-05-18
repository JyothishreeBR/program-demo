#include<iostream>
using namespace std;
enum day{mon=1,tue,wed,thu,fri,sat,sun};
typedef int marks;
int main()
{
    int a[2][2]={{1,2},{3,4}};
    int b[2][2]={{5,6},{7,8}};
    int c[2][2];
    
    //this is for enumerated datatype
    cout<<mon<<endl;
    cout<<tue<<endl;
    cout<<wed<<endl;
    cout<<thu<<endl;
    cout<<fri<<endl;
    cout<<sat<<endl;
    cout<<sun<<endl;

 // demonstration of using typedef
  marks m1,m2,m3;
  cout<<"enter the marks of student in 3 subjects"<<endl;
  cin>>m1>>m2>>m3;
  cout<<"\nmarks 1=="<<m1<<"\n marks 2=="<<m2<<"\nmarks 3=="<<m3<<endl;

  //Matrix multiplication
  for(int i=0;i<2;i++)
  {
    for(int j=0;j<2;j++)
    {
        int sum=0;//c[i][j]=0;
      for(int k=0;k<2;k++)
      {
       sum+=a[i][k]*b[k][j];
       c[i][j]=sum;
       // c[i][j]+=a[i][k]*b[k][j];
      }
    }
 }
//resultant matrix c
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        cout<<c[i][j]<<endl;
    }
}

    return 0;
}
