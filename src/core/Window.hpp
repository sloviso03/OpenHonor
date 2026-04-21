#pragma once

class Window {

    public:
        Window(int width, int height, const char* title);
        ~Window();

        bool ShouldClose() const;
};

