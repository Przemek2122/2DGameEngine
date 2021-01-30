// Created by Przemys�aw Wiewi�ra 2020

#pragma once

#include "CoreMinimal.h"

/**
 * A functor (or function object) is a C++ class that acts like a function.
 * Supports:
 * NOTHING! It's abstract class used as base.
 *
 * IsValid() - Use to check if function is bound.
 * operator() - Use to call stored function.
 */
template<typename TReturnType, typename... TInParams>
class FFunctorBase<TReturnType(TInParams ...)>
{
protected:
	FFunctorBase() = default;
	virtual ~FFunctorBase() = default;
	
public:	
	/** This function calls stored function */
	virtual TReturnType operator()(TInParams... Params) = 0; // TInParams InParams = nullptr

	/** True if any function was bound. */                                                                                                                                                
	_NODISCARD virtual bool IsValid() const = 0;
	
};
