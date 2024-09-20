//
// Created by florybal on 19/09/24.
//

#include <genOBJ/genOBJ.h>

int main(int argc, char** argv)
{
    genOBJ obj;
    obj.init("GenOBJS", 480, 320);
    //obj.loadOBJ();
    obj.run();

    return 0;
}