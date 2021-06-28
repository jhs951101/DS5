#include<iostream>
#include<string>

using namespace std;

int countNumber(string n, int cnt=0){  // 숫자에서 자릿수의 갯수를 세는 함수

	if( n.length() == 0 ){  // 숫자에서 한 자리 씩 뺌으로써 자릿수의 갯수를 카운트함
		return cnt;  
	}
	else{
		cnt++;  // cnt: 자릿수의 갯수를 저장하는 변수

		return countNumber( n.substr(1, n.length()-1) , cnt );
	}

}

int main(){

	string num;  // num: 입력받을 숫자
	cout << "Input the num: ";
	cin >> num;

	if(num.at(0) == '-')  // 숫자가 음수일 경우 양수로 변환함
		num = num.substr(1, num.length()-1);

	int count = countNumber(num);  // count: 숫자에서 자릿수의 갯수를 저장

	cout << "Result: " << count << endl;

	return 0;
}