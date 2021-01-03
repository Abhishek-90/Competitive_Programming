#include <iostream>
using namespace std;

int possible(int a[],int b[],int n,int m,int ta,int tb){
    for(int i=0;i<n-1;++i){
        for(int j=0;j<n-1;++j){
            if(a[j]>a[j+1]){
                int t=a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }

    for(int i=0;i<m-1;++i){
        for(int j=0;j<m-1;++j){
            if(b[j]<b[j+1]){
                int t=b[j];
                b[j] = b[j+1];
                b[j+1] = t;
            }
        }
    }
    
    int i=0,j=0,count=0;
    
    while(i<n && j<m){
        if(a[i]>b[j])
            break;
        
        ta = ta - a[i] + b[j];
        tb = tb - b[j] + a[i];
        
        ++count;
        ++i;
        ++j;
        
        if(ta>tb)
            return count;
    }
    
    return -1;
}

int main() {
	// your code goes here
	int t,n,m;
	cin>>t;
	
	while(t--){
	    cin>>n>>m;
	    int a[n],b[m],ta=0,tb=0;
	    
	    for(int i=0;i<n;++i){
	        cin>>a[i];
	        ta = ta + a[i];
	    }

	    for(int i=0;i<m;++i){
	        cin>>b[i];
	        tb = tb + b[i];
	    }
	    
	    if(ta>tb)
	        cout<<0<<endl;
	    else
	        cout<<possible(a,b,n,m,ta,tb)<<endl;
	}
	
	return 0;
}
