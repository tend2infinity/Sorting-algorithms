#include<iostream>
using namespace std;
int* shellsort(int A[] , int n)
{
	int temp;
	for(int gap=n/2 ; gap>=1 ; gap=gap/2)
	{
		for(int j=gap ; j<n ; j++)
		{
			for(int i=j-gap ; i>=0 ; i=i-gap)
			{
				if(A[i+gap]>A[i])
				break;
				else
				{
					temp=A[i];
					A[i]=A[i+gap];
					A[i+gap]=temp;	
				}
			}
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
    arr=shellsort(A,n);
    for(i=0;i<n;i++)
    {
    	cout<< arr[i]<<" ";
	}
}
