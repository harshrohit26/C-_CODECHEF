#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,i;
	     cin>>n;
	    int count=n;
	    int arr[n];
	    for( i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        
	    if(arr[i]==arr[i+1])
	    count--;
	    }
	    
	    cout<<count<<endl;
       }
	    
	return 0;
	}

