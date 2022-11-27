#include <iostream>
#include <string>
#include <chrono>
#include <fstream>
using namespace std;

void GetInput(int& x) {
	fstream out;
	string path = "logs.txt";
	auto now = std::chrono::system_clock::now();
	std::time_t end_time = std::chrono::system_clock::to_time_t(now);
	out.open(path, fstream::in | fstream::out | fstream::app);
#pragma warning(suppress : 4996)
	out << endl << std::ctime(&end_time) << "Pol'zovatel' vvel: " << x << endl;
}
void GetNum(int& x) {
	fstream out;
	string path = "logs.txt";
	auto now = std::chrono::system_clock::now();
	std::time_t end_time = std::chrono::system_clock::to_time_t(now);
	out.open(path, fstream::in | fstream::out | fstream::app);
#pragma warning(suppress : 4996)
	out << endl << x;
}
void GetOutput(string& xx) {
	fstream out;
	string path = "logs.txt";
	auto now = std::chrono::system_clock::now();
	std::time_t end_time = std::chrono::system_clock::to_time_t(now);
	out.open(path, fstream::in | fstream::out | fstream::app);
#pragma warning(suppress : 4996)
	out << endl << std::ctime(&end_time) << xx << endl;
}

int main() {
	setlocale(LC_ALL, "rus");
	string x;
	int money;
	int temp;
	cout << "Vvedite summu, kotoruyu nuzhno vyplatit': ";
	cin >> money;
	while (money < 0) {
		cout << "Vvedite summu, kotoruyu nuzhno vyplatit': ";
		cin >> money;
	}
	GetInput(money);
	temp = (money / 32);
	money = money - (temp * 32);
	GetNum(temp);
	cout << temp;
	x = " po 32";
	GetOutput(x);
	cout << x << endl;
	temp = (money / 16);
	money = money - (temp * 16);
	GetNum(temp);
	cout << temp;
	x = " po 16";
	GetOutput(x);
	cout << x << endl;
	temp = (money / 8);
	money = money - (temp * 8);
	GetNum(temp);
	cout << temp;
	x = " po 8";
	GetOutput(x);
	cout << x << endl;
	temp = (money / 4);
	money = money - (temp * 4);
	GetNum(temp);
	cout << temp;
	x = " po 4";
	GetOutput(x);
	cout << x << endl;
	temp = (money / 2);
	money = money - (temp * 2);
	GetNum(temp);
	cout << temp;
	x = " po 2";
	GetOutput(x);
	cout << x << endl;
	temp = (money / 1);
	money = money - (money * temp);
	GetNum(temp);
	cout << temp;
	x = " po 1";
	GetOutput(x);
	cout << x << endl;;
}