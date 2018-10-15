#include "pch.h"
#include "Hero.h"


Hero::Hero(const char* name)
{
	name_ = name;
}

const char* Hero::get_name() const
{
	return name_;
}
