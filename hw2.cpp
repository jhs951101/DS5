#include<iostream>
#include<string>

using namespace std;

int sumNumber(string n, int sum=0){  // ���ڿ��� �ڸ����� �հ踦 ���ϴ� �Լ�

	if(n.length() == 0){  // ���ڿ��� �� �ڸ� �� �����ν� �հ踦 �����
		return sum;
	}
	else{
		int d1 = n.at(0) - 48;  // d1: string���� ���ڷ� ��ȯ�� ���� ���� (�ƽ�Ű ���)
		sum += d1;  // sum: �ڸ����� �հ踦 �����ϴ� ����

		return sumNumber( n.substr(1, n.length()-1) , sum );
	}

}

int main(){

	string num;  // num: �Է¹��� ����
	cout << "Input the num: ";
	cin >> num;

	if(num.at(0) == '-')  // ���ڰ� ������ ��� ����� ��ȯ��
		num = num.substr(1, num.length()-1);

	int sum = sumNumber(num);  // sum: ���ڿ��� �ڸ����� �հ踦 ����

	cout << "Result: " << sum << endl;

	return 0;
}