#pragma once
#include "Item.h"

class Hero
{
public:
	Hero(const char* name);
	const char * get_name() const;

private:
	const char* name_ = nullptr;
	int level_;
	int health_points_;
	int experience_points_;
	int attack_points_;
	int defense_points_;
	item items_[];

};

