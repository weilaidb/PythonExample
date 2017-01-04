DECLARE_QUERYINTERFACE(libAVEnumMediaTypes,
)
DECLARE_ADDREF(libAVEnumMediaTypes)
DECLARE_RELEASE(libAVEnumMediaTypes)
long WINAPI
libAVEnumMediaTypes_Next(libAVEnumMediaTypes *this, unsigned long n,
AM_MEDIA_TYPE **types, unsigned long *fetched)
long WINAPI
libAVEnumMediaTypes_Skip(libAVEnumMediaTypes *this, unsigned long n)
long WINAPI
libAVEnumMediaTypes_Reset(libAVEnumMediaTypes *this)
long WINAPI
libAVEnumMediaTypes_Clone(libAVEnumMediaTypes *this, libAVEnumMediaTypes **enums)
static int
libAVEnumMediaTypes_Setup(libAVEnumMediaTypes *this, const AM_MEDIA_TYPE *type)
DECLARE_CREATE(libAVEnumMediaTypes, libAVEnumMediaTypes_Setup(this, type), const AM_MEDIA_TYPE *type)
DECLARE_DESTROY(libAVEnumMediaTypes, nothing)
