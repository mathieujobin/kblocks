/***************************************************************************
*   KBlocks, a falling blocks game for KDE                                *
*   Copyright (C) 2009 Zhongjie Cai <squall.leonhart.cai@gmail.com>       *
*                                                                         *
*   This program is free software; you can redistribute it and/or modify  *
*   it under the terms of the GNU General Public License as published by  *
*   the Free Software Foundation; either version 2 of the License, or     *
*   (at your option) any later version.                                   *
***************************************************************************/

#ifndef KBLOCKSFIELD_H
#define KBLOCKSFIELD_H

#include "FieldInterface.h"

class KBlocksField : public FieldInterface {
    protected:
        bool** board;
        int height;
        int width;
    
    public:
        KBlocksField(int w = 10, int h = 20);
        ~KBlocksField();
    
    public:
        bool getCell(int xPos, int yPos);
        void setCell(int xPos, int yPos, bool value);
        
        void clearAll();
        
        bool checkFilledLine(int lineID);
        void removeFilledLine(int lineID);
        
        bool addPunishLine(int emptyID = -1);
        
        int  getWidth();
        int  getHeight();
};

#endif
