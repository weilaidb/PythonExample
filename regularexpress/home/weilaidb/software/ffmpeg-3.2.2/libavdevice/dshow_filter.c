DECLARE_QUERYINTERFACE(libAVFilter,
)
DECLARE_ADDREF(libAVFilter)
DECLARE_RELEASE(libAVFilter)
long WINAPI
libAVFilter_GetClassID(libAVFilter *this, CLSID *id)
long WINAPI
libAVFilter_Stop(libAVFilter *this)
long WINAPI
libAVFilter_Pause(libAVFilter *this)
long WINAPI
libAVFilter_Run(libAVFilter *this, REFERENCE_TIME start)
long WINAPI
libAVFilter_GetState(libAVFilter *this, DWORD ms, FILTER_STATE *state)
long WINAPI
libAVFilter_SetSyncSource(libAVFilter *this, IReferenceClock *clock)
long WINAPI
libAVFilter_GetSyncSource(libAVFilter *this, IReferenceClock **clock)
long WINAPI
libAVFilter_EnumPins(libAVFilter *this, IEnumPins **enumpin)
long WINAPI
libAVFilter_FindPin(libAVFilter *this, const wchar_t *id, IPin **pin)
long WINAPI
libAVFilter_QueryFilterInfo(libAVFilter *this, FILTER_INFO *info)
long WINAPI
libAVFilter_JoinFilterGraph(libAVFilter *this, IFilterGraph *graph,
const wchar_t *name)
long WINAPI
libAVFilter_QueryVendorInfo(libAVFilter *this, wchar_t **info)
static int
libAVFilter_Setup(libAVFilter *this, void *priv_data, void *callback,
enum dshowDeviceType type)
static int
libAVFilter_Cleanup(libAVFilter *this)
DECLARE_CREATE(libAVFilter, libAVFilter_Setup(this, priv_data, callback, type),
void *priv_data, void *callback, enum dshowDeviceType type)
DECLARE_DESTROY(libAVFilter, libAVFilter_Cleanup)
