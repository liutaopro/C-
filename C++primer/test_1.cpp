#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[]={2,10,5,6,7,8};
	int *p=a;
	int *p1=&a;
	printf("%d\n",sizeof(a));
	printf("%x\n",sizeof(p));
	printf("*p=:%d\n",*p);
	printf("p=%d\n",p);
	printf("p1=%d\n",p1);
	printf("p+1=%d\n",p+1);
	printf("p1+1=%d\n",p1+1); 
	printf("*(p+1)=%d\n",*(p+1)) ;//p代表的地址值没有变化 
	printf("*(p+1)后的p=%d\n",p);
	printf("*(++p)=%d\n",*(++p));//p代表的地址值加上一个int单位 
	printf("p=%d\n",p);
	printf("++*p=:%d\n",++*p);//++p和p++是有区别的,前者先加后递归结果,后者先递归结果后加. 
	printf("*p=%d\n",*p);
	printf("*p+1=:%d\n",*p+1);//注意++和+1的区别,++具有递归效果,+1则没有,
	//++相当于*p=*p+1,p有传递;而p+1就是p+1,加1就是加1,p还是原来的值,不具有递归效果.  
	printf("++*p=%d\n",++*p);
	printf("*p=%d\n",*p);
	return 0;
	//++*p,*p++,*p+1都是p所指向的值加1; *(p+1),*(p++),*(++p)都是指向下一个值. 
}