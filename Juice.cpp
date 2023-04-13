#include "Juice.h"
#include "Ingredient.h"
#include<iostream>

using namespace std;

UJuice::UJuice(FFruit* Resource)
{
	Name = Resource->GetName();

	std::cout << Name << " Áê½º ÀÔ´Ï´Ù." << std::endl;
}

UJuice::~UJuice()
{
}
