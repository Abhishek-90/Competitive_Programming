#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,k,d,D,temp;
	cin>>t;
	
	while(t--){
	    int tp=0;
	    cin>>n>>k>>d;
	    
	    for(int i=0;i<n;++i){
	        cin>>temp;
	        tp += temp;
	    }
	    
	    if(tp<k)
	        cout<<0<<endl;
	    else{
	        D = tp/k;
	        if(D<d)
	            cout<<D<<endl;
	        else
	            cout<<d<<endl;
	    }
	}
	
	return 0;
}
