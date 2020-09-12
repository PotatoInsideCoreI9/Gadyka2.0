#pragma once
#include <ctime>
#include<random>
#include<fstream>
#include<string>
#include<vector>

using namespace std;

void clearAll();

struct Player
{
	int Xor0;
};

class Field
{
protected:
	vector<int> field;

	bool end = false;
	vector <int> Positions3{ 3,6 };
	Player human{ 1 };
	Player machine{ 2 };
	int wins[8][3] = { {0,1,2}, {3,4,5}, {6,7,8}, {0,3,6}, {1,4,7},{2,5,8}, {0,4,8}, {2,4,6} };

public:

	Field(const Field& orig) ;

	Field() ;

	Field(bool IsFirst) ;



	int check() ;

	int operator[](int idx) ;
	void show() ;

	bool Set(int pos) ;

	int SetHuman(int pos) ;
	~Field() ;
};

class Bot : public Field
{
	Player bot{ 2 };

	int Strotegy;
	bool IsEnd = false;

	int FindHuman() ;

public:
	Bot(const Field& f)  ;
	Bot(bool IsFirst, const Field& f, int st) ;
	int AttackTest(Field& ToSave, Field orig) ;
};