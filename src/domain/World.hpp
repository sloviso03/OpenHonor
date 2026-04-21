#pragma once
#include "raylib.h"
#include "Column.hpp"
#include <array>

class World {
    public:
        static constexpr int COLUMN_COUNT = 20;
    
        World();
        void Draw() const;
    
    private:
        std::array<Column, COLUMN_COUNT> m_columns;
    
        void GenerateColumns();
        void DrawFloor()   const;
        void DrawWalls()   const;
        void DrawColumns() const;
};
 