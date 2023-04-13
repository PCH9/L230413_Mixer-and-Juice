#include "Mixer.h"
#include "Ingredient.h"
#include "Orange.h"
#include "Apple.h"
#include "Pineapple.h"
#include <iostream>
#include "Juice.h"

UMixer::UMixer()
{
}

UMixer::~UMixer()
{
}

UJuice* UMixer::MakeJuice(AIngredient* Resource)
{
	UJuice* NewJuice = new UJuice(Resource);

	delete Resource;

	return NewJuice;
}


