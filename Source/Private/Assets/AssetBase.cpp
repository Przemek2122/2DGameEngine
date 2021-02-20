// Created by Przemys�aw Wiewi�ra 2020

#include "CoreEngine.h"
#include "Assets/AssetBase.h"

FAssetBase::FAssetBase(const std::string& InAssetName, const std::string& InAssetPath)
	: AssetName(InAssetName)
	, AssetPath(InAssetPath)
{
}

FAssetBase::~FAssetBase()
{
}

std::string FAssetBase::GetAssetName() const
{
	return AssetName;
}

std::string FAssetBase::GetAssetPath() const
{
	return AssetPath;
}
