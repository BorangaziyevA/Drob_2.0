#pragma once
#include<iostream>

using namespace std;

class Drob
{
	int x, y;
public:
	Drob(int x=0,int y=1);
	Drob(const Drob &obj);
	Drob operator+=(const Drob &b);
	Drob operator-=(const Drob &b);
	Drob operator*=(const Drob &b);
	Drob operator/=(const Drob &b);
	void setX(int x);
	void setY(int y);
	int getX() const;
	int getY() const;
	void print();
	double getFraction() const;
};


Drob operator+(const Drob &a, const Drob &b);
bool operator==(const Drob &a, const Drob &b);
bool operator>=(const Drob &a, const Drob &b);