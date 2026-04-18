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

};