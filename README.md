# OpenHonor
C++ and 3D graphics learning project focused on clean code and manual memory management.
## System Requirements
- Debian (Kernel 6.x+)
- G++ with C++17 support
- CMake 3.10 or higher
- Raylib 5.0+ (built from source)
## Installation and Setup
1. Install development dependencies:
   sudo apt update
   sudo apt install build-essential git cmake
   sudo apt install libasound2-dev libx11-dev libxrandr-dev libxi-dev libgl1-mesa-dev libglu1-mesa-dev libxcursor-dev libxinerama-dev libwayland-dev libxkbcommon-dev
2. Clone and build Raylib:
   git clone https://github.com/raysan5/raylib.git raylib
   cd raylib
   mkdir build && cd build
   cmake .. -DBUILD_EXAMPLES=OFF
   make
   sudo make install
3. Build OpenHonor:
   mkdir build && cd build
   cmake ..
   make
   ./OpenHonor
   or
   cmake --build build && ./build/OpenHonor   
## Project Structure
- `src/`: Core source code
  - `application/`: Application layer (entry orchestration, Game class)
  - `core/`: Engine core systems and low-level abstractions
  - `domain/`: Domain logic and business rules
- `assets/`: 3D models, textures, and shaders
- `build/`: CMake build output
- `CMakeLists.txt`: Build configuration
- `main.cpp`: Program entry point
- `README.md`: Project documentation
- `docs/`: Technical learning notes
## Progress Log
- [x] Initial environment setup on Debian
- [x] Successful Raylib compilation and linking
- [x] Scalable directory structure defined
- [x] Application wrapper implementation (Game class)
- [x] First-person camera implementation (FPSCamera)
- [x] Window lifecycle management (Window)
- [x] Basic 3D world with floor, walls and columns (World)
- [ ] Player shooting mechanic (raycast)
- [ ] Enemy entity with health and position
- [ ] Collision detection