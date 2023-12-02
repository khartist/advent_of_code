#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <queue>
#include <climits>
#include <vector>
#include <math.h>
#include <deque>
#include <unordered_map>
#include <set>
#include <map>

using namespace std;
//cin>>t>>ws; //for the getline to work
#define khartist29 int main()

//use two for loops to find the first and second number
//that appears in the string

int solve(string s) {
    char fi, se;
	for(int i=0; i<s.length(); i++) {
		if(s[i] >= '0' && s[i] <= '9') {
			fi += s[i];
			break;
		}
	}
	for(int i=s.length()-1; i>=0; --i) {
		if(s[i] >= '0' && s[i] <= '9') {
			se += s[i];
			break;
		}
	}
	int res = 10*(fi-'0');
	res += (se-'0');
	return res;
}	

khartist29 {
	ios::sync_with_stdio(false);
  	cin.tie(0);
	string s;
	int res = 0;
	while(cin) {
		cin>>s;
		res += solve(s);
	}
	cout<<res<<endl;
}

//output is 55123.