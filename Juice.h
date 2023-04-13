#pragma once
#include <iostream>

class UJuice
{
public:
	UJuice(class FFruit* Resource);
	virtual ~UJuice();
	inline std::string GetName() const { return Name; }

protected:
	std::string Name;
};

