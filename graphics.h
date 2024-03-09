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
    ID2D1HwndRenderTarget* target = nullptr;
    ID2D1Factory* factory = nullptr;
    ID2D1Bitmap* bitmap = nullptr;
    D2D1_RECT_U bitmapRect{};
    D2D1_SIZE_U size{};
    HWND handle = nullptr;
    void (*start)() = nullptr;
    void (*update)() = nullptr;
public:
    Color* pixelData;
    explicit Graphics();
    HRESULT Run(HINSTANCE instance, void (*start)(), void (*update)());
    void Draw();
    ~Graphics();
};