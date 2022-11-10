#include <iostream>
#include<bits/stdc++.h>

#define ll long long
#define fastIO  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
//const ll N = 1e5 + 7;
//
//
//const long double PI = 3.141592653589793238462643383279502884197;
//
//
//bool isPrime(ll n) {
//
//    if (n <= 1)
//        return false;
//
//
//    for (int i = 2; i < n; i++)
//        if (n % i == 0)
//            return false;
//
//    return true;
//}
//
//void SwapValue(int &a, int &b) {
//    int t = a;
//    a = b;
//    b = t;
//}
//
//bool isPrimeNumber(int n) {
//    if (n <= 1) return false;
//    if (n <= 3) return true;
//    if (n % 2 == 0 || n % 3 == 0) return false;
//    for (int i = 5; i * i <= n; i = i + 6)
//        if (n % i == 0 || n % (i + 2) == 0)
//            return false;
//    return true;
//}
//
//void PrimeSetBits(ll l, ll r) {
//    int primeOnes, count = 0;
//    for (ll i = l; i <= r; i++) {
//        primeOnes = __builtin_popcount(i);
//        if (isPrimeNumber(primeOnes))
//            count++;
//    }
//    cout << count << endl;
//}
//
//long long mini(long long x, long long y) {
//    if (x < y)
//        return x;
//    return y;
//}
//
//int convert_B_D(long long n) {
//    int dec = 0, i = 0, rem;
//
//    while (n != 0) {
//        rem = n % 10;
//        n /= 10;
//        dec += rem * pow(2, i);
//        ++i;
//    }
//    return dec;
//}
//
//long long convert_D_B(int n) {
//    long long bin = 0;
//    int rem, i = 1;
//
//    while (n != 0) {
//        rem = n % 2;
//        n /= 2;
//        bin += rem * i;
//        i *= 10;
//    }
//
//    return bin;
//}
//
//bool sortbysec(const pair<int, int> &a,
//               const pair<int, int> &b) {
//    return (a.second > b.second);
//}
//
//bool sortbysec2(const pair<int, int> &a,
//                const pair<int, int> &b) {
//    return (a.second < b.second);
//}
//
//string isPalindrome(string S) {
//    bool pr = 1;
//    string P = S;
//
//
//    reverse(P.begin(), P.end());
//
//
//    if (S == P) {
//
//        return "Yes";
//    } else {
//
//        return "No";
//    }
//}
//enum queries{
//    toFront,
//    front,
//    back,
//    revers,
//    push_back,
//};
//bool reversed = false;
//queries operations(string String) {
//    if (reversed == false)
//    {
//        if (String == "toFront") return toFront;
//        if (String == "front") return front;
//        if (String == "back") return back;
//        if (String == "reverse") return revers;
//        if (String == "push_back") return push_back;
//    }
//    else
//    {
//        if (String == "toFront") return push_back;
//        if (String == "front") return back;
//        if (String == "back") return front;
//        if (String == "reverse") return revers;
//        if (String == "push_back") return toFront;
//    }
//}
//void countFreq(int arr[], int n)
//{
//    unordered_map<int, int> mp;
//
//    // Traverse through array elements and
//    // count frequencies
//    for (int i = 0; i < n; i++)
//        mp[arr[i]]++;
//
//    // Traverse through map and print frequencies
//    for (auto x : mp)
//        cout << x.first << " " << x.second << endl;
//}
ll const SZ= 2 * 10e5 + 1;

int main() {
//    string s[100];
    fastIO
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
//    int main(){
//        int n;
//        cin>>n;
//        string s;
//        cin>>s;
//        set<char> ch;
//
//        for(int i=0;i<s.length() ;i++){
//            ch.insert(tolower(s[i]));
//        }
//        if(ch.size()<26){
//            cout<<"NO";
//        }
//        else{
//            cout<<"YES";
//        }
int n;
    cin>>n;

    while (n--) {
                string s;
        cin>>s;
        set<char> ch;

        for(int i=0;i<s.length() ;i++){
            ch.insert(tolower(s[i]));
        }cout<<ch.size()<<endl;



    }
}
//2
//4
//3
//4
//1
//1