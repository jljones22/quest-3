#pragma once
class Fraction {
	int gcd(int a, int b); //*
	int n, d;
public:
	Fraction();
	Fraction(int n, int d) : n(n / gcd(n, d)), d(d / gcd(n, d)) {} //*
	int num() const; //*
	int den() const; //*
	friend Fraction operator+(Fraction lhs, Fraction rhs);
	friend Fraction operator-(Fraction lhs, Fraction rhs);
	friend Fraction operator*(Fraction lhs, Fraction rhs);
	friend Fraction operator/(Fraction lhs, Fraction rhs);
};

bool operator==(const Fraction& lhs, const Fraction& rhs); //*
bool operator!=(const Fraction& lhs, const Fraction& rhs); //*
bool operator<(const Fraction& lhs, const Fraction& rhs);
bool operator>(const Fraction& lhs, const Fraction& rhs);
bool operator<=(const Fraction& lhs, const Fraction& rhs);
bool operator>=(const Fraction& lhs, const Fraction& rhs); 
std::ostream& operator<<(std::ostream& out, const Fraction& f); //*
std::istream& operator>>(std::istream& in, Fraction& f);