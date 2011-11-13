#include <stdio.h>
#include <stdlib.h>
#include <GL/glut.h>

void init(void);

int main(int argc, char **argv){

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB|GLUT_DOUBLE);
    glutInitWindowSize(640, 480);
    glutInitWindowPosition(0, 0);
    glutCreateWindow(argv[0]);
   
    init();

    glutMainLoop();
    return EXIT_SUCCESS;
}

void init(void){

}
