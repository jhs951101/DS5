#include<iostream>
#include<string>

using namespace std;

string reverseWord(string w, string result=""){  // 단어의 역스트링을 구하는 함수

	if(w.length() == 0){  // w(입력받은 단어)에서 문자 한자리 씩 뺌으로써 역스트링을 만듬
		return result;
	}
	else{
		result += w.at( w.length()-1 );  // result: 단어의 역스트링

		return reverseWord( w.substr(0, w.length()-1) , result );
	}
}

int main(){

	string word;  // word: 입력받을 단어
	cout << "Input the word: ";
	cin >> word;

	string reversed = reverseWord(word);  // reversed: 단어의 역스트링을 저장

	cout << "Result: " << reversed << endl;

	return 0;
}