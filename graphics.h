#pragma once
#include <windows.h>
#include <d2d1_1.h>

struct Color {
    BYTE red = 0;
    BYTE green = 0;
    BYTE blue = 0;
    BYTE alpha = 255;
};

class Graphics {
private:
    ID2D1Factory* factory = nullptr;
    ID2D1HwndRenderTarget* target = nullptr;
    ID2D1Bitmap* bitmap = nullptr;
    HWND handle = nullptr;
    D2D1_RECT_U bitmapRect{};
    D2D1_SIZE_U size{};
    void (*start)() = nullptr;
    void (*mainloop)() = nullptr;
public:
    Color* pixelData;
    explicit Graphics(HINSTANCE hInstance, void (*start)(), void (*mainloop)());
    int Show() const;
    void Draw();
    ~Graphics();
};