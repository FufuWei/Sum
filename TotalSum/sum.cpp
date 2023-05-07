#include<iostream>
#include<Windows.h>
using namespace std;
int main() {
	int n;
	cin >> n;

	int m[] = { 0,10,20,50,80,100,500,1000,8000,15000 };
	int sum = 0;
	int l[] = { 59,34,23,48,51,62,35,27,17,12 };

	//long start_time = GetTickCount();
	//for (int i = 0; i < n; i++)
	//	sum += array[i];
	//long end_time = GetTickCount();
	//long run_time = end_time - start_time;
	LARGE_INTEGER t1, t2, tc;
	for (int j = 0; j < 10; j++) {
		QueryPerformanceFrequency(&tc);
		QueryPerformanceCounter(&t1);
		//for (int k = 0; k < m[j]; k++) {
		for (int t = 0; t < t[l]; t++) {
			sum = 0;
			for (int i = 0; i < m[j]; i++) {
				int* array = new int[m[j]];
				array[i] = i;
				sum += array[i];
			}
		}
		cout << sum << " ";
		QueryPerformanceCounter(&t2);
		cout << " time : " << (double)(t2.QuadPart - t1.QuadPart) / (double)tc.QuadPart << " Average : " << (double)(t2.QuadPart - t1.QuadPart) / (double)tc.QuadPart / l[j] << endl;
	}
}