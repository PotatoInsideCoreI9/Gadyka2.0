#pragma once
#include <ctime>
#include<random>
#include<fstream>
#include<string>
#include<iostream>
#include<vector>
#include "Source.h"


using namespace std;

void clearAll()
{
	
	ofstream wrote("CloudServer.txt", ios::trunc);
	wrote << "" << endl;
	wrote.close();
}

Field :: Field(const Field& orig) 
{
	field = orig.field;
	human.Xor0 = orig.human.Xor0;
}

Field :: Field()
{
	for (int i = 0; i < 9; i++)
	{
		field.push_back(0);
	}
}

Field::Field(bool IsFirst)
{
	if (IsFirst)
	{
		for (int i = 0; i < 9; i++)
		{
			field.push_back(0);
		}
	}
	else if (!IsFirst)
	{
		ifstream source("CloudServer.txt", ofstream::app);
		for (int i = 0; i < 9; i++)
		{
			string buff;
			getline(source, buff);
			field.push_back(stoi(buff));
		}
		source.close();
	}
}

int Field::check()
{

	for (int i = 0; i < 8; i++)
	{
		int count = 0, count1 = 0;
		for (int j = 0; j < 3; j++)
		{
			if (field[wins[i][j]] == human.Xor0)
			{
				count++;
				end = true;
				if (count == 3)
					return 2;
			}
			if (field[wins[i][j]] == machine.Xor0)
			{
				count1++;
				end = true;
				if (count1 == 3)
					return 1;
			}
			if (count == 3 || count1 == 3)
				return 1;
		}
	}
	int ifAllFill = 0;
	for (int i = 0; i < field.size(); i++)
	{
		if (field[i] != 0)
		{
			ifAllFill++;
		}
	}
	if (ifAllFill == field.size())
	{
		end = true;
		return -1;
	}

	return 0;
}

int Field::operator[](int idx)
{
	if (!field.empty() && idx < 9)
		return field[idx];
	else
	{
		return 0;
	}
}


void Field::show()
{
	{
		int three = 0;
		for (int i = 0; i < field.size(); i++)
		{
			if (i == Positions3[0] || i == Positions3[1])
				cout << endl;
			cout << field[i];
		}
	}
}

bool Field::Set(int pos)
{

	if (field[pos] == 1)
	{
		return 0;
	}
	field[pos] = machine.Xor0;
	return pos;

}

int Field:: SetHuman(int pos)
{
	if (field[pos] == 2)
	{
		return 0;
	}
	field[pos] = 1;
	return pos;
}

Field::~Field()
{
	ofstream wrote("CloudServer.txt");

	for (int i = 0; i < field.size(); i++)
	{

		wrote << field[i] << endl;
	}

	wrote.close();
}

int Bot:: FindHuman()
{
	int iterator = 0;

	for (int i = 0; i < field.size(); i++)
	{
		if (field[i] == 1)
		{
			iterator = i;
			break;
		}
	}
	return iterator;
}

Bot::Bot(const Field& f) : Field(f) {}

Bot::Bot(bool IsFirst, const Field& f, int st) : Field(f), Strotegy(st) {}

int Bot::AttackTest(Field& ToSave, Field orig)
{


	for (int j = 0; j < 3; j++)
	{
		if (orig[wins[Strotegy][j]] == 0)
		{
			int point = wins[Strotegy][j];

			field[wins[Strotegy][j]] == bot.Xor0;
			ToSave.Set(point);
			return point;

		}
		else
		{
			int point1 = rand() % 9;
			field[point1] == bot.Xor0;
			ToSave.Set(point1);
			return point1;
		}
	}


}