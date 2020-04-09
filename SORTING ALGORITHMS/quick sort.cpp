#include<iostream>
using namespace std;
int partition(int A[],int lb,int ub);
int* quicksort(int A[] , int lb , int ub)
{
	int loc,i;
	if(lb<ub)
	{
		loc=partition(A,lb,ub);
		quicksort(A,lb,loc-1);
		quicksort(A,loc+1,ub);
	}
	return A;

}
int partition(int A[],int lb,int ub)
{
	int temp;
	int pivot=A[lb];
	int start=lb;
	int end=ub;
	while(start<end)
	{
		while(A[start]<=pivot)
		start++;
		while(A[end]>pivot)
		end--;
		if(start<end)
		{
			temp=A[start];
			A[start]=A[end];
			A[end]=temp;	
		}
	}
	temp=A[lb];
	A[lb]=A[end];
	A[end]=temp;
	return end;	
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
    arr=quicksort(A,lb,ub);
    cout<<"sorted array is"<<endl;
    for(i=0;i<n;i++)
    {
    	cout<<arr[i]<<" ";
	}   
}
