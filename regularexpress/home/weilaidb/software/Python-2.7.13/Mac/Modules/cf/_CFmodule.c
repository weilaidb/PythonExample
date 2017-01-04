#define PyMac_PRECHECK(rtn) do  while(0)
extern PyObject *_CFObj_New(CFTypeRef);
extern int _CFObj_Convert(PyObject *, CFTypeRef *);
#define CFObj_New _CFObj_New
#define CFObj_Convert _CFObj_Convert
extern PyObject *_CFTypeRefObj_New(CFTypeRef);
extern int _CFTypeRefObj_Convert(PyObject *, CFTypeRef *);
#define CFTypeRefObj_New _CFTypeRefObj_New
#define CFTypeRefObj_Convert _CFTypeRefObj_Convert
extern PyObject *_CFStringRefObj_New(CFStringRef);
extern int _CFStringRefObj_Convert(PyObject *, CFStringRef *);
#define CFStringRefObj_New _CFStringRefObj_New
#define CFStringRefObj_Convert _CFStringRefObj_Convert
extern PyObject *_CFMutableStringRefObj_New(CFMutableStringRef);
extern int _CFMutableStringRefObj_Convert(PyObject *, CFMutableStringRef *);
#define CFMutableStringRefObj_New _CFMutableStringRefObj_New
#define CFMutableStringRefObj_Convert _CFMutableStringRefObj_Convert
extern PyObject *_CFArrayRefObj_New(CFArrayRef);
extern int _CFArrayRefObj_Convert(PyObject *, CFArrayRef *);
#define CFArrayRefObj_New _CFArrayRefObj_New
#define CFArrayRefObj_Convert _CFArrayRefObj_Convert
extern PyObject *_CFMutableArrayRefObj_New(CFMutableArrayRef);
extern int _CFMutableArrayRefObj_Convert(PyObject *, CFMutableArrayRef *);
#define CFMutableArrayRefObj_New _CFMutableArrayRefObj_New
#define CFMutableArrayRefObj_Convert _CFMutableArrayRefObj_Convert
extern PyObject *_CFDataRefObj_New(CFDataRef);
extern int _CFDataRefObj_Convert(PyObject *, CFDataRef *);
#define CFDataRefObj_New _CFDataRefObj_New
#define CFDataRefObj_Convert _CFDataRefObj_Convert
extern PyObject *_CFMutableDataRefObj_New(CFMutableDataRef);
extern int _CFMutableDataRefObj_Convert(PyObject *, CFMutableDataRef *);
#define CFMutableDataRefObj_New _CFMutableDataRefObj_New
#define CFMutableDataRefObj_Convert _CFMutableDataRefObj_Convert
extern PyObject *_CFDictionaryRefObj_New(CFDictionaryRef);
extern int _CFDictionaryRefObj_Convert(PyObject *, CFDictionaryRef *);
#define CFDictionaryRefObj_New _CFDictionaryRefObj_New
#define CFDictionaryRefObj_Convert _CFDictionaryRefObj_Convert
extern PyObject *_CFMutableDictionaryRefObj_New(CFMutableDictionaryRef);
extern int _CFMutableDictionaryRefObj_Convert(PyObject *, CFMutableDictionaryRef *);
#define CFMutableDictionaryRefObj_New _CFMutableDictionaryRefObj_New
#define CFMutableDictionaryRefObj_Convert _CFMutableDictionaryRefObj_Convert
extern PyObject *_CFURLRefObj_New(CFURLRef);
extern int _CFURLRefObj_Convert(PyObject *, CFURLRef *);
extern int _OptionalCFURLRefObj_Convert(PyObject *, CFURLRef *);
#define CFURLRefObj_New _CFURLRefObj_New
#define CFURLRefObj_Convert _CFURLRefObj_Convert
#define OptionalCFURLRefObj_Convert _OptionalCFURLRefObj_Convert
PyObject *CFRange_New(CFRange *itself)
int
CFRange_Convert(PyObject *v, CFRange *p_itself)
int
OptionalCFURLRefObj_Convert(PyObject *v, CFURLRef *p_itself)
static PyObject *CF_Error;
PyTypeObject CFTypeRef_Type;
#define CFTypeRefObj_Check(x) ((x)->ob_type == &CFTypeRef_Type || PyObject_TypeCheck((x), &CFTypeRef_Type))
typedef struct CFTypeRefObject  CFTypeRefObject;
PyObject *CFTypeRefObj_New(CFTypeRef itself)
int CFTypeRefObj_Convert(PyObject *v, CFTypeRef *p_itself)
static void CFTypeRefObj_dealloc(CFTypeRefObject *self)
static PyObject *CFTypeRefObj_CFGetTypeID(CFTypeRefObject *_self, PyObject *_args)
static PyObject *CFTypeRefObj_CFRetain(CFTypeRefObject *_self, PyObject *_args)
static PyObject *CFTypeRefObj_CFRelease(CFTypeRefObject *_self, PyObject *_args)
static PyObject *CFTypeRefObj_CFGetRetainCount(CFTypeRefObject *_self, PyObject *_args)
static PyObject *CFTypeRefObj_CFEqual(CFTypeRefObject *_self, PyObject *_args)
static PyObject *CFTypeRefObj_CFHash(CFTypeRefObject *_self, PyObject *_args)
static PyObject *CFTypeRefObj_CFCopyDescription(CFTypeRefObject *_self, PyObject *_args)
static PyObject *CFTypeRefObj_CFPropertyListCreateXMLData(CFTypeRefObject *_self, PyObject *_args)
static PyObject *CFTypeRefObj_CFPropertyListCreateDeepCopy(CFTypeRefObject *_self, PyObject *_args)
static PyObject *CFTypeRefObj_CFShow(CFTypeRefObject *_self, PyObject *_args)
static PyObject *CFTypeRefObj_CFPropertyListCreateFromXMLData(CFTypeRefObject *_self, PyObject *_args)
static PyObject *CFTypeRefObj_toPython(CFTypeRefObject *_self, PyObject *_args)
static PyMethodDef CFTypeRefObj_methods[] = ;
#define CFTypeRefObj_getsetlist NULL
static int CFTypeRefObj_compare(CFTypeRefObject *self, CFTypeRefObject *other)
static PyObject * CFTypeRefObj_repr(CFTypeRefObject *self)
static int CFTypeRefObj_hash(CFTypeRefObject *self)
static int CFTypeRefObj_tp_init(PyObject *_self, PyObject *_args, PyObject *_kwds)
#define CFTypeRefObj_tp_alloc PyType_GenericAlloc
static PyObject *CFTypeRefObj_tp_new(PyTypeObject *type, PyObject *_args, PyObject *_kwds)
#define CFTypeRefObj_tp_free PyObject_Del
PyTypeObject CFTypeRef_Type = ;
PyTypeObject CFArrayRef_Type;
#define CFArrayRefObj_Check(x) ((x)->ob_type == &CFArrayRef_Type || PyObject_TypeCheck((x), &CFArrayRef_Type))
typedef struct CFArrayRefObject  CFArrayRefObject;
PyObject *CFArrayRefObj_New(CFArrayRef itself)
int CFArrayRefObj_Convert(PyObject *v, CFArrayRef *p_itself)
static void CFArrayRefObj_dealloc(CFArrayRefObject *self)
static PyObject *CFArrayRefObj_CFArrayCreateCopy(CFArrayRefObject *_self, PyObject *_args)
static PyObject *CFArrayRefObj_CFArrayGetCount(CFArrayRefObject *_self, PyObject *_args)
static PyObject *CFArrayRefObj_CFStringCreateByCombiningStrings(CFArrayRefObject *_self, PyObject *_args)
static PyMethodDef CFArrayRefObj_methods[] = ;
#define CFArrayRefObj_getsetlist NULL
static int CFArrayRefObj_compare(CFArrayRefObject *self, CFArrayRefObject *other)
static PyObject * CFArrayRefObj_repr(CFArrayRefObject *self)
static int CFArrayRefObj_hash(CFArrayRefObject *self)
static int CFArrayRefObj_tp_init(PyObject *_self, PyObject *_args, PyObject *_kwds)
#define CFArrayRefObj_tp_alloc PyType_GenericAlloc
static PyObject *CFArrayRefObj_tp_new(PyTypeObject *type, PyObject *_args, PyObject *_kwds)
#define CFArrayRefObj_tp_free PyObject_Del
PyTypeObject CFArrayRef_Type = ;
PyTypeObject CFMutableArrayRef_Type;
#define CFMutableArrayRefObj_Check(x) ((x)->ob_type == &CFMutableArrayRef_Type || PyObject_TypeCheck((x), &CFMutableArrayRef_Type))
typedef struct CFMutableArrayRefObject  CFMutableArrayRefObject;
PyObject *CFMutableArrayRefObj_New(CFMutableArrayRef itself)
int CFMutableArrayRefObj_Convert(PyObject *v, CFMutableArrayRef *p_itself)
static void CFMutableArrayRefObj_dealloc(CFMutableArrayRefObject *self)
static PyObject *CFMutableArrayRefObj_CFArrayRemoveValueAtIndex(CFMutableArrayRefObject *_self, PyObject *_args)
static PyObject *CFMutableArrayRefObj_CFArrayRemoveAllValues(CFMutableArrayRefObject *_self, PyObject *_args)
static PyObject *CFMutableArrayRefObj_CFArrayExchangeValuesAtIndices(CFMutableArrayRefObject *_self, PyObject *_args)
static PyObject *CFMutableArrayRefObj_CFArrayAppendArray(CFMutableArrayRefObject *_self, PyObject *_args)
static PyMethodDef CFMutableArrayRefObj_methods[] = ;
#define CFMutableArrayRefObj_getsetlist NULL
static int CFMutableArrayRefObj_compare(CFMutableArrayRefObject *self, CFMutableArrayRefObject *other)
static PyObject * CFMutableArrayRefObj_repr(CFMutableArrayRefObject *self)
static int CFMutableArrayRefObj_hash(CFMutableArrayRefObject *self)
static int CFMutableArrayRefObj_tp_init(PyObject *_self, PyObject *_args, PyObject *_kwds)
#define CFMutableArrayRefObj_tp_alloc PyType_GenericAlloc
static PyObject *CFMutableArrayRefObj_tp_new(PyTypeObject *type, PyObject *_args, PyObject *_kwds)
#define CFMutableArrayRefObj_tp_free PyObject_Del
PyTypeObject CFMutableArrayRef_Type = ;
PyTypeObject CFDictionaryRef_Type;
#define CFDictionaryRefObj_Check(x) ((x)->ob_type == &CFDictionaryRef_Type || PyObject_TypeCheck((x), &CFDictionaryRef_Type))
typedef struct CFDictionaryRefObject  CFDictionaryRefObject;
PyObject *CFDictionaryRefObj_New(CFDictionaryRef itself)
int CFDictionaryRefObj_Convert(PyObject *v, CFDictionaryRef *p_itself)
static void CFDictionaryRefObj_dealloc(CFDictionaryRefObject *self)
static PyObject *CFDictionaryRefObj_CFDictionaryCreateCopy(CFDictionaryRefObject *_self, PyObject *_args)
static PyObject *CFDictionaryRefObj_CFDictionaryGetCount(CFDictionaryRefObject *_self, PyObject *_args)
static PyMethodDef CFDictionaryRefObj_methods[] = ;
#define CFDictionaryRefObj_getsetlist NULL
static int CFDictionaryRefObj_compare(CFDictionaryRefObject *self, CFDictionaryRefObject *other)
static PyObject * CFDictionaryRefObj_repr(CFDictionaryRefObject *self)
static int CFDictionaryRefObj_hash(CFDictionaryRefObject *self)
static int CFDictionaryRefObj_tp_init(PyObject *_self, PyObject *_args, PyObject *_kwds)
#define CFDictionaryRefObj_tp_alloc PyType_GenericAlloc
static PyObject *CFDictionaryRefObj_tp_new(PyTypeObject *type, PyObject *_args, PyObject *_kwds)
#define CFDictionaryRefObj_tp_free PyObject_Del
PyTypeObject CFDictionaryRef_Type = ;
PyTypeObject CFMutableDictionaryRef_Type;
#define CFMutableDictionaryRefObj_Check(x) ((x)->ob_type == &CFMutableDictionaryRef_Type || PyObject_TypeCheck((x), &CFMutableDictionaryRef_Type))
typedef struct CFMutableDictionaryRefObject  CFMutableDictionaryRefObject;
PyObject *CFMutableDictionaryRefObj_New(CFMutableDictionaryRef itself)
int CFMutableDictionaryRefObj_Convert(PyObject *v, CFMutableDictionaryRef *p_itself)
static void CFMutableDictionaryRefObj_dealloc(CFMutableDictionaryRefObject *self)
static PyObject *CFMutableDictionaryRefObj_CFDictionaryRemoveAllValues(CFMutableDictionaryRefObject *_self, PyObject *_args)
static PyMethodDef CFMutableDictionaryRefObj_methods[] = ;
#define CFMutableDictionaryRefObj_getsetlist NULL
static int CFMutableDictionaryRefObj_compare(CFMutableDictionaryRefObject *self, CFMutableDictionaryRefObject *other)
static PyObject * CFMutableDictionaryRefObj_repr(CFMutableDictionaryRefObject *self)
static int CFMutableDictionaryRefObj_hash(CFMutableDictionaryRefObject *self)
static int CFMutableDictionaryRefObj_tp_init(PyObject *_self, PyObject *_args, PyObject *_kwds)
#define CFMutableDictionaryRefObj_tp_alloc PyType_GenericAlloc
static PyObject *CFMutableDictionaryRefObj_tp_new(PyTypeObject *type, PyObject *_args, PyObject *_kwds)
#define CFMutableDictionaryRefObj_tp_free PyObject_Del
PyTypeObject CFMutableDictionaryRef_Type = ;
PyTypeObject CFDataRef_Type;
#define CFDataRefObj_Check(x) ((x)->ob_type == &CFDataRef_Type || PyObject_TypeCheck((x), &CFDataRef_Type))
typedef struct CFDataRefObject  CFDataRefObject;
PyObject *CFDataRefObj_New(CFDataRef itself)
int CFDataRefObj_Convert(PyObject *v, CFDataRef *p_itself)
static void CFDataRefObj_dealloc(CFDataRefObject *self)
static PyObject *CFDataRefObj_CFDataCreateCopy(CFDataRefObject *_self, PyObject *_args)
static PyObject *CFDataRefObj_CFDataGetLength(CFDataRefObject *_self, PyObject *_args)
static PyObject *CFDataRefObj_CFStringCreateFromExternalRepresentation(CFDataRefObject *_self, PyObject *_args)
static PyObject *CFDataRefObj_CFDataGetData(CFDataRefObject *_self, PyObject *_args)
static PyMethodDef CFDataRefObj_methods[] = ;
#define CFDataRefObj_getsetlist NULL
static int CFDataRefObj_compare(CFDataRefObject *self, CFDataRefObject *other)
static PyObject * CFDataRefObj_repr(CFDataRefObject *self)
static int CFDataRefObj_hash(CFDataRefObject *self)
static int CFDataRefObj_tp_init(PyObject *_self, PyObject *_args, PyObject *_kwds)
#define CFDataRefObj_tp_alloc PyType_GenericAlloc
static PyObject *CFDataRefObj_tp_new(PyTypeObject *type, PyObject *_args, PyObject *_kwds)
#define CFDataRefObj_tp_free PyObject_Del
PyTypeObject CFDataRef_Type = ;
PyTypeObject CFMutableDataRef_Type;
#define CFMutableDataRefObj_Check(x) ((x)->ob_type == &CFMutableDataRef_Type || PyObject_TypeCheck((x), &CFMutableDataRef_Type))
typedef struct CFMutableDataRefObject  CFMutableDataRefObject;
PyObject *CFMutableDataRefObj_New(CFMutableDataRef itself)
int CFMutableDataRefObj_Convert(PyObject *v, CFMutableDataRef *p_itself)
static void CFMutableDataRefObj_dealloc(CFMutableDataRefObject *self)
static PyObject *CFMutableDataRefObj_CFDataSetLength(CFMutableDataRefObject *_self, PyObject *_args)
static PyObject *CFMutableDataRefObj_CFDataIncreaseLength(CFMutableDataRefObject *_self, PyObject *_args)
static PyObject *CFMutableDataRefObj_CFDataAppendBytes(CFMutableDataRefObject *_self, PyObject *_args)
static PyObject *CFMutableDataRefObj_CFDataReplaceBytes(CFMutableDataRefObject *_self, PyObject *_args)
static PyObject *CFMutableDataRefObj_CFDataDeleteBytes(CFMutableDataRefObject *_self, PyObject *_args)
static PyMethodDef CFMutableDataRefObj_methods[] = ;
#define CFMutableDataRefObj_getsetlist NULL
static int CFMutableDataRefObj_compare(CFMutableDataRefObject *self, CFMutableDataRefObject *other)
static PyObject * CFMutableDataRefObj_repr(CFMutableDataRefObject *self)
static int CFMutableDataRefObj_hash(CFMutableDataRefObject *self)
static int CFMutableDataRefObj_tp_init(PyObject *_self, PyObject *_args, PyObject *_kwds)
#define CFMutableDataRefObj_tp_alloc PyType_GenericAlloc
static PyObject *CFMutableDataRefObj_tp_new(PyTypeObject *type, PyObject *_args, PyObject *_kwds)
#define CFMutableDataRefObj_tp_free PyObject_Del
PyTypeObject CFMutableDataRef_Type = ;
PyTypeObject CFStringRef_Type;
#define CFStringRefObj_Check(x) ((x)->ob_type == &CFStringRef_Type || PyObject_TypeCheck((x), &CFStringRef_Type))
typedef struct CFStringRefObject  CFStringRefObject;
PyObject *CFStringRefObj_New(CFStringRef itself)
int CFStringRefObj_Convert(PyObject *v, CFStringRef *p_itself)
static void CFStringRefObj_dealloc(CFStringRefObject *self)
static PyObject *CFStringRefObj_CFStringCreateWithSubstring(CFStringRefObject *_self, PyObject *_args)
static PyObject *CFStringRefObj_CFStringCreateCopy(CFStringRefObject *_self, PyObject *_args)
static PyObject *CFStringRefObj_CFStringGetLength(CFStringRefObject *_self, PyObject *_args)
static PyObject *CFStringRefObj_CFStringGetBytes(CFStringRefObject *_self, PyObject *_args)
static PyObject *CFStringRefObj_CFStringCreateExternalRepresentation(CFStringRefObject *_self, PyObject *_args)
static PyObject *CFStringRefObj_CFStringGetSmallestEncoding(CFStringRefObject *_self, PyObject *_args)
static PyObject *CFStringRefObj_CFStringGetFastestEncoding(CFStringRefObject *_self, PyObject *_args)
static PyObject *CFStringRefObj_CFStringCompareWithOptions(CFStringRefObject *_self, PyObject *_args)
static PyObject *CFStringRefObj_CFStringCompare(CFStringRefObject *_self, PyObject *_args)
static PyObject *CFStringRefObj_CFStringFindWithOptions(CFStringRefObject *_self, PyObject *_args)
static PyObject *CFStringRefObj_CFStringCreateArrayWithFindResults(CFStringRefObject *_self, PyObject *_args)
static PyObject *CFStringRefObj_CFStringFind(CFStringRefObject *_self, PyObject *_args)
static PyObject *CFStringRefObj_CFStringHasPrefix(CFStringRefObject *_self, PyObject *_args)
static PyObject *CFStringRefObj_CFStringHasSuffix(CFStringRefObject *_self, PyObject *_args)
static PyObject *CFStringRefObj_CFStringGetLineBounds(CFStringRefObject *_self, PyObject *_args)
static PyObject *CFStringRefObj_CFStringCreateArrayBySeparatingStrings(CFStringRefObject *_self, PyObject *_args)
static PyObject *CFStringRefObj_CFStringGetIntValue(CFStringRefObject *_self, PyObject *_args)
static PyObject *CFStringRefObj_CFStringGetDoubleValue(CFStringRefObject *_self, PyObject *_args)
static PyObject *CFStringRefObj_CFStringConvertIANACharSetNameToEncoding(CFStringRefObject *_self, PyObject *_args)
static PyObject *CFStringRefObj_CFShowStr(CFStringRefObject *_self, PyObject *_args)
static PyObject *CFStringRefObj_CFURLCreateWithString(CFStringRefObject *_self, PyObject *_args)
static PyObject *CFStringRefObj_CFURLCreateWithFileSystemPath(CFStringRefObject *_self, PyObject *_args)
static PyObject *CFStringRefObj_CFURLCreateWithFileSystemPathRelativeToBase(CFStringRefObject *_self, PyObject *_args)
static PyObject *CFStringRefObj_CFURLCreateStringByReplacingPercentEscapes(CFStringRefObject *_self, PyObject *_args)
static PyObject *CFStringRefObj_CFURLCreateStringByAddingPercentEscapes(CFStringRefObject *_self, PyObject *_args)
static PyObject *CFStringRefObj_CFStringGetString(CFStringRefObject *_self, PyObject *_args)
static PyObject *CFStringRefObj_CFStringGetUnicode(CFStringRefObject *_self, PyObject *_args)
static PyMethodDef CFStringRefObj_methods[] = ;
#define CFStringRefObj_getsetlist NULL
static int CFStringRefObj_compare(CFStringRefObject *self, CFStringRefObject *other)
static PyObject * CFStringRefObj_repr(CFStringRefObject *self)
static int CFStringRefObj_hash(CFStringRefObject *self)
static int CFStringRefObj_tp_init(PyObject *_self, PyObject *_args, PyObject *_kwds)
#define CFStringRefObj_tp_alloc PyType_GenericAlloc
static PyObject *CFStringRefObj_tp_new(PyTypeObject *type, PyObject *_args, PyObject *_kwds)
#define CFStringRefObj_tp_free PyObject_Del
PyTypeObject CFStringRef_Type = ;
PyTypeObject CFMutableStringRef_Type;
#define CFMutableStringRefObj_Check(x) ((x)->ob_type == &CFMutableStringRef_Type || PyObject_TypeCheck((x), &CFMutableStringRef_Type))
typedef struct CFMutableStringRefObject  CFMutableStringRefObject;
PyObject *CFMutableStringRefObj_New(CFMutableStringRef itself)
int CFMutableStringRefObj_Convert(PyObject *v, CFMutableStringRef *p_itself)
static void CFMutableStringRefObj_dealloc(CFMutableStringRefObject *self)
static PyObject *CFMutableStringRefObj_CFStringAppend(CFMutableStringRefObject *_self, PyObject *_args)
static PyObject *CFMutableStringRefObj_CFStringAppendCharacters(CFMutableStringRefObject *_self, PyObject *_args)
static PyObject *CFMutableStringRefObj_CFStringAppendPascalString(CFMutableStringRefObject *_self, PyObject *_args)
static PyObject *CFMutableStringRefObj_CFStringAppendCString(CFMutableStringRefObject *_self, PyObject *_args)
static PyObject *CFMutableStringRefObj_CFStringInsert(CFMutableStringRefObject *_self, PyObject *_args)
static PyObject *CFMutableStringRefObj_CFStringDelete(CFMutableStringRefObject *_self, PyObject *_args)
static PyObject *CFMutableStringRefObj_CFStringReplace(CFMutableStringRefObject *_self, PyObject *_args)
static PyObject *CFMutableStringRefObj_CFStringReplaceAll(CFMutableStringRefObject *_self, PyObject *_args)
static PyObject *CFMutableStringRefObj_CFStringPad(CFMutableStringRefObject *_self, PyObject *_args)
static PyObject *CFMutableStringRefObj_CFStringTrim(CFMutableStringRefObject *_self, PyObject *_args)
static PyObject *CFMutableStringRefObj_CFStringTrimWhitespace(CFMutableStringRefObject *_self, PyObject *_args)
static PyMethodDef CFMutableStringRefObj_methods[] = ;
#define CFMutableStringRefObj_getsetlist NULL
static int CFMutableStringRefObj_compare(CFMutableStringRefObject *self, CFMutableStringRefObject *other)
static PyObject * CFMutableStringRefObj_repr(CFMutableStringRefObject *self)
static int CFMutableStringRefObj_hash(CFMutableStringRefObject *self)
static int CFMutableStringRefObj_tp_init(PyObject *_self, PyObject *_args, PyObject *_kwds)
#define CFMutableStringRefObj_tp_alloc PyType_GenericAlloc
static PyObject *CFMutableStringRefObj_tp_new(PyTypeObject *type, PyObject *_args, PyObject *_kwds)
#define CFMutableStringRefObj_tp_free PyObject_Del
PyTypeObject CFMutableStringRef_Type = ;
PyTypeObject CFURLRef_Type;
#define CFURLRefObj_Check(x) ((x)->ob_type == &CFURLRef_Type || PyObject_TypeCheck((x), &CFURLRef_Type))
typedef struct CFURLRefObject  CFURLRefObject;
PyObject *CFURLRefObj_New(CFURLRef itself)
int CFURLRefObj_Convert(PyObject *v, CFURLRef *p_itself)
static void CFURLRefObj_dealloc(CFURLRefObject *self)
static PyObject *CFURLRefObj_CFURLCreateData(CFURLRefObject *_self, PyObject *_args)
static PyObject *CFURLRefObj_CFURLGetFileSystemRepresentation(CFURLRefObject *_self, PyObject *_args)
static PyObject *CFURLRefObj_CFURLCopyAbsoluteURL(CFURLRefObject *_self, PyObject *_args)
static PyObject *CFURLRefObj_CFURLGetString(CFURLRefObject *_self, PyObject *_args)
static PyObject *CFURLRefObj_CFURLGetBaseURL(CFURLRefObject *_self, PyObject *_args)
static PyObject *CFURLRefObj_CFURLCanBeDecomposed(CFURLRefObject *_self, PyObject *_args)
static PyObject *CFURLRefObj_CFURLCopyScheme(CFURLRefObject *_self, PyObject *_args)
static PyObject *CFURLRefObj_CFURLCopyNetLocation(CFURLRefObject *_self, PyObject *_args)
static PyObject *CFURLRefObj_CFURLCopyPath(CFURLRefObject *_self, PyObject *_args)
static PyObject *CFURLRefObj_CFURLCopyStrictPath(CFURLRefObject *_self, PyObject *_args)
static PyObject *CFURLRefObj_CFURLCopyFileSystemPath(CFURLRefObject *_self, PyObject *_args)
static PyObject *CFURLRefObj_CFURLHasDirectoryPath(CFURLRefObject *_self, PyObject *_args)
static PyObject *CFURLRefObj_CFURLCopyResourceSpecifier(CFURLRefObject *_self, PyObject *_args)
static PyObject *CFURLRefObj_CFURLCopyHostName(CFURLRefObject *_self, PyObject *_args)
static PyObject *CFURLRefObj_CFURLGetPortNumber(CFURLRefObject *_self, PyObject *_args)
static PyObject *CFURLRefObj_CFURLCopyUserName(CFURLRefObject *_self, PyObject *_args)
static PyObject *CFURLRefObj_CFURLCopyPassword(CFURLRefObject *_self, PyObject *_args)
static PyObject *CFURLRefObj_CFURLCopyParameterString(CFURLRefObject *_self, PyObject *_args)
static PyObject *CFURLRefObj_CFURLCopyQueryString(CFURLRefObject *_self, PyObject *_args)
static PyObject *CFURLRefObj_CFURLCopyFragment(CFURLRefObject *_self, PyObject *_args)
static PyObject *CFURLRefObj_CFURLCopyLastPathComponent(CFURLRefObject *_self, PyObject *_args)
static PyObject *CFURLRefObj_CFURLCopyPathExtension(CFURLRefObject *_self, PyObject *_args)
static PyObject *CFURLRefObj_CFURLCreateCopyAppendingPathComponent(CFURLRefObject *_self, PyObject *_args)
static PyObject *CFURLRefObj_CFURLCreateCopyDeletingLastPathComponent(CFURLRefObject *_self, PyObject *_args)
static PyObject *CFURLRefObj_CFURLCreateCopyAppendingPathExtension(CFURLRefObject *_self, PyObject *_args)
static PyObject *CFURLRefObj_CFURLCreateCopyDeletingPathExtension(CFURLRefObject *_self, PyObject *_args)
static PyObject *CFURLRefObj_CFURLGetFSRef(CFURLRefObject *_self, PyObject *_args)
static PyMethodDef CFURLRefObj_methods[] = ;
#define CFURLRefObj_getsetlist NULL
static int CFURLRefObj_compare(CFURLRefObject *self, CFURLRefObject *other)
static PyObject * CFURLRefObj_repr(CFURLRefObject *self)
static int CFURLRefObj_hash(CFURLRefObject *self)
static int CFURLRefObj_tp_init(PyObject *_self, PyObject *_args, PyObject *_kwds)
#define CFURLRefObj_tp_alloc PyType_GenericAlloc
static PyObject *CFURLRefObj_tp_new(PyTypeObject *type, PyObject *_args, PyObject *_kwds)
#define CFURLRefObj_tp_free PyObject_Del
PyTypeObject CFURLRef_Type = ;
static PyObject *CF___CFRangeMake(PyObject *_self, PyObject *_args)
static PyObject *CF_CFAllocatorGetTypeID(PyObject *_self, PyObject *_args)
static PyObject *CF_CFAllocatorGetPreferredSizeForSize(PyObject *_self, PyObject *_args)
static PyObject *CF_CFCopyTypeIDDescription(PyObject *_self, PyObject *_args)
static PyObject *CF_CFArrayGetTypeID(PyObject *_self, PyObject *_args)
static PyObject *CF_CFArrayCreateMutable(PyObject *_self, PyObject *_args)
static PyObject *CF_CFArrayCreateMutableCopy(PyObject *_self, PyObject *_args)
static PyObject *CF_CFDataGetTypeID(PyObject *_self, PyObject *_args)
static PyObject *CF_CFDataCreate(PyObject *_self, PyObject *_args)
static PyObject *CF_CFDataCreateWithBytesNoCopy(PyObject *_self, PyObject *_args)
static PyObject *CF_CFDataCreateMutable(PyObject *_self, PyObject *_args)
static PyObject *CF_CFDataCreateMutableCopy(PyObject *_self, PyObject *_args)
static PyObject *CF_CFDictionaryGetTypeID(PyObject *_self, PyObject *_args)
static PyObject *CF_CFDictionaryCreateMutable(PyObject *_self, PyObject *_args)
static PyObject *CF_CFDictionaryCreateMutableCopy(PyObject *_self, PyObject *_args)
static PyObject *CF_CFPreferencesCopyAppValue(PyObject *_self, PyObject *_args)
static PyObject *CF_CFPreferencesGetAppBooleanValue(PyObject *_self, PyObject *_args)
static PyObject *CF_CFPreferencesGetAppIntegerValue(PyObject *_self, PyObject *_args)
static PyObject *CF_CFPreferencesSetAppValue(PyObject *_self, PyObject *_args)
static PyObject *CF_CFPreferencesAddSuitePreferencesToApp(PyObject *_self, PyObject *_args)
static PyObject *CF_CFPreferencesRemoveSuitePreferencesFromApp(PyObject *_self, PyObject *_args)
static PyObject *CF_CFPreferencesAppSynchronize(PyObject *_self, PyObject *_args)
static PyObject *CF_CFPreferencesCopyValue(PyObject *_self, PyObject *_args)
static PyObject *CF_CFPreferencesCopyMultiple(PyObject *_self, PyObject *_args)
static PyObject *CF_CFPreferencesSetValue(PyObject *_self, PyObject *_args)
static PyObject *CF_CFPreferencesSetMultiple(PyObject *_self, PyObject *_args)
static PyObject *CF_CFPreferencesSynchronize(PyObject *_self, PyObject *_args)
static PyObject *CF_CFPreferencesCopyApplicationList(PyObject *_self, PyObject *_args)
static PyObject *CF_CFPreferencesCopyKeyList(PyObject *_self, PyObject *_args)
static PyObject *CF_CFStringGetTypeID(PyObject *_self, PyObject *_args)
static PyObject *CF_CFStringCreateWithPascalString(PyObject *_self, PyObject *_args)
static PyObject *CF_CFStringCreateWithCString(PyObject *_self, PyObject *_args)
static PyObject *CF_CFStringCreateWithCharacters(PyObject *_self, PyObject *_args)
static PyObject *CF_CFStringCreateWithPascalStringNoCopy(PyObject *_self, PyObject *_args)
static PyObject *CF_CFStringCreateWithCStringNoCopy(PyObject *_self, PyObject *_args)
static PyObject *CF_CFStringCreateWithCharactersNoCopy(PyObject *_self, PyObject *_args)
static PyObject *CF_CFStringCreateMutable(PyObject *_self, PyObject *_args)
static PyObject *CF_CFStringCreateMutableCopy(PyObject *_self, PyObject *_args)
static PyObject *CF_CFStringCreateWithBytes(PyObject *_self, PyObject *_args)
static PyObject *CF_CFStringGetSystemEncoding(PyObject *_self, PyObject *_args)
static PyObject *CF_CFStringGetMaximumSizeForEncoding(PyObject *_self, PyObject *_args)
static PyObject *CF_CFStringIsEncodingAvailable(PyObject *_self, PyObject *_args)
static PyObject *CF_CFStringGetNameOfEncoding(PyObject *_self, PyObject *_args)
static PyObject *CF_CFStringConvertEncodingToNSStringEncoding(PyObject *_self, PyObject *_args)
static PyObject *CF_CFStringConvertNSStringEncodingToEncoding(PyObject *_self, PyObject *_args)
static PyObject *CF_CFStringConvertEncodingToWindowsCodepage(PyObject *_self, PyObject *_args)
static PyObject *CF_CFStringConvertWindowsCodepageToEncoding(PyObject *_self, PyObject *_args)
static PyObject *CF_CFStringConvertEncodingToIANACharSetName(PyObject *_self, PyObject *_args)
static PyObject *CF_CFStringGetMostCompatibleMacStringEncoding(PyObject *_self, PyObject *_args)
static PyObject *CF___CFStringMakeConstantString(PyObject *_self, PyObject *_args)
static PyObject *CF_CFURLGetTypeID(PyObject *_self, PyObject *_args)
static PyObject *CF_CFURLCreateWithBytes(PyObject *_self, PyObject *_args)
static PyObject *CF_CFURLCreateFromFileSystemRepresentation(PyObject *_self, PyObject *_args)
static PyObject *CF_CFURLCreateFromFileSystemRepresentationRelativeToBase(PyObject *_self, PyObject *_args)
static PyObject *CF_CFURLCreateFromFSRef(PyObject *_self, PyObject *_args)
static PyObject *CF_toCF(PyObject *_self, PyObject *_args)
static PyMethodDef CF_methods[] = ;
PyObject *CFObj_New(CFTypeRef itself)
int CFObj_Convert(PyObject *v, CFTypeRef *p_itself)
void init_CF(void)
