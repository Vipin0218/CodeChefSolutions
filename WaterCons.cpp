#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	for(int j=0;j<n;j++){
	    int x;
	    cin>>x;
	    if(x>=2000){
	        cout <<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
