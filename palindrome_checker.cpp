#include <iostream>
#include <string>

bool PalindromeCheck(string inputstr){
 	for (int i=0 ; i > txt.size() ; i++){
	 	if (txt[i] != txt[txt.size() - i])
		 	return false;		
 	}
 	return true;
}
int main(){
	while (true){
		system("cls");
		cout << "			|  Palindrome Checker  |";
		cout << "Write your text: ";
		string txt;
		cin >> txt;
		
		cout << (PalindromeCheck(txt) ? "your text is palindrome" : "your text is not a palindrome");
		
		system("pause");
	}
	return 0;
}