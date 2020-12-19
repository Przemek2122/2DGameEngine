// Created by Przemys�aw Wiewi�ra 2020

#include "CoreEngine.h"
#include "Renderer\WindowAdvanced.h"

FWindowAdvanced::FWindowAdvanced(char* InTitle, int InPositionX, int InPositionY, int InWidth, int InHeight, Uint32 InFlags)
	: FWindow(InTitle, InPositionX, InPositionY, InWidth, InHeight, InFlags)
{
}

FWindowAdvanced::~FWindowAdvanced()
{
}
