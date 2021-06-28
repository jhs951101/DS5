#include<iostream>

using namespace std;

void maxDifference(int arr[], int start, const int end, int max, int x, int y){  // ���� ���̰� ���� ū ���� x�� y�� ��½�Ű�� �Լ�

	if(start == end){  // ������(start)�� ��� +1 �����ν� ���̰� ���� ū ���� ����
		cout << "Result: " << endl;
		cout << "x = " << x << ", y = " << y << endl;
	}
	else{
		for(int i=start+1; i<=end; i++)
			if( max < arr[i]-arr[start] ){  // max: �迭���� ���� ���̰� ���� ū ��
				max = arr[i]-arr[start];
				x = arr[start];  // x, y: ���� ���̰� ���� ū ���� x�� y
				y = arr[i];
			}

		start++;
		return maxDifference(arr, start, end, max, x, y);
	}

}

int main(){

	int cnt;  // cnt: �迭 ���� ������ ����
	int arr[10000];  // arr[]: ���ڵ��� ��� �����ϴ� �迭

	cout << "Input the number of values: ";  // �Է¹��� ������ ������ �Է¹���
	cin >> cnt;

	if(cnt == 1){
		cout << "Error: the number of values is only one" << endl;
		return 1;
	}

	cout << "Input the numbers: ";  // ���ڵ��� �Է¹���
	for(int i=0; i<cnt; i++)
		cin >> arr[i];

	/* ��� �Լ��� �ʹ� ���� ����Ǹ� Run-time Error�� �߻�, 
	  ���� test case 10 ���� ��쿡�� ���� ���� �ǰ� �Ϸ��� ���� Ȯ���� �ؾߵ� */

	int max = arr[0], min = arr[0];  // max, min: �迭 �ִ밪, �迭 �ּҰ�
	int x = 0, y = 0;  // x, y: �ִ밪�� �迭 �ּ�, �ּҰ��� �迭 �ּ�

							   // <���� Ȯ���� �ϴ� �κ�>
	for(int i=0; i<cnt; i++){  // �迭���� �ִ밪�� �ּҰ��� ã�� 
		if(max < arr[i]){
			max = arr[i];
			y = i;
		}
		if(min > arr[i]){
			min = arr[i];
			x = i;
		}
	}
				  // <���� Ȯ���� �ϴ� �κ�>
	if(y-x > 0){  // x�� y���� �տ� ������ �ִ밪�� �ּҰ��� ��µ� (�ִ밪�� �ּҰ��� ���̰� ���� ũ�Ƿ�) 
		cout << "Result: " << endl;
		cout << "x = " << min << ", y = " << max << endl;
		return 0;
	}

	maxDifference(arr, 0, cnt-1, arr[1]-arr[0], arr[0], arr[1]);  // �ƴϸ� ������ �迭 ���� ������ ���ؾߵ�

	return 0;
}