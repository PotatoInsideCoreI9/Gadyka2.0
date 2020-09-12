#include <iostream>
#include <ctime>
#include<random>
#include<fstream>
#include<string>
#include"Source.h"

using namespace std;

void main()
{
	srand(time(NULL));
	bool First = true;
	int strotegy = rand() % 9;
	Field a(First);
	Bot b(First, a, strotegy);
	
	First = false;
	int pos;
	cin >> pos;
	a.SetHuman(pos);
	b.AttackTest(a, a);
	a.show();
	while (true)
	{
		Field aa(false);
		Bot bb(false, aa, strotegy);
		int pos;
		cin >> pos;
			aa.SetHuman(pos);
		 bb.AttackTest(aa, aa);
		
		
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
