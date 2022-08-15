#include <iostream>
using namespace std;

int main()
{
    int t, x, y,p;
    cin >> t;
    while (t--){
        cin>>x;
        cin>>y;
        p = x/y;
        if(p>=2){
            cout<<p/2<<endl;
        }
        else{
            cout<<0<<endl;
        }

        }
        
    
    return 0;

}
