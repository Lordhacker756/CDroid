#import<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter Three Numbers\n";
	cin>>a;
	cin>>b;
	cin>>c;
	if( a>b && a>c )
	{
		cout<<"The Greatest Among Them Is "<<a;
	}
	else if(b>a && b> c)
	{
		cout<<"The Greatest Among Them Is "<<b;
	}
	else
	{
		cout<<"The Greatest Among Them Is "<<c;
	}
}