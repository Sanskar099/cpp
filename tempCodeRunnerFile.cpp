#include <iostream>
using namespace std;

int main() {
	int t, x, y, i; // x is the number and y is the number of moves available
	cin>>t;
	while(t--){
	    cin>>x>>y;
            if(x%2 == 0 && y%2 == 0){
                cout<<"Janmansh"<<endl;

            }
            else if(x%2 == 0 && y%2 != 0){
                cout<<"Jay"<<endl;
            }
            else if(x%2 != 0 && y == 0){
                cout<<"Janmansh"<<endl;
            }
             else if(x%2 != 0 && y != 0){
                cout<<"Jay"<<endl;
            }
	 
	}
	return 0;
}
