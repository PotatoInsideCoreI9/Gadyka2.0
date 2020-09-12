#include "MyForm.h"
#include<Windows.h>
#include"Header.h"
#include <ctime>
#include<fstream>
#include<string>
#include<random>

using namespace TicTacToe;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);
	return 0;
}
