#pragma once


class UMixer
{
public:
	UMixer();
	virtual ~UMixer();

	class UJuice* MakeJuice(class AIngredient* Resource);

	int Number = 0;

};

