#include<iostream>
using namespace std;
int* selection_sort(int n , int A[])
{
	int i,j,min,temp;
	for(i=0;i<n-1;i++)
	{
		int min=i;
		for(j=i+1;j<n;j++)
		{
			if(A[j]<A[min])
			min=j;
		}
		if(min!=i)
		{
			temp=A[i];
			A[i]=A[min];
			A[min]=temp;
		}
	}
	return A;
}
int main()
{
    int n,i,k;
    int A[1000],*arr;
    cout<<"enter no of array elements";
    cin>>n;
    cout<<"enter the array elements";
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<"sorted array is "<<endl; 
    arr=selection_sort(n,A);
    for(i=0;i<n;i++)
    {
    	cout<< arr[i]<<" ";
	}   
    
}

