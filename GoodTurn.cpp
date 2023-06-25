#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	for(int i=0; i<n; i++) {
	    int x,y;
	    cin>>x>>y;
	    if(x+y>6) {
	    cout<<"YES"<<endl;
	   } else{
	    cout<<"NO"<<endl;
	}
	    
	}
	return 0;
}
