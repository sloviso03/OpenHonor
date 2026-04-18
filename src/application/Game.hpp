#pragma once
#include "core/Window.hpp"
#include "core/FPSCamera.hpp"
#include "domain/World.hpp"

class Game {
public:
    Game();
    void Run();

private:
    void Update();
    void Draw();

    Window    m_window;
    FPSCamera m_camera;
    World     m_world;
};