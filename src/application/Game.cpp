#include "application/Game.hpp"
#include "raylib.h"

Game::Game()
    : m_window(800, 450, "OpenHonor - Shooter Game")
    , m_camera()
    , m_world()
{
}

void Game::Run() {
    while (!m_window.ShouldClose()) {
        Update();
        Draw();
    }
}

void Game::Update() {
    m_camera.Update();
}

void Game::Draw() {
    BeginDrawing();
    ClearBackground({ 20, 20, 20, 255 });

    m_camera.BeginMode();
    m_world.Draw();
    m_camera.EndMode();

    DrawText(".", GetScreenWidth() / 2 - 5, GetScreenHeight() / 2 - 8, 20, WHITE);

    EndDrawing();
}