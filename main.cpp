#include <iostream>
using namespace std;
void solve();

int main() {
	
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
	
	return 0;
}

void solve(){
    int n;
    cin>>n;
    
    int array[n];
    int count = 0;
    for(int i=1;i<=n;i++){
        cin>>array[i];
        if(array[i]>=1000){
            count++;
        }
    }
    cout<< count << endl;
}
