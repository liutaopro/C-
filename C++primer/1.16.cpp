#include<iostream>
using namespace std;
int main()
{
	int sum=0,value=0;
	cout<<"������һ�����ݣ���CTRL+Z��ʾ��������"<<endl;
	while(cin>>value)
	{
		sum+=value;
	}
	cout<<"��Щ���ĺ���"<<sum;
	cout<<endl;
	return 0; 
}
