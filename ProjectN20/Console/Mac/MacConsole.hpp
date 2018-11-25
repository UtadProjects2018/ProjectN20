//
//  MacConsole.hpp
//  ProjectN4
//
//  Created by pc-laptop on 11/1/18.
//  Copyright © 2018 Ingrid Guerrero. All rights reserved.
//

#ifndef MacConsole_hpp
#define MacConsole_hpp
// TODO: Including the path so VS Can find the header file, in Xcode this error doesn't happen. 
#include "../Console.h"
#endif /* MacConsole_hpp */


namespace ConsoleManager {
    class MacConsole : public ConsoleManager::Console
    {
    public:
        MacConsole();
        ~MacConsole() {};
        void gotoxy (int x, int y);
        void hidecursor (void);
        void clear ();
        void sleep ();
        void draw (const char *emoji);
    };
}
