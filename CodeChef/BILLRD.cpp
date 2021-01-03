#include <iostream>
#define ll long long

using namespace std;

int main() {
	// your code goes here
	int t;
	ll n,k,x2,y2,m;
	string str;
	cin>>t;
	
	while(t--){
	    cin>>n>>k>>x2>>y2;

	    if(x2==y2)
	    	cout<<n<<" "<<n<<endl;
	    else{
	    	int x[5], y[5];
	    	x[0] = 0;
	    	y[0] = 0;  

	    	m = min(n-x2,n-y2);
	    	x[1]=x2+m;
	    	y[1]=y2+m;

	    	y[2]=x2+m;
	    	x[2]=y2+m;

	    	m = min(x2,y2);
	    	x2 = x2-m;
	    	y2 = y2-m;

	    	x[4]=x2;
	    	y[4]=y2;

	    	y[3]=x2;
	    	x[3]=y2;


		    if(k%4==0)
		    	cout<<x[4]<<" "<<y[4]<<endl;
		   	else
		   		cout<<x[k%4]<<" "<<y[k%4]<<endl;
		}
	}
	
	return 0;
}
