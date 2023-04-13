#pragma once
#include <string>

class AIngredient
{
public:
	AIngredient();
	virtual ~AIngredient();

	//accessor
	inline std::string GetName() const { return Name; }

protected:
	std::string Name;
};

