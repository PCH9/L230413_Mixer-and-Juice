#include "Juice.h"
#include "Ingredient.h"
#include<iostream>

using namespace std;

UJuice::UJuice(FFruit* Resource)
{
	Name = Resource->GetName();

	std::cout << Name << " �꽺 �Դϴ�." << std::endl;
}

UJuice::~UJuice()
{
}
