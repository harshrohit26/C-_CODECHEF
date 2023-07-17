#include <iostream>
using namespace std;

int findsum(int dice1,int dice2,int dice3){
int score=dice1+dice2+dice3;
int minscore=min(min(dice1,dice2),dice3);
score=score-minscore;
return score;
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int a1,a2,a3;
        int b1,b2,b3;
        cin>>a1>>a2>>a3;
        cin>>b1>>b2>>b3;
        int alice=findsum(a1,a2,a3);
        int bob=findsum(b1,b2,b3);
        
        if(alice>bob)
        {
            cout<<"Alice"<<endl;
        }
        else if(bob>alice)
        {
            cout<<"Bob"<<endl;
            
        }
        else
        cout<<"Tie"<<endl;
    }
	// your code goes here
	return 0;
	
}
