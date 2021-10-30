#include <bits/stdc++.h>
using namespace std;
void printPermutation(string s , int i = 0);
int main()
{
	int t{};
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		printPermutation(s);
	}
	return 0;
}

void printPermutation(string s , int i)  //fix first ,and call for rest
{
	if (i == s.length() - 1) { //base case after i levels of recursion we finally modified s to a permute
		cout << s << " "; //print s
		return;
	}

	for (int j = i; j < s.length(); j++) { // at ith level of fixing brings	 jth character at ith index
		swap(s[i], s[j]); // fixed element at ith level
		printPermutation(s, i + 1); //fixing next level
		swap(s[i], s[j]); //reset string
	}

}
