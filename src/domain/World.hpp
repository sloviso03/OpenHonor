#pragma once
#include "raylib.h"
#include <array>


struct Column {
    Vector3 position;
    float height;
    Color color;
};


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
 