#define _SDL_msctf_h
#define     TF_INVALID_COOKIE               (0xffffffff)
#define     TF_IPSINK_FLAG_ACTIVE           0x0001
#define     TF_TMAE_UIELEMENTENABLEDONLY    0x00000004
typedef struct ITfThreadMgr ITfThreadMgr;
typedef struct ITfDocumentMgr ITfDocumentMgr;
typedef struct ITfClientId ITfClientId;
typedef struct IEnumTfDocumentMgrs IEnumTfDocumentMgrs;
typedef struct IEnumTfFunctionProviders IEnumTfFunctionProviders;
typedef struct ITfFunctionProvider ITfFunctionProvider;
typedef struct ITfCompartmentMgr ITfCompartmentMgr;
typedef struct ITfContext ITfContext;
typedef struct IEnumTfContexts IEnumTfContexts;
typedef struct ITfUIElementSink ITfUIElementSink;
typedef struct ITfUIElement ITfUIElement;
typedef struct ITfUIElementMgr ITfUIElementMgr;
typedef struct IEnumTfUIElements IEnumTfUIElements;
typedef struct ITfThreadMgrEx ITfThreadMgrEx;
typedef struct ITfCandidateListUIElement ITfCandidateListUIElement;
typedef struct ITfReadingInformationUIElement ITfReadingInformationUIElement;
typedef struct ITfInputProcessorProfileActivationSink ITfInputProcessorProfileActivationSink;
typedef struct ITfSource ITfSource;
typedef DWORD TfClientId;
typedef DWORD TfEditCookie;
typedef struct ITfThreadMgrVtbl
ITfThreadMgrVtbl;
struct ITfThreadMgr
;
typedef struct ITfThreadMgrExVtbl
ITfThreadMgrExVtbl;
struct ITfThreadMgrEx
;
typedef struct ITfDocumentMgrVtbl
ITfDocumentMgrVtbl;
struct ITfDocumentMgr
;
typedef struct ITfUIElementSinkVtbl
ITfUIElementSinkVtbl;
struct ITfUIElementSink
;
typedef struct ITfUIElementMgrVtbl
ITfUIElementMgrVtbl;
struct ITfUIElementMgr
;
typedef struct ITfCandidateListUIElementVtbl
ITfCandidateListUIElementVtbl;
struct ITfCandidateListUIElement
;
typedef struct ITfReadingInformationUIElementVtbl
ITfReadingInformationUIElementVtbl;
struct ITfReadingInformationUIElement
;
typedef struct ITfUIElementVtbl
ITfUIElementVtbl;
struct ITfUIElement
;
typedef struct ITfInputProcessorProfileActivationSinkVtbl
ITfInputProcessorProfileActivationSinkVtbl;
struct ITfInputProcessorProfileActivationSink
;
typedef struct ITfSourceVtbl
ITfSourceVtbl;
struct ITfSource
;
