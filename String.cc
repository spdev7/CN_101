#include <iostream>
using namespace std;

int main() {
    //can use both size(),length()

    string s1;
	string* sp = new string;
	*sp = "def";
	cout << sp << endl;
	cout << *sp << endl;

	string s = "abc";
	//getline(cin, s);
	cout << s << endl;
	
	s = "defdef";
	cout << s[0] << endl;
	s[0] = 'a';
	string s1;
	s1 = "def";

	string s2 = s + s1;
	cout << s2 << endl;

	s += s1;

	cout << s1 << endl;
	cout << s << endl;
        ///Breaking substring
	cout << s.size() << endl;
	cout << s.substr(3) << endl;	
	cout << s.substr(3, 3) << endl;	
          ///concatination is easy
          //s[0]+s[3]
	cout << s.find("def") << endl;





}
