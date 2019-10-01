//programme to merge two sorted arrays!!!
#include<iostream>

using namespace std;

int main()
{
	int n,m,i,j,k,d;
	int arr[60];
	int Arr[60];
	int ord[60];

	cout<<"Enter The Size Of Array 1 : ";
	cin>>n;
	if(n<=0)
		cout<<"invalid input";
	cout<<"\nEnter The Size Of Array 2 : ";
	cin>>m;
	if(m<=0)
		cout<<"invalid input";
	cout<<"\nEnter The Numbers In Array 1 : ";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];

	}
	cout<<"\nEnter The Numbers In Array 2 : ";
	for(j=0;j<m;j++)
	{
		cin>>Arr[j];

	}
		d=d-(m+n);

	for(i=0,j=0,k=0;i<n,j<m,k<d;k++)
	{
		if(arr[i]>Arr[j])
		{
			ord[k]=Arr[j];
			j++;
		}
		else
		{
			ord[k]=arr[i];
			i++;
		}
	}
	cout<<"\nArray 1 So Entered Is : ";
	for(i=0;i<n;i++)
		cout<<arr[i]<<" , ";
	cout<<"\nArray 2 So Entered Is : ";
	for(j=0;j<m;j++)
		cout<<Arr[j]<<" , ";
	cout<<"\nThe New Array So Formed Is : ";
	for(k=0;k<d;k++)
		cout<<ord[k]<<" , ";

	return 0;
}
