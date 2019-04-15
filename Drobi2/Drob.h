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
	Drob& operator++();
	Drob operator++(int);
	Drob& operator--();
	Drob operator--(int);
	void setX(int x);
	void setY(int y);
	int getX() const;
	int getY() const;
	void print()const;
	double getFraction() const;
};

ostream& operator<<(ostream& os, const Drob& obj);
istream& operator>>(istream& is, Drob& obj);
Drob operator+(const Drob &a, const Drob &b);
bool operator==(const Drob &a, const Drob &b);
bool operator>=(const Drob &a, const Drob &b);
