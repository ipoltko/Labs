#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>
#include <math.h>

using namespace std;


class Fraction {
public:
	Fraction(int numerator, int denominator);
	int get_whole();
	string toString();
	double toDouble();
	Fraction plus(Fraction that);
	Fraction minus(Fraction that);
	Fraction times(Fraction that);
	Fraction by(Fraction that);
	bool isGreaterThan(Fraction that);
	bool isLessThan(Fraction that);
	bool isEqual(Fraction that);

private:
	int numerator;
	int denominator;
	int whole;
	void reduce();
};
Fraction::Fraction(int numerator, int denominator)
{
	this->numerator = numerator;
	this->denominator = denominator;
	this->whole = 0;
}
int Fraction::get_whole()
{
	return this->whole;
}
string Fraction::toString()
{
	if (this->whole == 0)
		return to_string(this->numerator) + " / " + to_string(this->denominator);
	else
		return to_string(this->whole) + " " + to_string(this->numerator) + " / " + to_string(this->denominator);
}
double Fraction::toDouble()
{
	double result = (double)this->numerator / (double)this->denominator;
	return result;
}
int gcd01(int a, int b) 
{
	int nod = 1L;
	for (int i = a; i > 0; i--) {
		if (a % i == 0 && b % i == 0) {
			nod = i;
			break;
		}
	}
	return nod;
}
void Fraction::reduce()
{
	this->whole = this->numerator / this->denominator;
	if (whole != 0)
	{
		this->numerator = abs(this->numerator - (this->whole *  this->denominator));
		this->denominator = abs(this->denominator);
	}
	else
	{
		this->numerator = this->numerator - (this->whole *  this->denominator);
		this->denominator = this->denominator;
	}
	int gcd = gcd01(this->numerator, this->denominator);
	if (this->numerator % gcd == 0 && this->denominator % gcd == 0)
	{
		this->numerator /= gcd;
		this->denominator /= gcd;
	}
}
Fraction Fraction::plus(Fraction that)
{
	int den = this->denominator * that.denominator;
	int firstNum = this->numerator * that.denominator;
	int secondNum = that.numerator * this->denominator;
	int num = firstNum + secondNum;
	Fraction result(num, den);
	result.reduce();
	return result;
}
Fraction Fraction::minus(Fraction that)
{
	int den = this->denominator * that.denominator;
	int firstNum = this->numerator * that.denominator;
	int secondNum = that.numerator * this->denominator;
	int num = firstNum - secondNum;
	Fraction result(num, den);
	result.reduce();
	return result;
}
Fraction Fraction::times(Fraction that)
{
	int num = this->numerator * that.numerator;
	int den = this->denominator * that.denominator;
	Fraction result(num, den);
	result.reduce();
	return result;
}
Fraction Fraction::by(Fraction that)
{
	int num = this->numerator * that.denominator;
	int den = this->denominator * that.numerator;
	Fraction result(num, den);
	result.reduce();
	return result;
}
bool Fraction::isGreaterThan(Fraction that)
{
	int den = this->denominator * that.denominator;
	int firstNum = (den / this->denominator) * this->numerator;
	int secondNum = (den / that.denominator) * that.numerator;
	this->reduce(); that.reduce();
	if (firstNum > secondNum)
		return true;
	else
		return false;
}
bool Fraction::isLessThan(Fraction that)
{
	int den = this->denominator * that.denominator;
	int firstNum = (den / this->denominator) * this->numerator;
	int secondNum = (den / that.denominator) * that.numerator;
	this->reduce(); that.reduce();
	if (firstNum < secondNum)
		return true;
	else
		return false;
}
bool Fraction::isEqual(Fraction that)
{
	int den = this->denominator * that.denominator;
	int firstNum = (den / this->denominator) * this->numerator;
	int secondNum = (den / that.denominator) * that.numerator;
	this->reduce(); that.reduce();
	if (firstNum == secondNum)
		return true;
	else
		return false;
}
vector<string> split(string line, char c)
{
	vector<string> result;
	string tmpstr = "";
	for (int i = 0; i < line.length(); i++)
	{
		if (line[i] != c)
			tmpstr += line[i];
		else
		{
			result.push_back(tmpstr);
			tmpstr = "";
		}
	}

	if (line[line.length() - 1] != ' ')
		result.push_back(tmpstr);

	return result;
}
int main()
{

	int num, den;
	char input[100];
	cout << "Enter the fraction: ";
	cin.getline(input, sizeof(input));
	vector<string> out = split(input, ' ');
	num = atoi(out[0].c_str());
	den = atoi(out[2].c_str());
	Fraction fraction(num, den);
	cout << fraction.toString() << " is " << fraction.toDouble() << " in decimal" << endl;
}