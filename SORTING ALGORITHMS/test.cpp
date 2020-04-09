#include <iostream> 
using namespace std;
  
// Note that arr[] for fun is just a pointer even if square 
// brackets are used 
void fun(int *arr)  // SAME AS void fun(int *arr) 
{ 
  cout<<*(arr+9);
} 
  
// Driver program 
int main() 
{ 
   int arr[] = {1, 2, 3, 4, 5, 6, 7, 8}; 
   unsigned int n = sizeof(arr)/sizeof(arr[0]); 
   cout<<"array size is"<<n<<endl;
   fun(arr); 
   return 0; 
} 

