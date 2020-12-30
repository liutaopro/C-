#include<iostream>
using namespace std;
int main()
{
	int sum=0;
	int a=50;
	while(a<=100)
	{
		sum+=a;
		a++;
	}
	cout<<"50到100的整数相加为"<<sum<<endl;
	return 0;
}
