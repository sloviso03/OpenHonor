#include "core/Window.hpp"
#include "raylib.h"

Window::Window(int width, int height, const char* title) {
    InitWindow(width, height, title);
    DisableCursor();
    SetTargetFPS(60);
}

Window::~Window() {
    CloseWindow();
}

bool Window::ShouldClose() const {
    return WindowShouldClose();
}