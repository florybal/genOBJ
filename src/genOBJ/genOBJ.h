//
// Created by florybal on 19/09/24.
//

#ifndef GENOBJ_H
#define GENOBJ_H

#include <GL/glew.h>
#include <GL/gl.h>
#include <glm/glm.hpp>
#include <GLFW/glfw3.h>

#include <genOBJ/math.h>
#include <iostream>

class genOBJ {
public:
    genOBJ();
    ~genOBJ();
    bool loadOBJ(const char* filename, const char* path);
    bool init(const char* title, int width, int height);
    void run() const;


private:
    static void processEvent(GLFWwindow *window);
    static void render();
    void clean() const;
    void update() const;

private:
    const unsigned int width ;
    const unsigned int height;
    const char         *title{};

    GLFWwindow* window = nullptr;

};

#endif //GENOBJ_H
