//  Number hashing using arrays
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = { 2,3,4,5,16};
    int hash[17]={0};
    for(int i =0; i<sizeof(arr)/sizeof(arr[0]); i++){
        hash[arr[i]]++;
    }
    int q;
    cin >> q;
    while(q--){
        int num;
        cin >> num;
        cout << hash[num] << endl;
    }
    return 0;
}


//  Number hashing using map/unordered map
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    unordered_map<int,int> mpp;
    for(int i =0; i<n; i++){
        mpp[arr[i]]++;
    }
    int q;
    cin >> q;
    while(q--){
        int num;
        cin >> num;
        cout << mpp[num] << endl;
    }
    return 0;
}