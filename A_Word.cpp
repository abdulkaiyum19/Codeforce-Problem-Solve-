#include<bits/stdc++.h>
using namespace std;
int main()
{
	char s[101];
	int n=0;
	cin >> s;
	for(int i=0;i<strlen(s);i++)
		if(s[i]<='Z')
			n++;
	if(n>strlen(s)/2)
		cout<<strupr(s);
	else
		cout<<strlwr(s);
	return 0;
}