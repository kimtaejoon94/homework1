#pragma once
#include <process.h>
#include <iostream>
#include "KeyEvent.h"
#include "Game.h"

using namespace std;
unsigned int __stdcall mythread(void*)
{
	int i = 0;
	while (1) {
		game->move();
		Sleep(500);
	}
	return 0;
}
unsigned int __stdcall keyEvent(void*) {
	KeyEvent k;
	int i;
	while (1) {
		i = k.getkey();
		if (i != -1) game->setDirection(i);
	}

		
	return 0;
}