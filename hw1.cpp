#include<iostream>
#include<string>

using namespace std;

int countNumber(string n, int cnt=0){  // ���ڿ��� �ڸ����� ������ ���� �Լ�

	if( n.length() == 0 ){  // ���ڿ��� �� �ڸ� �� �����ν� �ڸ����� ������ ī��Ʈ��
		return cnt;  
	}
	else{
		cnt++;  // cnt: �ڸ����� ������ �����ϴ� ����

		return countNumber( n.substr(1, n.length()-1) , cnt );
	}

}

int main(){

	string num;  // num: �Է¹��� ����
	cout << "Input the num: ";
	cin >> num;

	if(num.at(0) == '-')  // ���ڰ� ������ ��� ����� ��ȯ��
		num = num.substr(1, num.length()-1);

	int count = countNumber(num);  // count: ���ڿ��� �ڸ����� ������ ����

	cout << "Result: " << count << endl;

	return 0;
}