#pragma once
#include "Item.h"

class Hero
{
public:
	Hero(const char* name);
	const char* get_name() const;
	int get_level() const;
	int get_health_points() const;
	int get_experience_points() const;
	int get_attack_points() const;
	int get_defense_points() const;

private:
	const char* name_;
	int level_;
	int health_points_;
	int experience_points_;
	int attack_points_;
	int defense_points_;
	item items_[];

};

