#define imemoffset offsetof(libAVPin, imemvtbl)
DECLARE_QUERYINTERFACE(libAVPin,
)
DECLARE_ADDREF(libAVPin)
DECLARE_RELEASE(libAVPin)
long WINAPI
libAVPin_Connect(libAVPin *this, IPin *pin, const AM_MEDIA_TYPE *type)
long WINAPI
libAVPin_ReceiveConnection(libAVPin *this, IPin *pin,
const AM_MEDIA_TYPE *type)
long WINAPI
libAVPin_Disconnect(libAVPin *this)
long WINAPI
libAVPin_ConnectedTo(libAVPin *this, IPin **pin)
long WINAPI
libAVPin_ConnectionMediaType(libAVPin *this, AM_MEDIA_TYPE *type)
long WINAPI
libAVPin_QueryPinInfo(libAVPin *this, PIN_INFO *info)
long WINAPI
libAVPin_QueryDirection(libAVPin *this, PIN_DIRECTION *dir)
long WINAPI
libAVPin_QueryId(libAVPin *this, wchar_t **id)
long WINAPI
libAVPin_QueryAccept(libAVPin *this, const AM_MEDIA_TYPE *type)
long WINAPI
libAVPin_EnumMediaTypes(libAVPin *this, IEnumMediaTypes **enumtypes)
long WINAPI
libAVPin_QueryInternalConnections(libAVPin *this, IPin **pin,
unsigned long *npin)
long WINAPI
libAVPin_EndOfStream(libAVPin *this)
long WINAPI
libAVPin_BeginFlush(libAVPin *this)
long WINAPI
libAVPin_EndFlush(libAVPin *this)
long WINAPI
libAVPin_NewSegment(libAVPin *this, REFERENCE_TIME start, REFERENCE_TIME stop,
double rate)
static int
libAVPin_Setup(libAVPin *this, libAVFilter *filter)
DECLARE_CREATE(libAVPin, libAVPin_Setup(this, filter), libAVFilter *filter)
DECLARE_DESTROY(libAVPin, nothing)
long WINAPI
libAVMemInputPin_QueryInterface(libAVMemInputPin *this, const GUID *riid,
void **ppvObject)
unsigned long WINAPI
libAVMemInputPin_AddRef(libAVMemInputPin *this)
unsigned long WINAPI
libAVMemInputPin_Release(libAVMemInputPin *this)
long WINAPI
libAVMemInputPin_GetAllocator(libAVMemInputPin *this, IMemAllocator **alloc)
long WINAPI
libAVMemInputPin_NotifyAllocator(libAVMemInputPin *this, IMemAllocator *alloc,
BOOL rdwr)
long WINAPI
libAVMemInputPin_GetAllocatorRequirements(libAVMemInputPin *this,
ALLOCATOR_PROPERTIES *props)
long WINAPI
libAVMemInputPin_Receive(libAVMemInputPin *this, IMediaSample *sample)
long WINAPI
libAVMemInputPin_ReceiveMultiple(libAVMemInputPin *this,
IMediaSample **samples, long n, long *nproc)
long WINAPI
libAVMemInputPin_ReceiveCanBlock(libAVMemInputPin *this)
void
libAVMemInputPin_Destroy(libAVMemInputPin *this)
