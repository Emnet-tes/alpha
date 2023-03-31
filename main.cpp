#include <iostream>

using namespace std;

int main()
{
int n;
cout<<"\t\t__________PRINT NUMBER IN PATTERN__________\t\t\n";
cout<<"enter number of rows: ";
cin>>n;
cout<<endl;
if(n>0)
{
 for(int i=n;i>=1;i--)
 {
  for(int j=n-i;j>0;j--)
  cout<<"  ";
  for(int k=0;k<=i;k++)
  cout<<k<<" ";
  for(int m=i-1;m>=0;m--)
    {
      cout<<m<<" ";
    }
  cout<<endl;
 }

 for(int i=0;i<=n;i++)
 {
    for(int x=n-i;x>0;x--)
    cout<<"  ";
    for(int y=0;y<=i;y++)
    cout<<y<<" ";
    for(int z=i-1;z>=0;z--)
    {
        cout<<z<<" ";
    }
    cout<<endl;
 }
}else
 { 
   cout<<"\t\t\t\tinvalid input"; 
 }

    return 0;
}
