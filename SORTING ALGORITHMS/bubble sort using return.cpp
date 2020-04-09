#include<iostream>
using namespace std;
int* bubble_sort(int n , int A[])
{
  int i,j,temp,flag,k;
  for(i=0;i<n-1;i++)
  {
      flag=1;
      for(j=0;j<n-1-i;j++)
      {
          if(A[j]>A[j+1])
          {
              temp=A[j];
              A[j]=A[j+1];
              A[j+1]=temp;
              flag=0;
          }
      }
      if(flag==1)
      {
          break;
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
    arr=bubble_sort(n,A);
    for(i=0;i<n;i++)
    {
    	cout<< arr[i]<<" ";
	}
	
    
    
}
