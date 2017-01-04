#if SDL_VIDEO_DRIVER_DIRECTFB
static int DirectFB_VideoInit(_THIS);
static void DirectFB_VideoQuit(_THIS);
static int DirectFB_Available(void);
static SDL_VideoDevice *DirectFB_CreateDevice(int devindex);
VideoBootStrap DirectFB_bootstrap = ;
static const DirectFBSurfaceDrawingFlagsNames(drawing_flags);
static const DirectFBSurfaceBlittingFlagsNames(blitting_flags);
static const DirectFBAccelerationMaskNames(acceleration_mask);
static int
DirectFB_Available(void)
static void
DirectFB_DeleteDevice(SDL_VideoDevice * device)
static SDL_VideoDevice *
DirectFB_CreateDevice(int devindex)
static void
DirectFB_DeviceInformation(IDirectFB * dfb)
static int readBoolEnv(const char *env_name, int def_val)
static int
DirectFB_VideoInit(_THIS)
static void
DirectFB_VideoQuit(_THIS)
static const struct  pixelformat_tab[] =
;
Uint32
DirectFB_DFBToSDLPixelFormat(DFBSurfacePixelFormat pixelformat)
DFBSurfacePixelFormat
DirectFB_SDLToDFBPixelFormat(Uint32 format)
void DirectFB_SetSupportedPixelFormats(SDL_RendererInfo* ri)
