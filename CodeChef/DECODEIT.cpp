#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
	// your code goes here
	
	map<string,char> stoc = {{"0000",'a'},{"0001",'b'},{"0010",'c'},{"0011",'d'},
	    {"0100",'e'},{"0101",'f'},{"0110",'g'},{"0111",'h'},
	    {"1000",'i'},{"1001",'j'},{"1010",'k'},{"1011",'l'},
	    {"1100",'m'},{"1101",'n'},{"1110",'o'},{"1111",'p'}};
	
	int t,n;
	string s,temp="";
	cin>>t;
	
	while(t--){
	    string final="";
	    cin>>n;
	    cin>>s;
	    
	    for(int i=0;i<n;i=i+4){
	        temp = "";
            for(int j=0;j<=3;++j)
                temp = temp + s[i+j];
            final = final + stoc[temp];
	    }
	    
	    cout<<final<<endl;
	}
	
	return 0;
}
