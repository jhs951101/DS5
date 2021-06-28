#include<iostream>

using namespace std;

int maxNumber(int arr[], int size, int max){  // 숫자들의 최대값을 구하는 함수

	if(size == 0){
		return max;  // max: 배열 내의 숫자들의 최대값
	}
	else{
		if(max < arr[size-1]) max = arr[size-1];  // 배열의 size 값을 계속 -1 함으로써 최대값을 구함

		size--;
		return maxNumber(arr, size, max);
	}

}

int main(){

	int cnt;  // cnt: 배열 내의 숫자의 갯수
	int arr[100];  // arr[]: 숫자들을 모두 저장하는 배열

	cout << "Input the number of values: ";  // 입력받을 숫자의 갯수를 입력받음
	cin >> cnt;

	cout << "Input the numbers: ";  // 숫자들을 입력받음
	for(int i=0; i<cnt; i++)
		cin >> arr[i];

	int max = maxNumber(arr, cnt, arr[cnt-1]);  // max: 배열 내의 숫자들의 최대값을 저장

	cout << "Result: " << max << endl;

	return 0;
}