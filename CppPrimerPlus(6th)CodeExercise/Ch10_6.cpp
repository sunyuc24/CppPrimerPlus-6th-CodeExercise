#include "Ch10_6.h"


Move::Move(double a, double b){
	x = a;
	y = b;
}

void Move::showmove() const{
	std::cout << "x = " << x << std::endl
			  << "y = " << y << std::endl;
}

Move Move::add(const Move& m) const{
	Move New = Move(this->x + m.x, this->y + m.y);
	return New;
}

void Move::reset(double a, double b){
	x = a;
	y = b;
}
