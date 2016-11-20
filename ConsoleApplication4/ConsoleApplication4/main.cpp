#include <iostream>
#include <process.h>
#include "Game.h"
#include "KeyEvent.h"


Game* game = new Game();
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
		if (i != -1) game->setDirectiong(i);
	}

	return 0;
}

int main()
{
	HANDLE game1=0, game2=0;
	game1 = (HANDLE)_beginthreadex(0, 0, &mythread, (void*)0, 0, 0);
	game1 = (HANDLE)_beginthreadex(0, 0, &keyEvent, (void*)0, 0, 0);

	WaitForSingleObject(game1, INFINITE);
	WaitForSingleObject(game2, INFINITE);

	CloseHandle(game1);
	CloseHandle(game2);

	return 0;
}