#pragma once
#ifndef HEADER_H
#define HEADER_H
class rate {
public:
	virtual void price()=0 ;
	virtual void subscription_fee()=0;
};

class rate1 : public rate {
	const int min1 = 150;
	const double mb1 = 250;
	const double cost1 = 7.2;
	int minutes1;
	int megabytes1;
public:
	void price();
	void subscription_fee();
	double get_minutes1();
	double get_megabytes1();
	void set_minutes1(double a);
	void set_megabytes1(double a);
	double get_cost1();
};

class rate2 : public rate {
	const int min2 = 250;
	const double gb2 = 3;
	const double cost2 = 12.5;
	int minutes2;
	int gigabytes2;
public:
	void price();
	void subscription_fee();
	double get_minutes2();
	double get_gigabytes2();
	void set_minuties2(double a);
	void set_gigabytes2(double a);
	double get_cost2();
};

class rate3 : public rate {
	const int min3 = 1000;
	const double gb3 = 10;
	const double cost3 = 25;
	int minutes3;
	int gigabytes3;
public:
	void price();
	void subscription_fee();
	double get_minutes3();
	double get_gigabytes3();
	void set_minuties3(double a);
	void set_gigabytes3(double a);
	double get_cost3();
};

#endif