#include<iostream>

using namespace std;

void maxDifference(int arr[], int start, const int end, int max, int x, int y){  // 서로 차이가 가장 큰 값의 x와 y를 출력시키는 함수

	if(start == end){  // 시작점(start)을 계속 +1 함으로써 차이가 가장 큰 값을 구함
		cout << "Result: " << endl;
		cout << "x = " << x << ", y = " << y << endl;
	}
	else{
		for(int i=start+1; i<=end; i++)
			if( max < arr[i]-arr[start] ){  // max: 배열에서 서로 차이가 가장 큰 값
				max = arr[i]-arr[start];
				x = arr[start];  // x, y: 서로 차이가 가장 큰 값의 x와 y
				y = arr[i];
			}

		start++;
		return maxDifference(arr, start, end, max, x, y);
	}

}

int main(){

	int cnt;  // cnt: 배열 내의 숫자의 갯수
	int arr[10000];  // arr[]: 숫자들을 모두 저장하는 배열

	cout << "Input the number of values: ";  // 입력받을 숫자의 갯수를 입력받음
	cin >> cnt;

	if(cnt == 1){
		cout << "Error: the number of values is only one" << endl;
		return 1;
	}

	cout << "Input the numbers: ";  // 숫자들을 입력받음
	for(int i=0; i<cnt; i++)
		cin >> arr[i];

	/* 재귀 함수가 너무 많이 실행되면 Run-time Error가 발생, 
	  따라서 test case 10 같은 경우에도 정상 동작 되게 하려면 사전 확인을 해야됨 */

	int max = arr[0], min = arr[0];  // max, min: 배열 최대값, 배열 최소값
	int x = 0, y = 0;  // x, y: 최대값의 배열 주소, 최소값의 배열 주소

							   // <사전 확인을 하는 부분>
	for(int i=0; i<cnt; i++){  // 배열에서 최대값과 최소값을 찾음 
		if(max < arr[i]){
			max = arr[i];
			y = i;
		}
		if(min > arr[i]){
			min = arr[i];
			x = i;
		}
	}
				  // <사전 확인을 하는 부분>
	if(y-x > 0){  // x가 y보다 앞에 있으면 최대값과 최소값이 출력됨 (최대값과 최소값의 차이가 가장 크므로) 
		cout << "Result: " << endl;
		cout << "x = " << min << ", y = " << max << endl;
		return 0;
	}

	maxDifference(arr, 0, cnt-1, arr[1]-arr[0], arr[0], arr[1]);  // 아니면 일일히 배열 내의 값들을 비교해야됨

	return 0;
}