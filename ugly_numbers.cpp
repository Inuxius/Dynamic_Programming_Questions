#include <iostream>
using namespace std;

bool ugly(int a,bool arr[])
{
if(arr[a-1])
return arr[a-1];
else if(a%2==0)
{arr[a-1]=ugly(a/2,arr);
return arr[a-1];
}
else  if(a%3==0)
{arr[a-1]=ugly(a/3,arr);
return arr[a-1];
}
else if(a%5==0)
{arr[a-1]=ugly(a/5,arr);
return arr[a-1];
}if(a==1)
return true;
else
return false;
}



int main()
{int a;
cout<<"enter number"<<endl;
cin>>a;
bool arr[a]={0};
arr[0]=1;
for(int i=1;i<=a;i++)
ugly(i,arr);
for(int i=0;i<a;i++)
arr[i]==1?i:;

}
