//in the name of God, Most Gracious, Most Merciful 
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    set<char> st;
    for (int  i = 0; i < s.size()- 1; i++)
    {
        if(s[i] >= 97 && s[i] <= 122){
            st.insert(s[i]);
        }
    }
    cout << st.size() << endl;
}