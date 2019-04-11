#include "Drob.h"



Drob::Drob(int x , int y)
{
	if (y == 0)
	{
		y = 1;
	}
	this->x = x;
	this->y = y;
}

Drob::Drob(const Drob & obj)
{
	this->x = obj.x;
	if (obj.y == 0)
	{
		this->y = 1;
		return;
	}

	this->y = obj.y;
}

Drob Drob::operator+=(const Drob & b)
{
	this->x = this->x * b.y + this->y * b.x;
	this->y *= b.y;
	return *this;
}

Drob Drob::operator-=(const Drob & b)
{
	this->x = this->x * b.y - this->y * b.x;
	this->y *= b.y;
	return *this;
}

Drob Drob::operator*=(const Drob & b)
{
	this->x *= b.x;
	this->y *= b.y;
	return *this;
}

Drob Drob::operator/=(const Drob & b)
{
	this->x *= b.y;
	this->y *= b.x;
	return *this;
}

void Drob::setX(int x)
{
	this->x = x;
}

void Drob::setY(int y)
{
	this->y = y;
}

int Drob::getX() const
{
	return this->x;
}

int Drob::getY() const
{
	return this->y;
}

void Drob::print()
{
	cout << x << "/" << y << endl;
}

double Drob::getFraction() const
{
	return double(this->x) / this->y;
}


Drob operator+(const Drob &a, const Drob &b)
{
	Drob tmp = a;
	tmp += b;
	return tmp;
}

bool operator==(const Drob & a, const Drob & b)
{
	return a.getFraction() == b.getFraction();
}

bool operator>=(const Drob & a, const Drob & b)
{
	return a.getFraction() >= b.getFraction();
}
