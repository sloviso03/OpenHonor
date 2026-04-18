#include "domain/World.hpp"

World::World() {
    GenerateColumns();
}


void World::GenerateColumns() {
    
    for (auto& column : m_columns) {
        column.height = static_cast<float>(GetRandomValue(1, 12));

        column.position = {
            static_cast<float>(GetRandomValue(-15, 15)),
            column.height / 2.0f,
            static_cast<float>(GetRandomValue(-15, 15))
        };

        column.color = {
            static_cast<unsigned char>(GetRandomValue(20, 255)),
            static_cast<unsigned char>(GetRandomValue(10, 55)),
            30,
            255
        };
    }
}


void World::Draw() const {
    DrawFloor();
    DrawWalls();
    DrawColumns();
}

 
void World::DrawFloor() const {
    DrawPlane({ 0.0f, 0.0f, 0.0f }, { 32.0f, 32.0f }, DARKGRAY);
}

 
void World::DrawWalls() const {
    DrawCube({ -16.0f, 2.5f,  0.0f }, 1.0f,  5.0f, 32.0f, BLUE);
    DrawCube({  16.0f, 2.5f,  0.0f }, 1.0f,  5.0f, 32.0f, LIME);
    DrawCube({   0.0f, 2.5f, 16.0f }, 32.0f, 5.0f,  1.0f, GOLD);
}

 
void World::DrawColumns() const {
    for (const auto& col : m_columns) {
        DrawCube(col.position, 2.0f, col.height, 2.0f, col.color);
        DrawCubeWires(col.position, 2.0f, col.height, 2.0f, MAROON);
    }
}