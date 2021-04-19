#include "first_app.hpp"

namespace tve
{
    void FirstApp::run()
    {
        while (!TveWindow.shouldClose())
        {
            glfwPollEvents();
        }
    }
}