#include <iostream>
#include <windows.h>
#include <math.h>
#include "Header.h"

using namespace std;

void rate1::price() {
	int beyond_min1 = minutes1 - min1;
	double beyond_mb1 = megabytes1 - mb1;
	cout << "Цена тарифа Смарт:" << endl;
	if (beyond_min1>=0 && beyond_mb1>=0)
		cout << 0.1 * beyond_min1 + 0.01 * beyond_mb1 << endl;
	else
		cout << 0;
	cout << endl;

}

void rate2::price() {
	int beyond_min2 = minutes2 - min2;
	double beyond_gb2 = gigabytes2 - gb2;
	cout << "Цена тарифа Смарт:" << endl;
	if (beyond_min2>=0 && beyond_gb2 >=0) 
		cout << 0.1 * beyond_min2 + 0.9 * beyond_gb2 << endl;
	else
		cout << 0;
	cout << endl;

}
void rate3::price() {
	int beyond_min3 = minutes3 - min3;
	double beyond_gb3 = gigabytes3 - gb3;
	cout << "Цена тарифа Ультра:" << endl;
	if (beyond_min3 >=0 && beyond_gb3 >=0)
	cout << 0.1 * beyond_min3 + 0.75 * beyond_gb3 << endl;
	else
		cout << 0;
	cout << endl;
}

void rate1::subscription_fee() {
	cout << "Тариф Смарт:" << endl;
	cout << "Лимит минут " << min1 << endl;
	cout << "Лимит мегабайт " << mb1 << endl;
	cout << "Абонентская плата " << cost1 << endl;
}

void rate2::subscription_fee() {
	cout << "Тариф Супер:" << endl;
	cout << "Лимит минут " << min2 << endl;
	cout << "Лимит гигабайт " << gb2 << endl;
	cout << "Абонентская плата " << cost2 << endl;
}

void rate3::subscription_fee() {
	cout << "Тариф Ультра:" << endl;
	cout << "Лимит минут " << min3 << endl;
	cout << "Лимит гигабайт " << gb3 << endl;
	cout << "Абонентская плата " << cost3 << endl;
}

double rate1::get_minutes1() {
	return minutes1;
}

double rate2::get_minutes2() {
	return minutes2;
}

double rate3::get_minutes3() {
	return minutes3;
}


double rate1::get_megabytes1() {
	return megabytes1;
}

double rate2::get_gigabytes2() {
	return gigabytes2;
}
double rate3::get_gigabytes3() {
	return gigabytes3;
}

void rate1:: set_minutes1(double a) {
	minutes1 = a;
}
void rate1::set_megabytes1(double a) {
	megabytes1 = a;
}

void rate2::set_minuties2(double a) {
	minutes2 = a;
}
void rate2::set_gigabytes2(double a) {
	gigabytes2 = a;
}
void rate3::set_minuties3(double a) {
	minutes3 = a;
}
void rate3::set_gigabytes3(double a) {
	gigabytes3 = a;
}

double rate1::get_cost1() {
	return cost1;
}

double rate2::get_cost2() {
	return cost2;
}

double rate3::get_cost3() {
	return cost3;
}




