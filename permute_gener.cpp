#include<iostream>
#include<string.h>
using namespace std;
void perm(char arr[],int first,int last)
{
	if (first==last)
	{
		cout<<" "<<arr<<endl;
	}
	else
	{
		for(int i=first;i<=last;i++)
	     {
	     	swap(arr[first],arr[i]);
 	     	perm(arr,first+1,last);
	     	swap(arr[first],arr[i]);
    	}
	}
}
int main()
{
	int num;
	cout<<"\n ENTER NO. OF CHARACTERS:";
	cin>>num;
	if(num>0)
	{
		char str[num+1];
		for(int i=0,k=97;i<num;i++,k++)
		{
			str[i]=k;
		}
	//	cout<<"\n"<<"NUM OF CHARACTERS:"<<num<<endl;
		cout<<"\n CHARACTERS ACCORDING TO ENTERED VALUE NUMBER OF CHARACTERS:";
		for(int i=0;i<num;i++)
		{
			cout<<" "<<str[i];
		}
		str[num]='\0';
	//	cout<<"\n"<<num<<endl;
		cout<<"\n GENERATED PERMUTATIONS:"<<endl;
		perm(str,0,num-1);
		
	}
	else
	{
		cout<<"\n invalid input!";
	}
	
}
