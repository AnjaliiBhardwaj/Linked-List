#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n:";
    cin>>n;
    int i=1;
    
    int val=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<val;
            j++;
            val++;
        }
        cout<<endl;
        i++;

    }

}