#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool is_palindrome (string t, int b, int e){
	if(b >= e) return true;
	if(t[b] == t[e]) return is_palindrome(t, b+1, e-1);
	else return false;
}

int main() {
	int n, l, p1, p2;

	cin >> n;
	string t, o;

	while (n--){
		cin >> t;
		l = 0;

		while (true){
			if (is_palindrome(t, 0, t.length()-1)) break;
			p1 = stoi(t);
			reverse(t.begin(), t.end());
			p2 = stoi(t);

			p1+=p2;
			t = to_string(p1);
			l++;
		}
		cout << t << " " << l <<endl;
	}

	return 0;
}