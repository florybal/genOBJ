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
private:
    bool init();
    void processEvent();
    void run();

public:
    genOBJ();
    ~genOBJ();
    bool loadOBJ(const char* filename, const char* path);

private:

};



#endif //GENOBJ_H
