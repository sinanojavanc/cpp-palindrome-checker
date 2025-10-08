#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool PalindromeCheck(string a){
 	string clean = "";
 	for (char c : a) {
	    	if (isalnum(c)) 
	       	clean += tolower(c);
	}
 	a = clean;  // change a to a clean and lowercase string
 	int len = a.size();
	
 	for (int i=0 ; i < len / 2; i++){
	 	if (a[i] != a[len - i - 1])
		 	return false;		
 	}
 	return true;
}
int main(){
	while (true){
	 	system("cls");
	 	cout << "			|  Palindrome Checker  |\n";
	 	cout << "Write your text:  ";
	 	string txt;
	 	cin.ignore();
	 	getline(cin, txt);
		
	 	cout << 	(PalindromeCheck(txt) ?
			   		"\nyour text is palindrome\n" : "\nyour text is not a palindrome\n");
		
	 	system("pause");
	}
	return 0;
}