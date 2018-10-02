#include "stdafx.h"
#include "MontyHallParadox.h"
#include <stdlib.h>
#include <time.h>

int PickDoor() {
	return rand() % 3;
}

int PickOtherDoor(int PickedDoor, int OtherDoor) {
	if (PickedDoor != 0 && OtherDoor != 0) {
		return 0;
	}
	else if (PickedDoor != 1 && OtherDoor != 1) {
		return 1;
	}
	else {
		return 2;
	}
}

double WinPercentage(bool Swap, double Attempts) {
	srand(time(NULL));
	double attemptsWon = 0;
	for (int i = 0; i < Attempts; i++) {
		int prizeDoor = PickDoor();
		int pickedDoor = PickDoor();
		int shownDoor = PickOtherDoor(prizeDoor, pickedDoor);
		if (Swap) {
			pickedDoor = PickOtherDoor(pickedDoor, shownDoor);
		}
		if (pickedDoor == prizeDoor) {
			attemptsWon++;
		}
	}
	return attemptsWon / Attempts;
}