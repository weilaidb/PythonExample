static void *CreateWindowX11(int w, int h);
static void DestroyWindowX11(void *window);
NativeWindowFactory X11WindowFactory = ;
static Display *dpy;
static void *
CreateWindowX11(int w, int h)
static void
DestroyWindowX11(void *window)
