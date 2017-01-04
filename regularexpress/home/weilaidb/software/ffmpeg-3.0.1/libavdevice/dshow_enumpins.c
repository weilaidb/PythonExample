DECLARE_QUERYINTERFACE(libAVEnumPins,
)
DECLARE_ADDREF(libAVEnumPins)
DECLARE_RELEASE(libAVEnumPins)
long WINAPI
libAVEnumPins_Next(libAVEnumPins *this, unsigned long n, IPin **pins,
unsigned long *fetched)
long WINAPI
libAVEnumPins_Skip(libAVEnumPins *this, unsigned long n)
long WINAPI
libAVEnumPins_Reset(libAVEnumPins *this)
long WINAPI
libAVEnumPins_Clone(libAVEnumPins *this, libAVEnumPins **pins)
static int
libAVEnumPins_Setup(libAVEnumPins *this, libAVPin *pin, libAVFilter *filter)
static int
libAVEnumPins_Cleanup(libAVEnumPins *this)
DECLARE_CREATE(libAVEnumPins, libAVEnumPins_Setup(this, pin, filter),
libAVPin *pin, libAVFilter *filter)
DECLARE_DESTROY(libAVEnumPins, libAVEnumPins_Cleanup)
