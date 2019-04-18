#include <iostream>
using namespace std;

int catalan(int a)
{

if(a==0||a==1)
return 1;
int sum=0;
for(int i=1;i<a;i++)
sum+=catalan(i)*catalan(a-i);

return sum;
}


int nthcatalan(int a,int arr[])
{
if(a==0||a==1)
return 1;
if(arr[a]!=0)
return arr[a];
int sum=0,q,w;
for(int i=1;i<a;i++)
{

q=catalan(i);
arr[i]=q;
w=catalan(a-i);
arr[a-i]=w;
sum+=q*w;

}
return sum;
}

int main()
{int a,arr[100]={0};
cout<<"Type your input"<<endl;
cin>>a;
cout<<"nth catalan number is "<<catalan(a)<<endl;
return 0;




}
