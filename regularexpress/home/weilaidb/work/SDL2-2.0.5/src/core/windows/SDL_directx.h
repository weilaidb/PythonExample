#define _SDL_directx_h
#define WIN32
#undef  WINNT
#define FAR
#define MAKE_HRESULT(sev,fac,code) \
((HRESULT)(((unsigned long)(sev)<<31) | ((unsigned long)(fac)<<16) | ((unsigned long)(code))))
#define S_OK        (HRESULT)0x00000000L
#define SUCCEEDED(x)    ((HRESULT)(x) >= 0)
#define FAILED(x)   ((HRESULT)(x)<0)
#define E_FAIL      (HRESULT)0x80000008L
#define E_NOINTERFACE   (HRESULT)0x80004002L
#define E_OUTOFMEMORY   (HRESULT)0x8007000EL
#define E_INVALIDARG    (HRESULT)0x80070057L
#define E_NOTIMPL   (HRESULT)0x80004001L
#define REGDB_E_CLASSNOTREG (HRESULT)0x80040154L
#define SEVERITY_ERROR  1
#define FACILITY_WIN32  7
#define FIELD_OFFSET(type, field)    ((LONG)&(((type *)0)->field))
#define DIRECTDRAW_VERSION  0x0700
#define DIRECTSOUND_VERSION 0x0800
#define DIRECTINPUT_VERSION 0x0800
typedef struct  DIDEVICEINSTANCE;
