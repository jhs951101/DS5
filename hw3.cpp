#include<iostream>
#include<string>

using namespace std;

string reverseWord(string w, string result=""){  // �ܾ��� ����Ʈ���� ���ϴ� �Լ�

	if(w.length() == 0){  // w(�Է¹��� �ܾ�)���� ���� ���ڸ� �� �����ν� ����Ʈ���� ����
		return result;
	}
	else{
		result += w.at( w.length()-1 );  // result: �ܾ��� ����Ʈ��

		return reverseWord( w.substr(0, w.length()-1) , result );
	}
}

int main(){

	string word;  // word: �Է¹��� �ܾ�
	cout << "Input the word: ";
	cin >> word;

	string reversed = reverseWord(word);  // reversed: �ܾ��� ����Ʈ���� ����

	cout << "Result: " << reversed << endl;

	return 0;
}