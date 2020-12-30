#include <iostream>
#include <set>

using namespace std;

int main() {
    int t,n;
    cin>>t;

    while(t--){
        cin>>n;
        int arr[n],count=0;
        set<int> present;

        for(int i=0;i<n;++i)
            cin>>arr[i];
        
        for(int i=0;i<n;++i){
            for(int j=i;j<n;++j){
                if(present.find(abs(arr[i]-arr[j])) == present.end() && abs(arr[i]-arr[j]) !=0){
                    ++count;
                    present.insert(abs(arr[i]-arr[j]));
                }
            }
        }

        cout<<count<<endl;
    }

    return 0;
}