#pragma once
#include "Geraet.h"
class Waschmaschine :
	public Geraet
{
private:
	int temperatur;
	bool vorwaesche;

public:
//	Waschmaschine();
	~Waschmaschine();
	virtual void notStopp();
};

