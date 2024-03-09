#include "graphics.h"
Graphics graphics;

void Start() {

}

void Update() {

}

int WINAPI WinMain(HINSTANCE instance, HINSTANCE prevInstance, LPSTR cmd, int nCmdShow) {
    return (int) graphics.Run(instance, Start, Update);
}