#include<iostream>
#include<string>

using namespace std;

bool isPalindrome(string w){  // �Է¹��� �ܾ Palindrome ���� �����ϴ� �Լ�

	if(w.length() == 0 || w.length() == 1){
		return true;
	}
	else{
		if( w.at(0) != w.at(w.length()-1) )  // ù ����, ������ ���ڰ� �ٸ� ��� �����ϰ� false�� return��
			return false;
		else
			return isPalindrome( w.substr(1, w.length()-2) );  // ù ����, ������ ���ڸ� �ϳ��� ���� ��͸� �����Ŵ
	}
	
}

int main(){

	string word;  // word: �Է¹��� �ܾ�
	cout << "Input the word: ";
	cin >> word;

	bool isTrue = isPalindrome(word);  // isTrue: Palindrome �̸� true�� �����

	if(isTrue == true)  // Palindrome ������ ���� ����� �޸���
		cout << "palindrome" << endl;
	else
		cout << "not palindrome" << endl;

	return 0;
}