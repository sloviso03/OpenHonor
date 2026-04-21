#include "core/FPSCamera.hpp"

FPSCamera::FPSCamera() {
    m_camera.position = { 0.0f, 2.0f, 4.0f };
    m_camera.target = { 0.0f, 2.0f, 0.0f };
    m_camera.up = { 0.0f, 1.0f, 0.0f };
    m_camera.fovy = 60.0f;
    m_camera.projection = CAMERA_PERSPECTIVE;
}

void FPSCamera::Update() {
    float speed = IsKeyDown(KEY_LEFT_SHIFT) ? RUN_SPEED : WALK_SPEED;

    UpdateCameraPro(
        &m_camera,
        {
            (IsKeyDown(KEY_W) ? speed : 0.0f) - (IsKeyDown(KEY_S) ? speed : 0.0f),
            (IsKeyDown(KEY_D) ? speed : 0.0f) - (IsKeyDown(KEY_A) ? speed : 0.0f),
            0.0f
        },
        {
            GetMouseDelta().x * MOUSE_SENSITIVITY,
            GetMouseDelta().y * MOUSE_SENSITIVITY,
            0.0f
        },
        0.0f
    );
}
 
void FPSCamera::BeginMode() const {
    BeginMode3D(m_camera);
}
 
void FPSCamera::EndMode() const {
    EndMode3D();
}
 
Vector3 FPSCamera::GetPosition() const {
    return m_camera.position;
}
 