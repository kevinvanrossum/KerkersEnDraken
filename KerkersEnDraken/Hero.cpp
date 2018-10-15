#include "pch.h"
#include "Hero.h"


Hero::Hero(const char* name)
{
	name_ = name;
	level_ = 1;
	health_points_ = 10;
	experience_points_= 0;
	attack_points_ = 5;
	defense_points_ = 0;
}

const char* Hero::get_name() const
{
	return name_;
}

int Hero::get_level() const
{
	return level_;
}

int Hero::get_health_points() const
{
	return health_points_;
}

int Hero::get_experience_points() const
{
	return experience_points_;
}

int Hero::get_attack_points() const
{
	return attack_points_;
}

int Hero::get_defense_points() const
{
	return defense_points_;
}
