#pragma once

#include "tve_window.hpp"

namespace tve
{
    class FirstApp
    {
    public:
        static constexpr int WIDTH = 800;
        static constexpr int HEIGHT = 600;

        void run();

    private:
        TveWindow TveWindow{WIDTH, HEIGHT, "Hello Vulkan!"};
    };
} // namespace tve