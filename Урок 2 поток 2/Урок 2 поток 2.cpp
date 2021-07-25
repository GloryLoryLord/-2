#include <iostream>

// the task one

short int si = -32768;
int i = 1;
long long ll = -372036854775808;
char cr = -128;
bool bl = true;
float ft = 3.4f;
double db = -3.4566;


// the task five.two
union MyData
{
	int it;
	float ft;
	char cr;

};
struct MyVariant
{
	MyData md;

	char isChar : 1;
	char isInt : 1;
	char isFloat : 1;

};

int main() {
	MyData md;
	md.ft = 1.1f;
	MyVariant lt;
	lt.md = md;
	lt.isChar = 1;
	lt.isInt = 0;
	lt.isFloat = 0;
}



// the tusk two


enum battle { x, o, _ };

// the tusk three


battle field[3][3]{ { _, _, _ },
					{ _, _, _ },
					{ _, _, _ }, };

// the task four

struct BattleField
{
	battle field[3][3];
	battle PlayerOne[1] = { x };
	battle PlayerTwo[1] = { o };

};

// the task five.one









