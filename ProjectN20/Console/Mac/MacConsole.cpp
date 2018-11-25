//
//  MacConsole.cpp
//  ProjectN4
//
//  Created by pc-laptop on 11/1/18.
//  Copyright © 2018 Ingrid Guerrero. All rights reserved.
//

#include "MacConsole.hpp"

#ifdef __APPLE__
#include <ncurses.h>
#include <unistd.h>
#include <cstdlib>

static const char *horseEmoji = "\xF0\x9F\x90\xB4";
static const char *horseID = "CCC";

static const char *turtleEmoji = "\xF0\x9F\x90\xA2";
static const char *turtleID = "TTT";

static const char *elephantEmoji = "\xF0\x9F\x90\x98";
static const char *elephantID = "EEE";

ConsoleManager::MacConsole::MacConsole()
{
    hidecursor();
    printf("\033[%dA", 10);
}

void ConsoleManager::MacConsole::gotoxy(int x, int y) 
{
    printf("\033[%d;%dH", y, x);
}

void ConsoleManager::MacConsole::hidecursor (void)
{
     printf("\e[?25l");
}

void ConsoleManager::MacConsole::clear ()
{
    printf("\033[2J");
}

void ConsoleManager::MacConsole::sleep ()
{
    usleep(ConsoleManager::sleepTime);
}

void ConsoleManager::MacConsole::draw(const char *emoji)
{
    //TODO: Refactor!
    if (emoji == horseID)
    {
        printf("%s", horseEmoji);
    }
    else if (emoji == turtleID)
    {
        printf("%s", turtleEmoji);
    }
    else if (emoji == elephantID)
    {
        printf("%s", elephantEmoji);
    }
    else
    {
        printf("%s", emoji);
    }
}

#endif
