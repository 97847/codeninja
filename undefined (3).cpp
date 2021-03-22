#include <iostream>
using namespace std;

void solve(){
    
       string mystr="";
       
        cin>>mystr;
        int n=mystr.length();
        int i=0;
        while (i<=n){
            
            if (mystr.substr(i,5)=="party")
            {
                mystr.replace(i,5,"pawri");
           }i++;
        }
        cout<<mystr<<endl;
        
    }


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}