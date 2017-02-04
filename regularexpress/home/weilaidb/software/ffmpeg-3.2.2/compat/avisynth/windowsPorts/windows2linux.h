#define __WINDOWS2LINUX_H__
#define __stdcall
#define __cdecl
#define noreturn
__declspec
#define STDAPI       extern  HRESULT
#define STDMETHODIMP HRESULT __stdcall
STDMETHODIMP_ x __stdcall
STDMETHOD    virtual HRESULT x
STDMETHOD_ virtual a x
#define TRUE  true
#define FALSE false
#define S_OK                (0x00000000)
#define S_FALSE             (0x00000001)
#define E_NOINTERFACE       (0X80004002)
#define E_POINTER           (0x80004003)
#define E_FAIL              (0x80004005)
#define E_OUTOFMEMORY       (0x8007000E)
#define INVALID_HANDLE_VALUE    ((HANDLE)((LONG_PTR)-1))
FAILED              ((hr) & 0x80000000)
SUCCEEDED           (!FAILED(hr))
MAKEDWORD (((a) << 24) | ((b) << 16) | ((c) << 8) | (d))
MAKEWORD (((a) << 8) | (b))
#define lstrlen                             strlen
#define lstrcpy                             strcpy
#define lstrcmpi                            strcasecmp
#define _stricmp                            strcasecmp
InterlockedIncrement             __sync_fetch_and_add((x), 1)
InterlockedDecrement             __sync_fetch_and_sub((x), 1)
InterlockedCompareExchange   __sync_val_compare_and_swap(x,z,y)
UInt32x32To64                 ( (uint64_t) ( ((uint64_t)((uint32_t)(a))) * ((uint32_t)(b))  ) )
Int64ShrlMod32                ( (uint64_t) ( (uint64_t)(a) >> (b) ) )
Int32x32To64                  ((__int64)(((__int64)((long)(a))) * ((long)(b))))
MulDiv   (int32_t) (((int64_t) (nNumber) * (int64_t) (nNumerator) + (int64_t) ((nDenominator)/2)) / (int64_t) (nDenominator))
