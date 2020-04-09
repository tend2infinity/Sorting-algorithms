#include<iostream>
using namespace std;
int merge(int A[] , int lb ,int mid , int ub);
int* mergesort(int A[] , int lb , int ub)
{
	int mid;
	if(lb<ub)
	{
		mid=(lb+ub)/2;
		mergesort(A,lb,mid);
		mergesort(A,mid+1,ub);
		merge(A,lb,mid,ub);
	}
	return A;
}
merge(int A[] , int lb , int mid , int ub)
{
	int i=lb;
	int j=mid+1;
	int k=lb;
	int B[1000];
	while(i<=mid&&j<=ub)
	{
		if(A[i]<=A[j])
		{
			B[k]=A[i];
			i++;
		}
		else
		{
			B[k]=A[j];
			j++;
		}
		k++;
	}
	if(i>mid)
	{
		while(j<=ub)
		{
			B[k]=A[j];
			j++;
			k++;
		}
	}
	else
	{
		while(i<=mid)
		{
			B[k]=A[i];
			i++;
			k++;
		}
	}
	for(k=lb;k<=ub;k++)
	{
		A[k]=B[k];
	}
}
int main()
{
	int n,i,k;
    int A[1000],lb=0,*arr;
    cout<<"enter no of array elements";
    cin>>n;
    int ub=n-1;
    cout<<"enter the array elements";
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
    arr=mergesort(A,lb,ub);
    cout<<"sorted array is"<<endl;
    for(i=0;i<n;i++)
    {
    	cout<<arr[i]<<" ";
	}   
}
