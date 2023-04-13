#include<iostream>
#include"MIxer.h"
#include"Juice.h"
#include"Ingredient.h"
#include"Orange.h"
#include"Pineapple.h"
#include"Apple.h"

using namespace std;

int main()
{
	UMixer* Mixer = new UMixer();

	AApple* Apple = new AApple();
	AOrange* Orange = new AOrange();
	APineapple* Pineapple = new APineapple();

	UJuice* PineAppleJuice = Mixer->MakeJuice(Pineapple);
	UJuice* AppleAppleJuice = Mixer->MakeJuice(Apple);
	UJuice* OrangeAppleJuice = Mixer->MakeJuice(Orange);
	
	delete Mixer;
	delete PineAppleJuice;
	delete AppleAppleJuice;
	delete OrangeAppleJuice;

	return 0;
}