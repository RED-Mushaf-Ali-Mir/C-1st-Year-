#include<iostream>
#include <string>
using namespace std;

int main (){

    // string name;
    // char a[11],b[4];
    // int t=0;
    // cin>>t;
    // for(int i=0; i<t; i++){
    //     for(int j=0;j<3;j++){
    //         cin>>name;
    //         b[j]=name[0];
    //     }
    //     b[3]='\0';
    //     cout<<b<<endl;
    // }

    int t=0,n,m,l,r,ll,rr;

    cin>>t;

    for(int i=0; i<t; i++){

        cin>>n>>m>>l>>r;
        rr = (m-r)+n;
        ll= (m -rr)*-1;
        cout<<rr <<ll<<endl;

    }

    return 0;
}