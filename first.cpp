#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    // int n;
    // cin>>n;
    vector<int> v  = {23,45,67,4,-90,34,9,-4,90};
    cout<<"Array:\n";
    for (int it : v){
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<"Ascending Order\n";
    sort(v.begin(),v.end());
    for (int it : v){
        cout<<it<<" ";
    }
    cout<<endl;
    return 0;

}