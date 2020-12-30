#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"请输入两个整数"<<endl;
	cin>>a>>b;
	if(a<b)//这里没有循环的意思，仅是比较两个值的大小 
	{
		while(a<=b)//这里要有等于号，循环到最后一位 
		{
			cout<<a<<" ";
			a++;//a++就是先访问a，再加一，++a是先加一，再访问a
		/*i++是先进行一次循环，在进行累加；++i是i先进行一次累加，再循环。
两个对于循环的次数都是没影响zhuan的，都shu是5次，都是当 i 小于5 不成立的时候跳出循环，但后面的 i 还是会递增1的。
两者不同的地方在于++i 占用的空间比 i++ 要小，i++是多定义一个变量的。看看运算符重载可以知道是怎么回事。
在for循环中，如for(i=0;i<5;i++)与for(i=0;i<5;++i)在for循环的次数上没有区别，都是五次，因为i++和++i都是在for循环内的语句执行后才执行！*/


/*for(int i=0;i<10;i++)
for(int i=0;i<10;++i)
这样没有区别。
int i=1;
int a = i++;
int a = ++i;
这时才有区别
第一个a是1
第二个a是2*/ 
		}
	} 
	else
	{
		while(a>=b)
		{
			cout<<a<<endl;
			a--;
		}
	}
	cout<<endl;
	return 0;
} 
