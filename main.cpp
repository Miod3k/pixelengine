#include "graphics.h"

Graphics* graphics;

void Start() {

}

void MainLoop() {

}

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE _, LPSTR cmd, int nCmdShow) {
    graphics = new Graphics(hInstance, Start, MainLoop);
    int result = graphics->Show();
    delete graphics;
    return result;
}