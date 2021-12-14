#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

// 一天想我几次？
// 24小时，每秒一次
int main(void) {
	int count = 0;

	for (int i=0; i < 24; i++) {
		for (int j=0; j<60; j++) {
			for (int k=0; k<60; k++) {
				count++;
				cout << i << ":" << j << ":" << k  
<< " 想你第" << count << "次" << endl;
				Sleep(1000);
			}
		}
	}

	cout << "一天想你" << count << "次" << endl;

	system("pause");
	return 0;
}
