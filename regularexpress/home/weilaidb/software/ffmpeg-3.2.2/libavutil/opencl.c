#if HAVE_THREADS
static pthread_mutex_t * volatile atomic_opencl_lock = NULL;
pthread_mutex_lock
pthread_mutex_unlock
#define LOCK_OPENCL
#define UNLOCK_OPENCL
#define MAX_KERNEL_CODE_NUM 200
typedef struct  KernelCode;
typedef struct  OpenclContext;
OFFSET offsetof(OpenclContext, x)
static const AVOption opencl_options[] = ;
static const AVClass openclutils_class = ;
static OpenclContext opencl_ctx = ;
static const cl_device_type device_type[] = ;
typedef struct  OpenclErrorMsg;
static const OpenclErrorMsg opencl_err_msg[] = ;
*av_opencl_errstr
free_device_list
get_device_list
av_opencl_get_device_list
av_opencl_free_device_list
init_opencl_mtx
av_opencl_set_option
av_opencl_get_option
av_opencl_free_option
*av_opencl_alloc_external_env
av_opencl_free_external_env
av_opencl_register_kernel_code
av_opencl_compile
av_opencl_get_command_queue
init_opencl_env
av_opencl_init
av_opencl_uninit
av_opencl_buffer_create
av_opencl_buffer_release
av_opencl_buffer_write
av_opencl_buffer_read
av_opencl_buffer_write_image
av_opencl_buffer_read_image
av_opencl_benchmark(AVOpenCLExternalEnv *ext_opencl_env))
