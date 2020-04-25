#include <iostream>
#include "Fraction.h"

Fraction::Fraction() {
    n = 0;
    d = 1;
}

int Fraction::num() const {
    return n;
}

int Fraction::den() const {
    return d;
}

int Fraction::gcd(int a, int b) { //*
    return b == 0 ? a : gcd(b, a % b);
}

Fraction operator+(Fraction lhs, Fraction rhs) {
    Fraction r;
    r.n = (lhs.n * rhs.d) + (rhs.n * lhs.d);
    r.d = lhs.d * rhs.d;
    return r;
}

Fraction operator-(Fraction lhs, Fraction rhs) {
    Fraction r;
    r.n = (lhs.n * rhs.d) - (rhs.n * lhs.d);
    r.d = lhs.d * rhs.d;
    return r;
}

Fraction operator*(Fraction lhs, Fraction rhs) {
    Fraction r;
    r.n = lhs.n * rhs.n;
    r.d = lhs.d * rhs.d;
    return r;
}

Fraction operator/(Fraction lhs, Fraction rhs) {
    Fraction r;
    r.n = lhs.n * rhs.d;
    r.d = lhs.d * rhs.n;
    return r;
}

bool operator==(const Fraction& lhs, const Fraction& rhs) { //*
    return lhs.num() == rhs.num() && lhs.den() == rhs.den();
}

bool operator!=(const Fraction& lhs, const Fraction& rhs) { //*
    return !(lhs == rhs);
}

bool operator<(const Fraction& lhs, const Fraction& rhs) {
    return lhs.num() < rhs.num() && lhs.den() > rhs.den();
}

bool operator>(const Fraction& lhs, const Fraction& rhs) {
    return lhs.num() > rhs.num() && lhs.den() < lhs.den();
}

bool operator<=(const Fraction& lhs, const Fraction& rhs) {
    return lhs.num() <= rhs.num() && lhs.den() >= rhs.den();
}

bool operator>=(const Fraction& lhs, const Fraction& rhs) {
    return lhs.num() >= rhs.num() && lhs.den() <= rhs.den();
}

std::ostream& operator<<(std::ostream& out, const Fraction& f) { //*
    return out << f.num() << '/' << f.den();
}

std::istream& operator>>(std::istream& in, Fraction& f) { //?
    return in >> f.num() >> f.den();
}
