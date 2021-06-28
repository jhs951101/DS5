#include<iostream>
#include<string>

using namespace std;

int sumNumber(string n, int sum=0){  // 숫자에서 자릿수의 합계를 구하는 함수

	if(n.length() == 0){  // 숫자에서 한 자리 씩 뺌으로써 합계를 계산함
		return sum;
	}
	else{
		int d1 = n.at(0) - 48;  // d1: string에서 숫자로 변환된 값을 저장 (아스키 사용)
		sum += d1;  // sum: 자릿수의 합계를 저장하는 변수

		return sumNumber( n.substr(1, n.length()-1) , sum );
	}

}

int main(){

	string num;  // num: 입력받을 숫자
	cout << "Input the num: ";
	cin >> num;

	if(num.at(0) == '-')  // 숫자가 음수일 경우 양수로 변환함
		num = num.substr(1, num.length()-1);

	int sum = sumNumber(num);  // sum: 숫자에서 자릿수의 합계를 저장

	cout << "Result: " << sum << endl;

	return 0;
}