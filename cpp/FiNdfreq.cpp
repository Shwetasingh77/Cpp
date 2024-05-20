// #include<iostream>
// #include<vector>
// #include<map>
// using namespace std;

// int main() {
//     int num;
//     cout<<" enter n"<<endl;
//     cin>>num;
//     vector<int>v;
//     cout<<" enter elements"<<endl;
// for(int i=0;i<num;i++){
// cin>>v[i];
// }
// map<int,int>mp;
// map<int,int> :: iterator it;
// for(int i=0;i<num;i++){
//     mp[v[i]]++;
// }
// cout<<" Frequency of  n elements are : "<<endl;
// for(it=mp.begin();it!=mp.end();it++){
//     cout<<it->first<<" "<<it->second;
// }
//     return 0;
// }
#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    int num;
    cout << "Enter n: " << endl;
    cin >> num;
    
    vector<int> v;
    cout << "Enter elements: " << endl;
    
    for (int i = 0; i < num; i++) {
        int element;
        cin >> element;
        v.push_back(element);
    }

    map<int, int> mp;
    map<int, int>::iterator it;

    for (int i = 0; i < num; i++) {
        mp[v[i]]++;
    }

    cout << "Frequency of n elements are: " << endl;

    for (it = mp.begin(); it != mp.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}
