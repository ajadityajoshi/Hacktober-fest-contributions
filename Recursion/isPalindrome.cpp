#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string s, int start  , int  end );
int main()
{
	int t{};
	cin >> t;
	while (t--) {

		string s ;
		cin >> s;
		cout << boolalpha << isPalindrome(s, 0, s.length() - 1) << endl;
	}
	return 0;
}
bool isPalindrome(string s, int start, int  end )//check for start and end char, and recursivly check for rest of substring
{
	if (start >= end) { //if they succefully compared to middle or beyond, then everything matched
		return true;
	}
	return (s[start] == s[end]) && isPalindrome(s, start + 1, end - 1);

	/*equivalent to
	if(s[start] == s[end]) return isPalindome(s,start+1,end-1);
	else return false;
	*/
}
//O(n) time worst O(n) aux space worst
// best O(1) time and space(fail at first check)
