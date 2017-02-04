#define AVDEVICE_DSHOW_CAPTURE_H
#define DSHOWDEBUG 0
#define COBJMACROS
#define WIN32_LEAN_AND_MEAN
#define NO_DSHOW_STRSAFE
#define EC_DEVICE_LOST 0x1f
ff_copy_dshow_media_type;
ff_print_VIDEO_STREAM_CONFIG_CAPS;
ff_print_AUDIO_STREAM_CONFIG_CAPS;
ff_print_AM_MEDIA_TYPE;
ff_printGUID;
extern const AVClass *ff_dshow_context_class_ptr;
dshowdebug ff_dlog(&ff_dshow_context_class_ptr, __VA_ARGS__)
nothing
struct GUIDoffset ;
enum dshowDeviceType ;
enum dshowSourceFilterType ;
DECLARE_QUERYINTERFACE                                   \
long WINAPI                                                                  \
class##_QueryInterface(class *this, const GUID *riid, void **ppvObject)      \
DECLARE_ADDREF                                                \
unsigned long WINAPI                                                         \
class##_AddRef(class *this)                                                  \
DECLARE_RELEASE                                               \
unsigned long WINAPI                                                         \
class##_Release(class *this)                                                 \
DECLARE_DESTROY                                         \
void class##_Destroy(class *this)                                            \
DECLARE_CREATE                                    \
class *class##_Create(__VA_ARGS__)                                           \
SETVTBL \
while
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
libAVPin_QueryInternalConnections;
long          WINAPI libAVPin_EndOfStream             (libAVPin *);
long          WINAPI libAVPin_BeginFlush              (libAVPin *);
long          WINAPI libAVPin_EndFlush                (libAVPin *);
long          WINAPI libAVPin_NewSegment              (libAVPin *, REFERENCE_TIME, REFERENCE_TIME, double);
long          WINAPI libAVMemInputPin_QueryInterface          (libAVMemInputPin *, const GUID *, void **);
unsigned long WINAPI libAVMemInputPin_AddRef                  (libAVMemInputPin *);
unsigned long WINAPI libAVMemInputPin_Release                 (libAVMemInputPin *);
long          WINAPI libAVMemInputPin_GetAllocator            (libAVMemInputPin *, IMemAllocator **);
long          WINAPI libAVMemInputPin_NotifyAllocator         (libAVMemInputPin *, IMemAllocator *, BOOL);
libAVMemInputPin_GetAllocatorRequirements;
long          WINAPI libAVMemInputPin_Receive                 (libAVMemInputPin *, IMediaSample *);
long          WINAPI libAVMemInputPin_ReceiveMultiple         (libAVMemInputPin *, IMediaSample **, long, long *);
long          WINAPI libAVMemInputPin_ReceiveCanBlock         (libAVMemInputPin *);
libAVPin_Destroy;
libAVPin            *libAVPin_Create (libAVFilter *filter);
libAVMemInputPin_Destroy;
struct libAVEnumPins ;
libAVEnumPins_QueryInterface;
unsigned long WINAPI libAVEnumPins_AddRef        (libAVEnumPins *);
unsigned long WINAPI libAVEnumPins_Release       (libAVEnumPins *);
long          WINAPI libAVEnumPins_Next          (libAVEnumPins *, unsigned long, IPin **, unsigned long *);
long          WINAPI libAVEnumPins_Skip          (libAVEnumPins *, unsigned long);
long          WINAPI libAVEnumPins_Reset         (libAVEnumPins *);
long          WINAPI libAVEnumPins_Clone         (libAVEnumPins *, libAVEnumPins **);
libAVEnumPins_Destroy;
libAVEnumPins       *libAVEnumPins_Create (libAVPin *pin, libAVFilter *filter);
struct libAVEnumMediaTypes ;
libAVEnumMediaTypes_QueryInterface;
unsigned long WINAPI libAVEnumMediaTypes_AddRef        (libAVEnumMediaTypes *);
unsigned long WINAPI libAVEnumMediaTypes_Release       (libAVEnumMediaTypes *);
long          WINAPI libAVEnumMediaTypes_Next          (libAVEnumMediaTypes *, unsigned long, AM_MEDIA_TYPE **, unsigned long *);
long          WINAPI libAVEnumMediaTypes_Skip          (libAVEnumMediaTypes *, unsigned long);
long          WINAPI libAVEnumMediaTypes_Reset         (libAVEnumMediaTypes *);
long          WINAPI libAVEnumMediaTypes_Clone         (libAVEnumMediaTypes *, libAVEnumMediaTypes **);
libAVEnumMediaTypes_Destroy;
*libAVEnumMediaTypes_Create;
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
libAVFilter_QueryFilterInfo;
libAVFilter_JoinFilterGraph;
libAVFilter_QueryVendorInfo;
libAVFilter_Destroy;
libAVFilter         *libAVFilter_Create (void *, void *, enum dshowDeviceType);
struct dshow_ctx ;
dshow_try_setup_crossbar_options;
dshow_show_filter_properties;
