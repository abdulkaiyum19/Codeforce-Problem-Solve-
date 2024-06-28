#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main ()
{
    int counter = 0;
    string name;
    cin >> name;

    sort(name.begin(), name.end());
    for(int i =0; i < name.size(); i++){
        if(name[i] != name[i+1]){
            counter++;
        }
    }
    if(counter % 2 != 0){
        cout << "IGNORE HIM!" <<endl;
    }
    else {
        cout << "CHAT WITH HER!" << endl;
    }

    return 0;
}