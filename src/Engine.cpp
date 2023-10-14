#include "engine.h"
#include <iostream>

Engine::Engine() {}

Engine::~Engine() {}

void Engine::Initialize() {
    if (!glfwInit()) {
        return;
    }

    window = glfwCreateWindow(800, 600, "Triangle Example", NULL, NULL);
    if (!window) {
        glfwTerminate();
        return;
    }

    glfwMakeContextCurrent(window);

    if (!gladLoadGLLoader((GLADloadproc) glfwGetProcAddress)) {
        return;
    }
}


void Engine::DeInitialize() {
    glfwTerminate();
}

void Engine::Run() {

    while (!glfwWindowShouldClose(window)) {
        glfwPollEvents();

        glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);
        glBindVertexArray(0);

        glfwSwapBuffers(window);
    }
}

