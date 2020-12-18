// Created by Przemys�aw Wiewi�ra 2020

#pragma once

#include "CoreMinimal.h"

/**
 * Window class. Has SDL_Window and FRender.
 */
class FWindow
{
public:
	/**
	 * Creates SDL Window.
	 * Take a look here for available flags (or at SDL_vide.h):
	 * https://wiki.libsdl.org/SDL_WindowFlags
	 */
	FWindow(char* InTitle, int InPositionX, int InPositionY, int InWidth, int InHeight, Uint32 InFlags = 0);
	virtual ~FWindow();

protected:
	SDL_Window* Window;
	FRenderer* Renderer;
	char* WindowTitle;
	int WindowPositionX;
	int WindowPositionY;
	int WindowWidth;
	int WindowHeight;
	Uint32 WindowFlags;
public:
	/**
	 * Render this window using renderer.
	 */
	virtual void Render();

public:
	/** Call to change window size. */
	void Resize(const int NewWidth, const int NewHeight);

	/** @returns Window size in px. */
	_NODISCARD FVector2D<int> GetWindowSize() const;
	/** @returns Window percent at given location. Window 100 with position 50 will be 0.5. */
	_NODISCARD FVector2D<float> GetWindowSizePercent(const FVector2D<int> Position) const;

};