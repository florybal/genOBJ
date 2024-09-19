//
// Created by florybal on 19/09/24.
//

#ifndef GENOBJ_H
#define GENOBJ_H

#include <GLFW/glfw3.h>
#include <GL/gl.h>
#include <GL/freeglut.h>
#include <genOBJ/math.h>

class genOBJ {
public:
    genOBJ();
    ~genOBJ();

    bool loadOBJ(const char* filename, const char* path);
    bool init(const char* name, int width, int height);
    void run();


private:
    void processEvent();
    void render();
    void clean();
    void update();

private:
    int width, height;
    GLFWwindow* window = nullptr;


};



#endif //GENOBJ_H
