#include <Forge-Core/Application.h>

#include <raylib.h>
#include <entt/entt.hpp>

namespace Forge
{
    Application::Application()
    {
        InitWindow(1280, 720, "Hello!");
    }

    Application::~Application()
    {
        CloseWindow();
    }

    void Application::Run()
    {
        while (!WindowShouldClose())
        {
            BeginDrawing();
            ClearBackground(BLACK);
            int half_width = 1280 / 2;
            int half_height = 720 / 2;
            DrawCircle(half_width, half_height, 10, BLUE);
            DrawRectangle(half_width, half_height, 40, 40, RED);
            EndDrawing();
        }
    }
}
