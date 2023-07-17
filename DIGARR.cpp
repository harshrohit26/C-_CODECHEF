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
	    string str;
	    cin>>str;
	    int count=0;
	    for(int i=0;i<n;i++)
	    {
	        if(str[i]=='0' || str[i]=='5')
	        count++;
	    }
	    if(count>0)
	    {
	        cout<<"YES"<<endl;;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
