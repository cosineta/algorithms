#include<stdio.h>
#include<string.h>
int main()
{
	char a[10],s[10];
	int i,len,mid,next,top;

	scanf("%s",&a);
	len=strlen(a);
	mid=len/2-1;
	//printf("%d和%d",len,mid);

	top=0;//栈的初始化
	for(i=0;i<=mid;i++)
		s[++top]=a[i];
//把中点之前的（所有需要的）都填进去了，此时top=mid

	if(len%2==0)
		next=mid+1;
	else 
		next=mid=2;
//a从next往后数，s从top向回倒
	
	for(i=next;i<len;i++)//注意，这里的i是给a用的
	{
		if(a[i]!=s[top])
			break;
		//如果不匹配，直接弹出
		//其实用函数写，然后设置不同的return值更容易耶
		top--;
	}
	
	if(top==0)//此时栈被倒空，即所有都被匹配了也没出错（没跳出过
		printf("YEAHHHHHH\n");
	else
		printf("sorry\n");


	return 0;
}
