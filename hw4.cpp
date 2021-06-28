#include<iostream>
#include<string>

using namespace std;

bool isPalindrome(string w){  // 입력받은 단어가 Palindrome 인지 결정하는 함수

	if(w.length() == 0 || w.length() == 1){
		return true;
	}
	else{
		if( w.at(0) != w.at(w.length()-1) )  // 첫 문자, 마지막 문자가 다를 경우 과감하게 false를 return함
			return false;
		else
			return isPalindrome( w.substr(1, w.length()-2) );  // 첫 문자, 마지막 문자를 하나씩 빼서 재귀를 진행시킴
	}
	
}

int main(){

	string word;  // word: 입력받을 단어
	cout << "Input the word: ";
	cin >> word;

	bool isTrue = isPalindrome(word);  // isTrue: Palindrome 이면 true가 저장됨

	if(isTrue == true)  // Palindrome 인지에 따라 출력을 달리함
		cout << "palindrome" << endl;
	else
		cout << "not palindrome" << endl;

	return 0;
}