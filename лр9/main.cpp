// лр9.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <fstream>
#include <windows.h>
#include <math.h>
#include "Header.h"
using namespace std;
int main(int argc, char* argv[]){
	SetConsoleOutputCP(1251);
	cout << "Введите количество пользователей:" << endl;
	double n;
	bool t = true;
	while (t == true) {
		cout << "n=";
		cin >> n;
		if (!cin ||n<1 || int(n)-n!=0){
			cout << "Введите ещё раз!" << endl;
			cin.clear();
			while (cin.get() != '\n');
		}
		else
			t = false;
	}
	cout << endl;
	rate1* A = new rate1[n];
	A[0].subscription_fee();


	/*double b, m;
	ifstream in("test.txt");
	in >> b;
	in >> m;
	A[0].set_minuties1(b);
	A[0].set_megabytes1(m);
	A[0].price();
	in >> b;
	in >> m;
	in.close();
	*/

	for (int i = 0; i < n; i++) {
		double q, w;
		cout << "Клиент" << endl;
		cout << "Введите минуты и мегабыйты" << endl;
		cin >> q;
		cin >> w;
		A[i].set_minutes1(q);
		A[i].set_megabytes1(w);
		A[i].price();
	}
	cout << "Введите количество пользователей:" << endl;
	double r;
	bool e = true;
	while (e == true) {
		cout << "n=";
		cin >> r;
		if (!cin || r < 1 || int(r) - r != 0) {
			cout << "Введите ещё раз!" << endl;
			cin.clear();
			while (cin.get() != '\n');
		}
		else
			e=false;
	}
	cout << endl;
	rate2* B = new rate2[r];
	B[0].subscription_fee();
	for (int i = 0; i < r; i++) {
		double y, u;
		cout << "Клиент" << endl;
		cout << "Введите минуты и гигабыйты" << endl;
		cin >> y;
		cin >> u;
		B[i].set_minuties2(y);
		B[i].set_gigabytes2(u);
		B[i].price();
	}

	cout << "Введите количество пользователей:" << endl;
	double p;
	bool h = true;
	while (h == true) {
		cout << "n=";
		cin >> p;
		if (!cin || p < 1 || int(p) - p != 0) {
			cout << "Введите ещё раз!" << endl;
			cin.clear();
			while (cin.get() != '\n');
		}
		else
			h = false;
	}
	cout << endl;
	rate3* C = new rate3[p];
	C[0].subscription_fee();
	for (int i = 0; i < p; i++) {
		double k, l;
		cout << "Клиент" << endl;
		cout << "Введите минуты и гигабыйты" << endl;
		cin >> k;
		cin >> l;
		C[i].set_minuties3(k);
		C[i].set_gigabytes3(l);
		C[i].price();
	}


	double tr, ty;
	cout << "Введите диапазон по цене:" << endl;
	cin >> tr >> ty;
	if (tr < A[0].get_cost1() && ty < B[0].get_cost2()) {
		A[0].subscription_fee();
		return 0;
	}
	if (tr < A[0].get_cost1() && ty < C[0].get_cost3()) {
		A[0].subscription_fee();
		B[0].subscription_fee();
		return 0;
	}
	if (tr < A[0].get_cost1() && ty > C[0].get_cost3()) {
		A[0].subscription_fee();
		B[0].subscription_fee();
		C[0].subscription_fee();
		return 0;
	}
	if (tr > A[0].get_cost1() && ty < B[0].get_cost2()) {
		A[0].subscription_fee();
		return 0;
	}
	if (tr > A[0].get_cost1() && ty < C[0].get_cost3()) {
		B[0].subscription_fee();
		return 0;
	}
	if (tr > A[0].get_cost1() && ty > C[0].get_cost3()) {
		B[0].subscription_fee();
		C[0].subscription_fee();
		return 0;
	}
	if (tr > A[0].get_cost1() && ty < C[0].get_cost3()) {
		A[0].subscription_fee();
		B[0].subscription_fee();
		return 0;
	}
	if (tr > B[0].get_cost2() && ty > C[0].get_cost3()) {
		C[0].subscription_fee();
		return 0;
	}
	if (tr > B[0].get_cost2() && ty < C[0].get_cost3()) {
		C[0].subscription_fee();
		return 0;
	}
	
	Sleep(9999);
	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.