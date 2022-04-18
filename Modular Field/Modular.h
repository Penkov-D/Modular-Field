#pragma once

#include <iostream>

typedef long long int lli;

template <int B>
class M {

private:
	lli value;

public:

	/* ================[    Constractors     ]================ */

	M() : value(0) {};

	M(lli value) : value(value % B) {
		if (value < 0)
			this->value = B + value;
	};


	/* ================[     Arithmetic      ]================ */

	M operator+(const M other) const {
		return M(value + other.value);
	}

	M operator+(const lli i) const {
		return M(value + i);
	}

	friend M operator+(const lli i, const M other) {
		return M(i + other.value);
	}

	M operator-(const M other) const {
		return M(value - other.value);
	}

	M operator-(const lli i) const {
		return M(value - i);
	}

	friend M operator-(const lli i, const M other) {
		return M(i - other.value);
	}

	M operator*(const M other) const {
		return M(value * other.value);
	}

	M operator*(const lli i) const {
		return M(value * i);
	}

	friend M operator*(const lli i, const M other) {
		return M(i * other.value);
	}

	M operator/(const M other) const {
		return M(value / other.value);
	}

	M operator/(const lli i) const {
		return M(value / i);
	}

	friend M operator/(const lli i, const M other) {
		return M(i / other.value);
	}

	M operator%(const M other) const {
		return M(value % other.value);
	}

	M operator%(const lli i) const {
		return M(value % i);
	}

	friend M operator%(const lli i, const M other) {
		return M(i % other.value);
	}

	M operator+() const {
		return *this;
	}

	M operator-() const {
		return 0 - *this;
	}

	M operator~() const {
		return - *this;
	}


	/* ================[     Assignment      ]================ */

	M& operator+=(const M other) {
		return (*this = *this + other);
	}

	M& operator-=(const M other) {
		return (*this = *this - other);
	}
	M& operator*=(const M other) {
		return (*this = *this * other);
	}
	M& operator/=(const M other) {
		return (*this = *this / other);
	}
	M& operator%=(const M other) {
		return (*this = *this % other);
	}


	/* ================[   Inc/Dec-rement    ]================ */

	M& operator++() {
		return (*this += 1);
	}

	M operator++(int) {
		M m = *this;
		*this += 1;
		return m;
	}

	M& operator--() {
		return (*this -= 1);
	}

	M operator--(int) {
		M m = *this;
		*this -= 1;
		return m;
	}


	/* ================[     Comparison      ]================ */

	bool operator==(const M other) const {
		return value == other.value;
	}

	bool operator==(const lli i) const {
		return value == M(i);
	}

	friend bool operator==(const lli i, const M other) {
		return M(i) == other;
	}

	bool operator!=(const M other) const {
		return value != other.value;
	}

	bool operator!=(const lli i) const {
		return value != M(i);
	}

	friend bool operator!=(const lli i, const M other) {
		return M(i) != other;
	}

	bool operator< (const M other) const {
		return value < other.value;
	}

	bool operator< (const lli i) const {
		return value < M(i);
	}

	friend bool operator< (const lli i, const M other) {
		return M(i) < other;
	}

	bool operator<=(const M other) const {
		return value <= other.value;
	}

	bool operator<=(const lli i) const {
		return value <= M(i);
	}

	friend bool operator<=(const lli i, const M other) {
		return M(i) <= other;
	}

	bool operator> (const M other) const {
		return value > other.value;
	}

	bool operator> (const lli i) const {
		return value > M(i);
	}

	friend bool operator> (const lli i, const M other) {
		return M(i) > other;
	}

	bool operator>=(const M other) const {
		return value >= other.value;
	}

	bool operator>=(const lli i) const {
		return value >= M(i);
	}

	friend bool operator>=(const lli i, const M other) {
		return M(i) >= other;
	}


	/* ================[       Casting       ]================ */

	operator int() {
		return (int) value;
	}

	operator lli() {
		return value;
	}


	/* ================[       Output        ]================ */

	friend std::ostream& operator<<(std::ostream& os, const M number) {
		return (os << number.value);
	}
};
