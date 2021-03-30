#include <bits/stdc++.h>
using namespace std;

int main (){
	stack <char> s;
	string input = "((a+b) * (c+d)";
	for(int i=0;i<input.size();i++){
		// open parenthesis ie ( [ 
		if (input[i] == '(' || input[i] == '[')
			s.push(input[i]);
		else if (input[i] == ')' || input[i] == ']') { // close parenthesis ie ) ]
			if (s.empty()){ // ie: a)
				cout << "incorrect" <<  endl;
				break;
			}
			//not empty
			if ((s.top()=='[' && input[i] == ']') || 
				(s.top()=='(' && input[i] == ')'))
				s.pop();
			else{ // not match parenthesis
				cout << "incorrect" <<  endl;
				break;
			}
		}
	}
	if(s.empty())
	cout << "correct" << endl;
	else
	cout << "incorrect" << endl;
	return 0;
}


