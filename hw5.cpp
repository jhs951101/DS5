#include<iostream>

using namespace std;

int maxNumber(int arr[], int size, int max){  // ���ڵ��� �ִ밪�� ���ϴ� �Լ�

	if(size == 0){
		return max;  // max: �迭 ���� ���ڵ��� �ִ밪
	}
	else{
		if(max < arr[size-1]) max = arr[size-1];  // �迭�� size ���� ��� -1 �����ν� �ִ밪�� ����

		size--;
		return maxNumber(arr, size, max);
	}

}

int main(){

	int cnt;  // cnt: �迭 ���� ������ ����
	int arr[100];  // arr[]: ���ڵ��� ��� �����ϴ� �迭

	cout << "Input the number of values: ";  // �Է¹��� ������ ������ �Է¹���
	cin >> cnt;

	cout << "Input the numbers: ";  // ���ڵ��� �Է¹���
	for(int i=0; i<cnt; i++)
		cin >> arr[i];

	int max = maxNumber(arr, cnt, arr[cnt-1]);  // max: �迭 ���� ���ڵ��� �ִ밪�� ����

	cout << "Result: " << max << endl;

	return 0;
}