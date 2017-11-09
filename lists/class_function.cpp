#include <iostream>
using namespace std;

class Square;

class Rectancle {
private:
	int width, height;
public:
	int area() { return width*height;}
	void convert(Square a);
};

class Square {
	friend class Rectancle;
private:
	int side;
public:
	Square(int a) : side(a) {}
};

void Rectancle::convert(Square a){
	width = a.side;
	height = a.side;
}

int main(){
	Rectancle rect;
	Square sqr(4);
	rect.convert(sqr);
	cout << rect.area() << endl;
	return 0;
}
