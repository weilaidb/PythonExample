#if SDL_VIDEO_DRIVER_WINDOWS
static void IME_Init(SDL_VideoData *videodata, HWND hwnd);
static void IME_Enable(SDL_VideoData *videodata, HWND hwnd);
static void IME_Disable(SDL_VideoData *videodata, HWND hwnd);
static void IME_Quit(SDL_VideoData *videodata);
#define MAPVK_VK_TO_VSC     0
#define MAPVK_VSC_TO_VK     1
#define MAPVK_VK_TO_CHAR    2
void
WIN_InitKeyboard(_THIS)
void
WIN_UpdateKeymap()
void
WIN_QuitKeyboard(_THIS)
void
WIN_ResetDeadKeys()
void
WIN_StartTextInput(_THIS)
void
WIN_StopTextInput(_THIS)
void
WIN_SetTextInputRect(_THIS, SDL_Rect *rect)
SDL_bool
IME_HandleMessage(HWND hwnd, UINT msg, WPARAM wParam, LPARAM *lParam, SDL_VideoData *videodata)
void IME_Present(SDL_VideoData *videodata)
#define USE_INIT_GUID
#elif defined(__GNUC__)
#define USE_INIT_GUID
#undef DEFINE_GUID
#define DEFINE_GUID(n,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) static const GUID n =
DEFINE_GUID(IID_ITfInputProcessorProfileActivationSink,        0x71C6E74E,0x0F28,0x11D8,0xA8,0x2A,0x00,0x06,0x5B,0x84,0x43,0x5C);
DEFINE_GUID(IID_ITfUIElementSink,                              0xEA1EA136,0x19DF,0x11D7,0xA6,0xD2,0x00,0x06,0x5B,0x84,0x43,0x5C);
DEFINE_GUID(GUID_TFCAT_TIP_KEYBOARD,                           0x34745C63,0xB2F0,0x4784,0x8B,0x67,0x5E,0x12,0xC8,0x70,0x1A,0x31);
DEFINE_GUID(IID_ITfSource,                                     0x4EA48A35,0x60AE,0x446F,0x8F,0xD6,0xE6,0xA8,0xD8,0x24,0x59,0xF7);
DEFINE_GUID(IID_ITfUIElementMgr,                               0xEA1EA135,0x19DF,0x11D7,0xA6,0xD2,0x00,0x06,0x5B,0x84,0x43,0x5C);
DEFINE_GUID(IID_ITfCandidateListUIElement,                     0xEA1EA138,0x19DF,0x11D7,0xA6,0xD2,0x00,0x06,0x5B,0x84,0x43,0x5C);
DEFINE_GUID(IID_ITfReadingInformationUIElement,                0xEA1EA139,0x19DF,0x11D7,0xA6,0xD2,0x00,0x06,0x5B,0x84,0x43,0x5C);
DEFINE_GUID(IID_ITfThreadMgr,                                  0xAA80E801,0x2021,0x11D2,0x93,0xE0,0x00,0x60,0xB0,0x67,0xB8,0x6E);
DEFINE_GUID(CLSID_TF_ThreadMgr,                                0x529A9E6B,0x6587,0x4F23,0xAB,0x9E,0x9C,0x7D,0x68,0x3E,0x3C,0x50);
DEFINE_GUID(IID_ITfThreadMgrEx,                                0x3E90ADE3,0x7594,0x4CB0,0xBB,0x58,0x69,0x62,0x8F,0x5F,0x45,0x8C);
#define LANG_CHT MAKELANGID(LANG_CHINESE, SUBLANG_CHINESE_TRADITIONAL)
#define LANG_CHS MAKELANGID(LANG_CHINESE, SUBLANG_CHINESE_SIMPLIFIED)
#define MAKEIMEVERSION(major,minor) ((DWORD) (((BYTE)(major) << 24) | ((BYTE)(minor) << 16) ))
#define IMEID_VER(id) ((id) & 0xffff0000)
#define IMEID_LANG(id) ((id) & 0x0000ffff)
#define CHT_HKL_DAYI            ((HKL)0xE0060404)
#define CHT_HKL_NEW_PHONETIC    ((HKL)0xE0080404)
#define CHT_HKL_NEW_CHANG_JIE   ((HKL)0xE0090404)
#define CHT_HKL_NEW_QUICK       ((HKL)0xE00A0404)
#define CHT_HKL_HK_CANTONESE    ((HKL)0xE00B0404)
#define CHT_IMEFILENAME1        "TINTLGNT.IME"
#define CHT_IMEFILENAME2        "CINTLGNT.IME"
#define CHT_IMEFILENAME3        "MSTCIPHA.IME"
#define IMEID_CHT_VER42         (LANG_CHT | MAKEIMEVERSION(4, 2))
#define IMEID_CHT_VER43         (LANG_CHT | MAKEIMEVERSION(4, 3))
#define IMEID_CHT_VER44         (LANG_CHT | MAKEIMEVERSION(4, 4))
#define IMEID_CHT_VER50         (LANG_CHT | MAKEIMEVERSION(5, 0))
#define IMEID_CHT_VER51         (LANG_CHT | MAKEIMEVERSION(5, 1))
#define IMEID_CHT_VER52         (LANG_CHT | MAKEIMEVERSION(5, 2))
#define IMEID_CHT_VER60         (LANG_CHT | MAKEIMEVERSION(6, 0))
#define IMEID_CHT_VER_VISTA     (LANG_CHT | MAKEIMEVERSION(7, 0))
#define CHS_HKL                 ((HKL)0xE00E0804)
#define CHS_IMEFILENAME1        "PINTLGNT.IME"
#define CHS_IMEFILENAME2        "MSSCIPYA.IME"
#define IMEID_CHS_VER41         (LANG_CHS | MAKEIMEVERSION(4, 1))
#define IMEID_CHS_VER42         (LANG_CHS | MAKEIMEVERSION(4, 2))
#define IMEID_CHS_VER53         (LANG_CHS | MAKEIMEVERSION(5, 3))
#define LANG() LOWORD((videodata->ime_hkl))
#define PRIMLANG() ((WORD)PRIMARYLANGID(LANG()))
#define SUBLANG() SUBLANGID(LANG())
static void IME_UpdateInputLocale(SDL_VideoData *videodata);
static void IME_ClearComposition(SDL_VideoData *videodata);
static void IME_SetWindow(SDL_VideoData* videodata, HWND hwnd);
static void IME_SetupAPI(SDL_VideoData *videodata);
static DWORD IME_GetId(SDL_VideoData *videodata, UINT uIndex);
static void IME_SendEditingEvent(SDL_VideoData *videodata);
static void IME_DestroyTextures(SDL_VideoData *videodata);
#define SDL_IsEqualIID(riid1, riid2) SDL_IsEqualGUID(riid1, riid2)
#define SDL_IsEqualGUID(rguid1, rguid2) (!SDL_memcmp(rguid1, rguid2, sizeof(GUID)))
static SDL_bool UILess_SetupSinks(SDL_VideoData *videodata);
static void UILess_ReleaseSinks(SDL_VideoData *videodata);
static void UILess_EnableUIUpdates(SDL_VideoData *videodata);
static void UILess_DisableUIUpdates(SDL_VideoData *videodata);
static void
IME_Init(SDL_VideoData *videodata, HWND hwnd)
static void
IME_Enable(SDL_VideoData *videodata, HWND hwnd)
static void
IME_Disable(SDL_VideoData *videodata, HWND hwnd)
static void
IME_Quit(SDL_VideoData *videodata)
static void
IME_GetReadingString(SDL_VideoData *videodata, HWND hwnd)
static void
IME_InputLangChanged(SDL_VideoData *videodata)
static DWORD
IME_GetId(SDL_VideoData *videodata, UINT uIndex)
static void
IME_SetupAPI(SDL_VideoData *videodata)
static void
IME_SetWindow(SDL_VideoData* videodata, HWND hwnd)
static void
IME_UpdateInputLocale(SDL_VideoData *videodata)
static void
IME_ClearComposition(SDL_VideoData *videodata)
static void
IME_GetCompositionString(SDL_VideoData *videodata, HIMC himc, DWORD string)
static void
IME_SendInputEvent(SDL_VideoData *videodata)
static void
IME_SendEditingEvent(SDL_VideoData *videodata)
static void
IME_AddCandidate(SDL_VideoData *videodata, UINT i, LPCWSTR candidate)
static void
IME_GetCandidateList(HIMC himc, SDL_VideoData *videodata)
static void
IME_ShowCandidateList(SDL_VideoData *videodata)
static void
IME_HideCandidateList(SDL_VideoData *videodata)
SDL_bool
IME_HandleMessage(HWND hwnd, UINT msg, WPARAM wParam, LPARAM *lParam, SDL_VideoData *videodata)
static void
IME_CloseCandidateList(SDL_VideoData *videodata)
static void
UILess_GetCandidateList(SDL_VideoData *videodata, ITfCandidateListUIElement *pcandlist)
STDMETHODIMP_(ULONG) TSFSink_AddRef(TSFSink *sink)
STDMETHODIMP_(ULONG)TSFSink_Release(TSFSink *sink)
STDMETHODIMP UIElementSink_QueryInterface(TSFSink *sink, REFIID riid, PVOID *ppv)
ITfUIElement *UILess_GetUIElement(SDL_VideoData *videodata, DWORD dwUIElementId)
STDMETHODIMP UIElementSink_BeginUIElement(TSFSink *sink, DWORD dwUIElementId, BOOL *pbShow)
STDMETHODIMP UIElementSink_UpdateUIElement(TSFSink *sink, DWORD dwUIElementId)
STDMETHODIMP UIElementSink_EndUIElement(TSFSink *sink, DWORD dwUIElementId)
STDMETHODIMP IPPASink_QueryInterface(TSFSink *sink, REFIID riid, PVOID *ppv)
STDMETHODIMP IPPASink_OnActivated(TSFSink *sink, DWORD dwProfileType, LANGID langid, REFCLSID clsid, REFGUID catid, REFGUID guidProfile, HKL hkl, DWORD dwFlags)
static void *vtUIElementSink[] = ;
static void *vtIPPASink[] = ;
static void
UILess_EnableUIUpdates(SDL_VideoData *videodata)
static void
UILess_DisableUIUpdates(SDL_VideoData *videodata)
static SDL_bool
UILess_SetupSinks(SDL_VideoData *videodata)
#define SAFE_RELEASE(p)                             \
static void
UILess_ReleaseSinks(SDL_VideoData *videodata)
static void *
StartDrawToBitmap(HDC hdc, HBITMAP *hhbm, int width, int height)
static void
StopDrawToBitmap(HDC hdc, HBITMAP *hhbm)
static void
DrawRect(HDC hdc, int left, int top, int right, int bottom, int pensize)
static void
IME_DestroyTextures(SDL_VideoData *videodata)
#define SDL_swap(a,b)
static void
IME_PositionCandidateList(SDL_VideoData *videodata, SIZE size)
static void
IME_RenderCandidateList(SDL_VideoData *videodata, HDC hdc)
static void
IME_Render(SDL_VideoData *videodata)
void IME_Present(SDL_VideoData *videodata)
