#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string s="acedceafdba";
    //int occ[26][s.length()]={0};
    int **acc = new int*[26];
    for (int i = 0; i < 26; i++){
        acc[i] = new int[s.length()];
        int ct=0;
        for(int l=0;l<s.length();l++){
            if(s[l]==('a'+i)){
                ct++;
            }
            acc[i][l]=ct;
        }    
    }
    cout << 
    for(char a='a';a<='z';a++){

    }
}