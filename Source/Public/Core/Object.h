// Created by Przemys�aw Wiewi�ra 2020

#pragma once
#include <string>

class UObject
{
public:
	UObject();
	virtual ~UObject();
	
	std::string GetObjectName() const;
	
};

