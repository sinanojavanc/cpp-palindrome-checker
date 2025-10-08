#include <iostream>
#include <string>
using namespace std;

bool PalindromeCheck(string a){
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
		cin >> txt;
		
		cout << 	(PalindromeCheck(txt) ?
			   		"\nyour text is palindrome\n" : "\nyour text is not a palindrome\n");
		
		system("pause");
	}
	return 0;
}