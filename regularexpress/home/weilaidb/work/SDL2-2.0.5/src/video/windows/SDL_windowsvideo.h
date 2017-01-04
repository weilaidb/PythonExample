#define _SDL_windowsvideo_h
#if defined(_MSC_VER) && (_MSC_VER >= 1500)
#define MAX_CANDLIST    10
#define MAX_CANDLENGTH  256
#if WINVER < 0x0601
#define TWF_FINETOUCH   1
#define TWF_WANTPALM    2
#define TOUCHEVENTF_MOVE 0x0001
#define TOUCHEVENTF_DOWN 0x0002
#define TOUCHEVENTF_UP   0x0004
DECLARE_HANDLE(HTOUCHINPUT);
typedef struct _TOUCHINPUT  TOUCHINPUT, *PTOUCHINPUT;
#if WINVER < 0x0603
typedef enum MONITOR_DPI_TYPE  MONITOR_DPI_TYPE;
typedef BOOL  (*PFNSHFullScreen)(HWND, DWORD);
typedef void  (*PFCoordTransform)(SDL_Window*, POINT*);
typedef struct
TSFSink;
typedef struct tagINPUTCONTEXT2  INPUTCONTEXT2, *PINPUTCONTEXT2, NEAR *NPINPUTCONTEXT2, FAR *LPINPUTCONTEXT2;
typedef struct SDL_VideoData
SDL_VideoData;
extern SDL_bool g_WindowsEnableMessageLoop;
extern SDL_bool g_WindowFrameUsableWhileCursorHidden;
typedef struct IDirect3D9 IDirect3D9;
extern SDL_bool D3D_LoadDLL( void **pD3DDLL, IDirect3D9 **pDirect3D9Interface );
