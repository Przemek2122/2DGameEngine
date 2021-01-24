// Created by Przemys�aw Wiewi�ra 2020

#pragma once

#include "CoreMinimal.h"

inline FEngine* Engine;

/**
 * Singleton manager for engine class.
 */
class FEngineManager
{
public:
	FEngineManager();
	~FEngineManager();

public:

	/** Call once before doing anything with engine. */
	template<class TEngineClass = FEngine>
	void Start(const int InArgc, char* InArgv[])
	{
		std::cout << "Game engine initializing ..." << std::endl;

		Engine = new TEngineClass();
		
		Init(InArgc, InArgv);

		MainLoop();

		Exit();
	}

	static FEngine* Get();
	
	template<typename TEngineClass>
	static TEngineClass* Get()
	{
		return static_cast<TEngineClass>(Engine);
	}
	
protected:
	void Init(const int Argc, char* Argv[]); 
	
	void MainLoop();
	
	void Exit();
	
};
