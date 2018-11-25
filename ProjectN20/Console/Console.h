//
//  Console.hpp
//  ProjectN4
//
//  Created by pc-laptop on 10/23/18.
//  Copyright © 2018 Ingrid Guerrero. All rights reserved.
//
#ifndef Console_hpp
#define Console_hpp
namespace ConsoleManager
{
    const int sleepTime = 3000;
    class Console
    {
    public:
        Console() {};
        virtual ~Console() {};
        virtual void gotoxy (int x, int y) = 0;
        virtual void draw (const char *emoji) = 0;
        virtual void hidecursor (void) = 0;
        virtual void clear () = 0;
        virtual void sleep () = 0;
    };
}

#endif /* MacConsole_hpp */



