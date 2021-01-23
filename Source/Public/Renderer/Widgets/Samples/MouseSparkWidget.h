// Created by Przemys�aw Wiewi�ra 2020

#pragma once

#include "CoreMinimal.h"

struct FSpark
{
	FSpark();
	FSpark(const FVector2D<int>& InLocation, const float InSpeed, const int InRotationDegree);
	
	FVector2D<float> Location;
	float Speed;
	int Angle;
};

class FMouseSparkWidget : public FWidget
{
public:
	FMouseSparkWidget(FWidgetManager* InWidgetManager, const std::string& InWidgetName);
	virtual ~FMouseSparkWidget() override;

	/** Begin FWidget interface */
	virtual void Tick() override;
	virtual void Render() override;
	/** End FWidget interface */

protected:
	CDeque<FSpark> Sparks;
	CArray<SDL_Point> Points;
	int MaxNumOfPoints;
	int PointPerTick;
	
};
