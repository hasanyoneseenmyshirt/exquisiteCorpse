#include<iostream>
#include<ctime>
#include "Monster.h"

using namespace std;

void MonsterHead() {
	cout << "     _____" << endl;
	cout << " .-,;='';_),-." << endl;
	cout << "  \\_\\(),()/_/" << endl;
	cout << "　  (, ___, )" << endl;

}

void MonsterBody() {
	cout << "   ,-/`~`\\-,___" << endl;
	cout << "  / /).:.('--._)" << endl;
	cout << " {_[ (_,_)" << endl;

}

void MonsterFeet() {

	cout << "    |  Y  |" << endl;
	cout << "   /   |   \\" << endl;
	cout << "   \"\"\"\" \"\"\"\"" << endl;

}

void GhostHead() {
	cout << "     ..-.." << endl;
	cout << "    ( o o )" << endl;
	cout << "    |  O  |" << endl;
}

void GhostBody() {
	cout << "    |     |" << endl;
	cout << "    |     |" << endl;
	cout << "    |     |" << endl;
}

void GhostFeet() {

	cout << "    |     |"  << endl;
	cout << "    |     |" << endl;
	cout << "    '~~~~~'" << endl;

}

void BugHead() {
	cout << "     /   \\" << endl;
	cout << "     \\. ./" << endl;
	cout << "    (o + o)" << endl;
}

void BugBody() {
	cout << "  --|  |  |--" << endl;
	cout << "  --|  |  |--" << endl;
	cout << "  --|  |  |--" << endl;
}

void BugFeet() {
	cout << "     v   v" << endl;
	cout << "     *****" << endl;

}


void CreateACreature() {

	int intHead;
	int intBody;
	int intFeet;

	srand(time(0));


	intHead = rand() % 4;
	intBody= rand() % 4;
	intFeet = rand() % 4;

	switch(intHead){
	case 0:
		MonsterHead();
		break;
	case 2:
		BugHead();
		break;
	case 1:
		GhostHead();
		break;
	}

	switch (intBody) {
	case 0:
		MonsterBody();
		break;
	case 2:
		BugBody();
		break;
	case 1:
		GhostBody();
		break;
	}

	switch (intFeet) {
	case 0:
		MonsterFeet();
		break;
	case 2:
		BugFeet();
		break;
	case 1:
		GhostFeet();
		break;
	}
}
