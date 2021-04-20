#pragma once

#include "tve_window.hpp"
#include "tve_pipeline.hpp"

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
        TvePipeline TvePipeline{"shaders/simple_shader.vert.spv", "shaders/simple_shader.frag.spv"};
    };
} // namespace tve