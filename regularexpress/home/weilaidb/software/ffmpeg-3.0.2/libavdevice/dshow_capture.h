#define AVDEVICE_DSHOW_CAPTURE_H
#define DSHOWDEBUG 0
#define COBJMACROS
#define WIN32_LEAN_AND_MEAN
#define NO_DSHOW_STRSAFE
#define EC_DEVICE_LOST 0x1f
long ff_copy_dshow_media_type(AM_MEDIA_TYPE *dst, const AM_MEDIA_TYPE *src);
void ff_print_VIDEO_STREAM_CONFIG_CAPS(const VIDEO_STREAM_CONFIG_CAPS *caps);
void ff_print_AUDIO_STREAM_CONFIG_CAPS(const AUDIO_STREAM_CONFIG_CAPS *caps);
void ff_print_AM_MEDIA_TYPE(const AM_MEDIA_TYPE *type);
void ff_printGUID(const GUID *g);
extern const AVClass *ff_dshow_context_class_ptr;
#define dshowdebug(...) ff_dlog(&ff_dshow_context_class_ptr, __VA_ARGS__)
static inline void nothing(void *foo)
struct GUIDoffset ;
enum dshowDeviceType ;
enum dshowSourceFilterType ;
#define DECLARE_QUERYINTERFACE(class, ...)                                   \
long WINAPI                                                                  \
class##_QueryInterface(class *this, const GUID *riid, void **ppvObject)      \
#define DECLARE_ADDREF(class)                                                \
unsigned long WINAPI                                                         \
class##_AddRef(class *this)                                                  \
#define DECLARE_RELEASE(class)                                               \
unsigned long WINAPI                                                         \
class##_Release(class *this)                                                 \
#define DECLARE_DESTROY(class, func)                                         \
void class##_Destroy(class *this)                                            \
#define DECLARE_CREATE(class, setup, ...)                                    \
class *class##_Create(__VA_ARGS__)                                           \
#define SETVTBL(vtbl, class, fn) \
do  while(0)
typedef struct libAVPin libAVPin;
typedef struct libAVMemInputPin libAVMemInputPin;
typedef struct libAVEnumPins libAVEnumPins;
typedef struct libAVEnumMediaTypes libAVEnumMediaTypes;
typedef struct libAVFilter libAVFilter;
struct libAVPin ;
long          WINAPI libAVPin_QueryInterface          (libAVPin *, const GUID *, void **);
unsigned long WINAPI libAVPin_AddRef                  (libAVPin *);
unsigned long WINAPI libAVPin_Release                 (libAVPin *);
long          WINAPI libAVPin_Connect                 (libAVPin *, IPin *, const AM_MEDIA_TYPE *);
long          WINAPI libAVPin_ReceiveConnection       (libAVPin *, IPin *, const AM_MEDIA_TYPE *);
long          WINAPI libAVPin_Disconnect              (libAVPin *);
long          WINAPI libAVPin_ConnectedTo             (libAVPin *, IPin **);
long          WINAPI libAVPin_ConnectionMediaType     (libAVPin *, AM_MEDIA_TYPE *);
long          WINAPI libAVPin_QueryPinInfo            (libAVPin *, PIN_INFO *);
long          WINAPI libAVPin_QueryDirection          (libAVPin *, PIN_DIRECTION *);
long          WINAPI libAVPin_QueryId                 (libAVPin *, wchar_t **);
long          WINAPI libAVPin_QueryAccept             (libAVPin *, const AM_MEDIA_TYPE *);
long          WINAPI libAVPin_EnumMediaTypes          (libAVPin *, IEnumMediaTypes **);
long          WINAPI libAVPin_QueryInternalConnections(libAVPin *, IPin **, unsigned long *);
long          WINAPI libAVPin_EndOfStream             (libAVPin *);
long          WINAPI libAVPin_BeginFlush              (libAVPin *);
long          WINAPI libAVPin_EndFlush                (libAVPin *);
long          WINAPI libAVPin_NewSegment              (libAVPin *, REFERENCE_TIME, REFERENCE_TIME, double);
long          WINAPI libAVMemInputPin_QueryInterface          (libAVMemInputPin *, const GUID *, void **);
unsigned long WINAPI libAVMemInputPin_AddRef                  (libAVMemInputPin *);
unsigned long WINAPI libAVMemInputPin_Release                 (libAVMemInputPin *);
long          WINAPI libAVMemInputPin_GetAllocator            (libAVMemInputPin *, IMemAllocator **);
long          WINAPI libAVMemInputPin_NotifyAllocator         (libAVMemInputPin *, IMemAllocator *, BOOL);
long          WINAPI libAVMemInputPin_GetAllocatorRequirements(libAVMemInputPin *, ALLOCATOR_PROPERTIES *);
long          WINAPI libAVMemInputPin_Receive                 (libAVMemInputPin *, IMediaSample *);
long          WINAPI libAVMemInputPin_ReceiveMultiple         (libAVMemInputPin *, IMediaSample **, long, long *);
long          WINAPI libAVMemInputPin_ReceiveCanBlock         (libAVMemInputPin *);
void                 libAVPin_Destroy(libAVPin *);
libAVPin            *libAVPin_Create (libAVFilter *filter);
void                 libAVMemInputPin_Destroy(libAVMemInputPin *);
struct libAVEnumPins ;
long          WINAPI libAVEnumPins_QueryInterface(libAVEnumPins *, const GUID *, void **);
unsigned long WINAPI libAVEnumPins_AddRef        (libAVEnumPins *);
unsigned long WINAPI libAVEnumPins_Release       (libAVEnumPins *);
long          WINAPI libAVEnumPins_Next          (libAVEnumPins *, unsigned long, IPin **, unsigned long *);
long          WINAPI libAVEnumPins_Skip          (libAVEnumPins *, unsigned long);
long          WINAPI libAVEnumPins_Reset         (libAVEnumPins *);
long          WINAPI libAVEnumPins_Clone         (libAVEnumPins *, libAVEnumPins **);
void                 libAVEnumPins_Destroy(libAVEnumPins *);
libAVEnumPins       *libAVEnumPins_Create (libAVPin *pin, libAVFilter *filter);
struct libAVEnumMediaTypes ;
long          WINAPI libAVEnumMediaTypes_QueryInterface(libAVEnumMediaTypes *, const GUID *, void **);
unsigned long WINAPI libAVEnumMediaTypes_AddRef        (libAVEnumMediaTypes *);
unsigned long WINAPI libAVEnumMediaTypes_Release       (libAVEnumMediaTypes *);
long          WINAPI libAVEnumMediaTypes_Next          (libAVEnumMediaTypes *, unsigned long, AM_MEDIA_TYPE **, unsigned long *);
long          WINAPI libAVEnumMediaTypes_Skip          (libAVEnumMediaTypes *, unsigned long);
long          WINAPI libAVEnumMediaTypes_Reset         (libAVEnumMediaTypes *);
long          WINAPI libAVEnumMediaTypes_Clone         (libAVEnumMediaTypes *, libAVEnumMediaTypes **);
void                 libAVEnumMediaTypes_Destroy(libAVEnumMediaTypes *);
libAVEnumMediaTypes *libAVEnumMediaTypes_Create(const AM_MEDIA_TYPE *type);
struct libAVFilter ;
long          WINAPI libAVFilter_QueryInterface (libAVFilter *, const GUID *, void **);
unsigned long WINAPI libAVFilter_AddRef         (libAVFilter *);
unsigned long WINAPI libAVFilter_Release        (libAVFilter *);
long          WINAPI libAVFilter_GetClassID     (libAVFilter *, CLSID *);
long          WINAPI libAVFilter_Stop           (libAVFilter *);
long          WINAPI libAVFilter_Pause          (libAVFilter *);
long          WINAPI libAVFilter_Run            (libAVFilter *, REFERENCE_TIME);
long          WINAPI libAVFilter_GetState       (libAVFilter *, DWORD, FILTER_STATE *);
long          WINAPI libAVFilter_SetSyncSource  (libAVFilter *, IReferenceClock *);
long          WINAPI libAVFilter_GetSyncSource  (libAVFilter *, IReferenceClock **);
long          WINAPI libAVFilter_EnumPins       (libAVFilter *, IEnumPins **);
long          WINAPI libAVFilter_FindPin        (libAVFilter *, const wchar_t *, IPin **);
long          WINAPI libAVFilter_QueryFilterInfo(libAVFilter *, FILTER_INFO *);
long          WINAPI libAVFilter_JoinFilterGraph(libAVFilter *, IFilterGraph *, const wchar_t *);
long          WINAPI libAVFilter_QueryVendorInfo(libAVFilter *, wchar_t **);
void                 libAVFilter_Destroy(libAVFilter *);
libAVFilter         *libAVFilter_Create (void *, void *, enum dshowDeviceType);
struct dshow_ctx ;
HRESULT dshow_try_setup_crossbar_options(ICaptureGraphBuilder2 *graph_builder2,
IBaseFilter *device_filter, enum dshowDeviceType devtype, AVFormatContext *avctx);
void dshow_show_filter_properties(IBaseFilter *pFilter, AVFormatContext *avctx);
