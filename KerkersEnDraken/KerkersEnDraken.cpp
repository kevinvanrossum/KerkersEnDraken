// KerkersEnDraken.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#define _CRTDBG_MAP_ALLOC  
#include <stdlib.h>  
#include <crtdbg.h> 
#include <iostream>
#include "Hero.h"

int main()
{
	const auto hero = new Hero("Harry");
	const auto name = hero->get_name();
	std::cout << name;
	delete hero;

	_CrtDumpMemoryLeaks();
}
