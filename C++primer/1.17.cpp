#include<iostream>
using namespace std;
int main()
{
	int currval=0,val=0;
	if(cin>>currval){//cin>>currval就是for和循环遍历差不多 
		int cnt=1;
		while(cin>>val){
			if(val==currval)
				++cnt;
			else{
				cout<<currval<<"occurs"
				<<cnt<<"times"<<endl;
				currval=val;
				cnt=1;
			}
		}
	cout<<currval<<"occurs"<<cnt<<"times"<<endl;
	//因为最后一种数字，没有后继元素来判断是否相等，所以就直接输出。 
	//cnt是定义在if内的，所以对于此语句依然可用= 
	}
	return 0;
}
