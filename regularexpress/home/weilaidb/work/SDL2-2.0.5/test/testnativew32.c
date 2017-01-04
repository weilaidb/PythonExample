static void *CreateWindowNative(int w, int h);
static void DestroyWindowNative(void *window);
NativeWindowFactory WindowsWindowFactory = ;
LRESULT CALLBACK
WndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
static void *
CreateWindowNative(int w, int h)
static void
DestroyWindowNative(void *window)
