#include <iostream>
using namespace std;

int tile(int n)
{if(n==1)
return 1;
if(n==2)
return 2;
return tile(n-1)+tile(n-2);
}

int main()
{
int a;
cout<<"Type some input"<<endl;
cin>>a;
cout<<tile(a)<<endl;
return 0;

}
