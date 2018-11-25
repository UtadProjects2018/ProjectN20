//
//  Animal.hpp
//  ProjectN4
//
//  Created by pc-laptop on 10/23/18.
//  Copyright © 2018 Ingrid Guerrero. All rights reserved.
//

#ifndef TEntity_hpp
#define TEntity_hpp
// TODO: Including the path so VS Can find the header file, in Xcode this error doesn't happen. 
#include "../Console/Console.h"
#include <iostream>
#endif

namespace AnimalGame
{
    enum AnimalType
    {
        Horse,
        Elephant,
        Turtle,
    };
    
    struct TEntity
    {
        typedef void (*funcEntity)(TEntity *, void (*console)(int, int, const char*));
        int m_ix;
        int m_iy;
        int m_life;
        funcEntity *m_funcs;
        AnimalType animalType;
        
        
        TEntity(AnimalType animalT, funcEntity *funcs, int x, int y)
        {
            m_ix = x;
            m_iy = y;
            animalType = animalT;
            m_funcs = funcs;
            m_life = rand() % 100 + 1;
        }
    };
    
    void moveAnimal(TEntity *animal, void (*console)(int, int, const char*));
    void drawAnimal(TEntity *animal, void (*console)(int, int, const char*));
}

