//
// Created by florybal on 19/09/24.
//

#include "genOBJ.h"

genOBJ::genOBJ(): width(0), height(0) {
}

genOBJ::~genOBJ() = default;



void genOBJ::run() const{
    while (!glfwWindowShouldClose(window))
    {
        processEvent(window);
        render();
        update();
    }
    clean();
}

void genOBJ::update() const {

    glfwSwapBuffers(window);
    glfwPollEvents();

}

void genOBJ::render() {
    glClearColor(0.2f, 0.3f, 0.3f, 1.0f);

    glClear(GL_COLOR_BUFFER_BIT);
}

bool genOBJ::init(const char *title, const int width, const int height) {

    glewExperimental = true;
    if(!glfwInit()) {
        fprintf(stderr, "Failed to initialize GLFW3\n");
        return false;
    }
    glfwWindowHint(GLFW_SAMPLES, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    window = glfwCreateWindow(width, height, title, nullptr, nullptr);

    if (window == nullptr)
    {
        std::cout << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        return false;
    }
    glfwMakeContextCurrent(window);

    if(glewInit() != GLEW_OK) {
        fprintf(stderr, "Failed to initialize GLEW\n");
        return false;
    }
    glewExperimental = true; //precisa para o core profile

    return true;
}

void genOBJ::processEvent(GLFWwindow *window)
{
    if(glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
        glfwSetWindowShouldClose(window, true);
}

void genOBJ::clean() const {

    glfwTerminate();
    glfwDestroyWindow(window);
}
