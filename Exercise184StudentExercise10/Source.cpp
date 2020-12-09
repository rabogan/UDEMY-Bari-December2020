#include "Header.h"

class Rational
{
private:
	int p;
	int q;

public:
	Rational()
	{
		int p = 0;
		int q = 0;
	}

	Rational(int p, int q)
	{
		this->p = p;
		this->q = q;
	}

	void set_p (int p)
	{
		this->p = p;
	}

	void set_q(int q)
	{
		this->q = q;
	}

	int get_p()
	{
		return p;
	}
	int get_q()
	{
		return q;
	}

	friend Rational operator+(Rational r1, Rational r2);

	friend ostream& operator << (ostream& output, Rational rational);
};


Rational operator+(Rational r1, Rational r2)
{
	Rational temp;
	temp.p = ((r1.p * r2.q) + (r1.q * r2.p));
	temp.q = r1.q * r2.q;
	return temp;
}

ostream& operator<<(ostream& output, Rational rational)
{
	output << rational.p << "/" << rational.q;
	return output;
}

int gcd(int n1, int n2)
{
	while (n1 != n2)
	{
		if (n1 > n2)
			n1 -= n2;
		else
			n2 -= n1;
	}
	return n1;
}

// Additional function to simplify the fraction! 
void SimplifyFraction(int x, int y)
{
	int denom;
	denom = gcd(x, y);

	x = x / denom;
	y = y / denom;

	cout<< x << "/" << y;
}


int main()
{
	Rational r1, r2, r3;
	int p = 0, q = 0;
	cout << "Please enter your p value in your first number (p/q):\n";
	cin >> p;
	cout << "Now enter the q value in your first number (p/q):\n";
	cin >> q;
	r1.set_p(p);
	r1.set_q(q);
	cout << "Please enter your p value in your second number (p/q):\n";
	cin >> p;
	cout << "Now enter the q value in your second number (p/q):\n";
	cin >> q;
	r2.set_p(p);
	r2.set_q(q);

	r3 = r1 + r2;
	cout << "The raw sum of " << r1 << " and " << r2 << " is " << r3 << endl;

	if (r3.get_p() % r3.get_q() == 0) 
	{
		cout << "That adds up to " << r3.get_p() / r3.get_q() << " exactly." << endl;
	}
	else if ((r3.get_p() / r3.get_q()) > 0)
	{
		cout << "In total, simplified as much as possible, that is " << r3.get_p() / r3.get_q() << " and ";
		SimplifyFraction((r3.get_p() % r3.get_q()), r3.get_q());
	}
	else
	{
		cout << "That's ";
		SimplifyFraction((r3.get_p() % r3.get_q()), r3.get_q());
		cout << " when simplified as much as possible.";
	}
	return 0;
}