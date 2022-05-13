#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t ;
	while(t>0){
	    int x,y;
	    cin>>x>>y;
	    if(x==0 || y==0 || (y!=x)){
	        cout << "NO" << endl;
	    }else{
	        cout << "YES" << endl;
	    }
	    t--;
	}
	return 0;
}
