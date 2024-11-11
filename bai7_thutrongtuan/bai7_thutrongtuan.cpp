#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int so;
	cout << "nhap so: ";
	cin >> so;
	switch (so)
	{
	case 2:
		cout << "thu hai\n";
		break;
	case 3:
		cout << "thu ba\n";
		break;
	case 4:
		cout << "thu tu\n";
		break;
	case 5:
		cout << "thu nam\n";
		break;
	case 6:
		cout << "thu sau\n";
		break;
	case 7:
		cout << "thu bay\n";
		break;
	case 8:
		cout << "chu nhan\n";
		break;
	default:
		cout << "so khong thuoc ngay trong tuan\n";
		return 0;
	}
}
