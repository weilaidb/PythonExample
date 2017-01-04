#define ocl_open LoadLibraryW( L"OpenCL" )
#define ocl_close FreeLibrary
#define ocl_address GetProcAddress
#if SYS_MACOSX
#define ocl_open dlopen( "/System/Library/Frameworks/OpenCL.framework/OpenCL", RTLD_NOW )
#define ocl_open dlopen( "libOpenCL.so", RTLD_NOW )
#define ocl_close dlclose
#define ocl_address dlsym
#define LOAD_OCL_FUNC(name, continue_on_fail)\
x264_opencl_function_t *x264_opencl_load_library( void )
void x264_opencl_close_library( x264_opencl_function_t *ocl )
#define CL_DEVICE_SIMD_INSTRUCTION_WIDTH_AMD        0x4042
static int x264_detect_switchable_graphics( void );
static cl_program x264_opencl_cache_load( x264_t *h, const char *dev_name, const char *dev_vendor, const char *driver_version )
static void x264_opencl_cache_save( x264_t *h, cl_program program, const char *dev_name, const char *dev_vendor, const char *driver_version )
static cl_program x264_opencl_compile( x264_t *h )
static int x264_opencl_lookahead_alloc( x264_t *h )
static void CL_CALLBACK x264_opencl_error_notify( const char *errinfo, const void *private_info, size_t cb, void *user_data )
int x264_opencl_lookahead_init( x264_t *h )
static void x264_opencl_lookahead_free( x264_t *h )
void x264_opencl_lookahead_delete( x264_t *h )
void x264_opencl_frame_delete( x264_frame_t *frame )
#define ADL_API_CALL
#define ADL_CALLBACK __stdcall
#define adl_close FreeLibrary
#define adl_address GetProcAddress
#define ADL_API_CALL
#define ADL_CALLBACK
#define adl_close dlclose
#define adl_address dlsym
typedef void* ( ADL_CALLBACK *ADL_MAIN_MALLOC_CALLBACK )( int );
typedef int   ( ADL_API_CALL *ADL_MAIN_CONTROL_CREATE )( ADL_MAIN_MALLOC_CALLBACK, int );
typedef int   ( ADL_API_CALL *ADL_ADAPTER_NUMBEROFADAPTERS_GET )( int * );
typedef int   ( ADL_API_CALL *ADL_POWERXPRESS_SCHEME_GET )( int, int *, int *, int * );
typedef int   ( ADL_API_CALL *ADL_MAIN_CONTROL_DESTROY )( void );
#define ADL_OK 0
#define ADL_PX_SCHEME_DYNAMIC 2
static void* ADL_CALLBACK adl_malloc_wrapper( int iSize )
static int x264_detect_switchable_graphics( void )
