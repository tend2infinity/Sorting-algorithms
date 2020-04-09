#include<iostream>
using namespace std;
int* insertion_sort(int n , int A[])
{
	int i,temp,j;
	for(i=1;i<n;i++)
	{
		temp=A[i];
		j=i-1;
		while(j>=0&&A[j]>temp)
		{
			A[j+1]=A[j];
			j--;
		}
		A[j+1]=temp;
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
    arr=insertion_sort(n,A);
    for(i=0;i<n;i++)
    {
    	cout<< arr[i]<<" ";
	}
	
    
    
}



























