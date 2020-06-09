#include <iostream>
using namespace std;
class Vector2D
{
private:
	int x;
	int y;
public:
	Vector2D(const int& x_in = 0, const int& y_in = 0)
	{
		x = x_in;
		y = y_in;
	}
	int& getX() { return x; };
	int& getY() { return y; };

	friend int operator * (const Vector2D vector1, const Vector2D vector2)
	{
		return (vector1.getX() * vector2.getX()) + (vector1.getY(), vector2.getY());
	}

};
int main()
{
	Vector2D vector1(5, 5);
	Vector2D vector2(5, 5);
	cout << vector1 * 2;
	return 0;
}