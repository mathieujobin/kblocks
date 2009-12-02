/***************************************************************************
*   KBlocks, a falling blocks game for KDE                                *
*   Copyright (C) 2009 Zhongjie Cai <squall.leonhart.cai@gmail.com>       *
*                                                                         *
*   This program is free software; you can redistribute it and/or modify  *
*   it under the terms of the GNU General Public License as published by  *
*   the Free Software Foundation; either version 2 of the License, or     *
*   (at your option) any later version.                                   *
***************************************************************************/

#ifndef KBLOCKSPIECEGENERATOR_H
#define KBLOCKSPIECEGENERATOR_H

class KBlocksPieceGenerator {
    public:
        KBlocksPieceGenerator(int size = 2048);
        ~KBlocksPieceGenerator();
        
        void genList(int seed);
        
        int getPiece();
        
    private:
        int  maxCapacity;
        int  pieceIndex;
        int* maPieceList;
};

#endif
