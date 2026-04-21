#pragma once
#include "raylib.h"

class FPSCamera {

    public:
        FPSCamera();

        void Update();
        void BeginMode() const;
        void EndMode() const;

        Vector3 GetPosition() const;


    private:
        Camera3D m_camera;
        
        static constexpr float WALK_SPEED = 0.15f;
        static constexpr float RUN_SPEED  = 0.2f;
        static constexpr float MOUSE_SENSITIVITY = 0.08f;
};