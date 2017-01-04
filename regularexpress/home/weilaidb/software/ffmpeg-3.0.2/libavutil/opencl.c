#if HAVE_THREADS
static pthread_mutex_t * volatile atomic_opencl_lock = NULL;
#define LOCK_OPENCL pthread_mutex_lock(atomic_opencl_lock)
#define UNLOCK_OPENCL pthread_mutex_unlock(atomic_opencl_lock)
#define LOCK_OPENCL
#define UNLOCK_OPENCL
#define MAX_KERNEL_CODE_NUM 200
typedef struct  KernelCode;
typedef struct  OpenclContext;
#define OFFSET(x) offsetof(OpenclContext, x)
static const AVOption opencl_options[] = ;
static const AVClass openclutils_class = ;
static OpenclContext opencl_ctx = ;
static const cl_device_type device_type[] = ;
typedef struct  OpenclErrorMsg;
static const OpenclErrorMsg opencl_err_msg[] = ;
const char *av_opencl_errstr(cl_int status)
static void free_device_list(AVOpenCLDeviceList *device_list)
static int get_device_list(AVOpenCLDeviceList *device_list)
int av_opencl_get_device_list(AVOpenCLDeviceList **device_list)
void av_opencl_free_device_list(AVOpenCLDeviceList **device_list)
static inline int init_opencl_mtx(void)
int av_opencl_set_option(const char *key, const char *val)
int av_opencl_get_option(const char *key, uint8_t **out_val)
void av_opencl_free_option(void)
AVOpenCLExternalEnv *av_opencl_alloc_external_env(void)
void av_opencl_free_external_env(AVOpenCLExternalEnv **ext_opencl_env)
int av_opencl_register_kernel_code(const char *kernel_code)
cl_program av_opencl_compile(const char *program_name, const char *build_opts)
cl_command_queue av_opencl_get_command_queue(void)
static int init_opencl_env(OpenclContext *opencl_ctx, AVOpenCLExternalEnv *ext_opencl_env)
int av_opencl_init(AVOpenCLExternalEnv *ext_opencl_env)
void av_opencl_uninit(void)
int av_opencl_buffer_create(cl_mem *cl_buf, size_t cl_buf_size, int flags, void *host_ptr)
void av_opencl_buffer_release(cl_mem *cl_buf)
int av_opencl_buffer_write(cl_mem dst_cl_buf, uint8_t *src_buf, size_t buf_size)
int av_opencl_buffer_read(uint8_t *dst_buf, cl_mem src_cl_buf, size_t buf_size)
int av_opencl_buffer_write_image(cl_mem dst_cl_buf, size_t cl_buffer_size, int dst_cl_offset,
uint8_t **src_data, int *plane_size, int plane_num)
int av_opencl_buffer_read_image(uint8_t **dst_data, int *plane_size, int plane_num,
cl_mem src_cl_buf, size_t cl_buffer_size)
int64_t av_opencl_benchmark(AVOpenCLDeviceNode *device_node, cl_platform_id platform,
int64_t (*benchmark)(AVOpenCLExternalEnv *ext_opencl_env))
