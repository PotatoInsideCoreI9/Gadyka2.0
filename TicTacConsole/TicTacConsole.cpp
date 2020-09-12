#include <iostream>
#include <ctime>
#include<random>
#include<fstream>
#include<string>
#include"Clases.h"

void main()
{
	srand(time(NULL));
	bool First = true;
	int strotegy = rand() % 9;
	Field a(First);
	bot b(First, a, strotegy);
	Present showing;
	First = false;
	int pos;
	cin >> pos;
	a.SetHuman(pos);
	b.AttackTest(a, a);
	a.show();
	while (true)
	{
		Field aa(false);
		bot bb(false, aa, strotegy);
		int pos;
		cin >> pos;
		int posToSet=aa.SetHuman(pos);
		int BotPrev = bb.AttackTest(aa, aa);
		int posToSetbot = aa.Set(BotPrev);
		if (posToSet != 0)
			showing(posToSet,false);
		if(posToSetbot!=0)
			showing(posToSet, false);
		
		int ex = aa.check();
		aa.show();
		if (ex != 0)
		{
			clearAll();
			switch (ex)
			{
			case -1:
			{
				cout << "DRAW" << endl;
				break;
			}
			case 1:
			{
				cout << "WIN COMPUTER" << endl;
				break;
			}
			case 2:
			{
				cout << "WIN HUMAN" << endl;
				break;
			}
			}
			break;
		}
		
	}
}
