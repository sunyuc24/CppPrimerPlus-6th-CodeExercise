#pragma once
#ifndef _CH10_6_H
#define _CH10_6_H

#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>

class Move
{
private:
	double x;
	double y;

public:
	Move(double a = 0, double b = 0);
	void showmove() const;
	Move add(const Move& m) const;
	void reset(double a = 0, double b = 0);

};

#endif
