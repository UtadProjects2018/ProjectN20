//
//  WindowsConsole.hpp
//  ProjectN4
//
//  Created by pc-laptop on 10/31/18.
//  Copyright © 2018 Ingrid Guerrero. All rights reserved.
//

#ifndef WindowsConsole_hpp
#define WindowsConsole_hpp
// TODO: Including the path so VS Can find the header file, in Xcode this error doesn't happen. 
#include "../Console.h"
#endif

namespace ConsoleManager {
    class WindowsConsole : public ConsoleManager::Console
    {
    public:
        WindowsConsole() {};
        ~WindowsConsole() {};
        void gotoxy (int x, int y);
        void hidecursor (void);
        void clear ();
        void sleep ();
		void draw(const char *emoji);
    };
}
