#pragma once

#define GFLW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <string>

namespace tve
{
    class TveWindow
    {
    public:
        TveWindow(int width, int height, std::string window_name);
        ~TveWindow();
        // Remove the copy constructor and copy operator from the window class to avoid big problems
        TveWindow(const TveWindow &) = delete;
        TveWindow &operator=(const TveWindow &) = delete;

        bool shouldClose() { return glfwWindowShouldClose(window); }

    private:
        void initWindow();
        const int width;
        const int height;

        std::string windowName;
        GLFWwindow *window;
    };
} // namespace tve
