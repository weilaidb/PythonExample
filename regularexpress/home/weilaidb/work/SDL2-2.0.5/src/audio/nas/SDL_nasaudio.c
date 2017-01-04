#if SDL_AUDIO_DRIVER_NAS
static void (*NAS_AuCloseServer) (AuServer *);
static void (*NAS_AuNextEvent) (AuServer *, AuBool, AuEvent *);
static AuBool(*NAS_AuDispatchEvent) (AuServer *, AuEvent *);
static void (*NAS_AuHandleEvents) (AuServer *);
static AuFlowID(*NAS_AuCreateFlow) (AuServer *, AuStatus *);
static void (*NAS_AuStartFlow) (AuServer *, AuFlowID, AuStatus *);
static void (*NAS_AuSetElements)
(AuServer *, AuFlowID, AuBool, int, AuElement *, AuStatus *);
static void (*NAS_AuWriteElement)
(AuServer *, AuFlowID, int, AuUint32, AuPointer, AuBool, AuStatus *);
static AuUint32 (*NAS_AuReadElement)
(AuServer *, AuFlowID, int, AuUint32, AuPointer, AuStatus *);
static AuServer *(*NAS_AuOpenServer)
(_AuConst char *, int, _AuConst char *, int, _AuConst char *, char **);
static AuEventHandlerRec *(*NAS_AuRegisterEventHandler)
(AuServer *, AuMask, int, AuID, AuEventHandlerCallback, AuPointer);
static const char *nas_library = SDL_AUDIO_DRIVER_NAS_DYNAMIC;
static void *nas_handle = NULL;
static int
load_nas_sym(const char *fn, void **addr)
#define SDL_NAS_SYM(x) \
if (!load_nas_sym(#x, (void **) (char *) &NAS_##x)) return -1
#define SDL_NAS_SYM(x) NAS_##x = x
static int
load_nas_syms(void)
#undef SDL_NAS_SYM
static void
UnloadNASLibrary(void)
static int
LoadNASLibrary(void)
static void
UnloadNASLibrary(void)
static int
LoadNASLibrary(void)
static void
NAS_WaitDevice(_THIS)
static void
NAS_PlayDevice(_THIS)
static Uint8 *
NAS_GetDeviceBuf(_THIS)
static int
NAS_CaptureFromDevice(_THIS, void *buffer, int buflen)
static void
NAS_FlushCapture(_THIS)
static void
NAS_CloseDevice(_THIS)
static unsigned char
sdlformat_to_auformat(unsigned int fmt)
static AuBool
event_handler(AuServer * aud, AuEvent * ev, AuEventHandlerRec * hnd)
static AuDeviceID
find_device(_THIS)
static int
NAS_OpenDevice(_THIS, void *handle, const char *devname, int iscapture)
static void
NAS_Deinitialize(void)
static int
NAS_Init(SDL_AudioDriverImpl * impl)
AudioBootStrap NAS_bootstrap = ;
