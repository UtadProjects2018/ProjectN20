//
//  WindowsConsole.cpp
//  ProjectN4
//
//  Created by pc-laptop on 10/31/18.
//  Copyright © 2018 Ingrid Guerrero. All rights reserved.
//

#include "WindowsConsole.hpp"

#ifdef _WIN64
#include <conio.h>
#include <windows.h>
#include <iostream>

void ConsoleManager::WindowsConsole::gotoxy(int x, int y)
{
    COORD pos = {static_cast<short>(x), static_cast<short>(y)};
    HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(output, pos);
}

void ConsoleManager::WindowsConsole::draw(const char *emoji)
{
	printf(emoji);
}

void ConsoleManager::WindowsConsole::hidecursor (void)
{
    HANDLE hdl;
    hdl = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO t;
    t.bVisible = false;
    SetConsoleCursorInfo(hdl, &t);
}

void ConsoleManager::WindowsConsole::clear ()
{
    system("cls");
}

void ConsoleManager::WindowsConsole::sleep ()
{
    Sleep(ConsoleManager::sleepTime);
}

#endif

