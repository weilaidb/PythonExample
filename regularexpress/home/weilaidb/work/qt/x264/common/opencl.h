#define X264_OPENCL_H
#define CL_USE_DEPRECATED_OPENCL_1_1_APIS
#define OCL_API(ret, attr, name) typedef ret (attr *name##_func)
OCL_API(cl_int, CL_API_CALL, clGetPlatformIDs)
(   cl_uint,
cl_platform_id *,
cl_uint *);
OCL_API(cl_int, CL_API_CALL, clGetPlatformInfo)
(   cl_platform_id,
cl_platform_info,
size_t,
void *,
size_t *);
OCL_API(cl_int, CL_API_CALL, clGetDeviceIDs)
(   cl_platform_id,
cl_device_type,
cl_uint,
cl_device_id *,
cl_uint *);
OCL_API(cl_int, CL_API_CALL, clGetDeviceInfo)
(   cl_device_id,
cl_device_info,
size_t,
void *,
size_t *);
OCL_API(cl_int, CL_API_CALL, clCreateSubDevices)
(   cl_device_id,
const cl_device_partition_property *,
cl_uint,
cl_device_id *,
cl_uint *);
OCL_API(cl_int, CL_API_CALL, clRetainDevice)
(   cl_device_id);
OCL_API(cl_int, CL_API_CALL, clReleaseDevice)
(   cl_device_id);
OCL_API(cl_context, CL_API_CALL, clCreateContext)
(   const cl_context_properties *,
cl_uint,
const cl_device_id *,
void (CL_CALLBACK *)(const char *, const void *, size_t, void *),
void *,
cl_int *);
OCL_API(cl_context, CL_API_CALL, clCreateContextFromType)
(   const cl_context_properties *,
cl_device_type,
void (CL_CALLBACK * )(const char *, const void *, size_t, void *),
void *,
cl_int *);
OCL_API(cl_int, CL_API_CALL, clRetainContext)
(   cl_context);
OCL_API(cl_int, CL_API_CALL, clReleaseContext)
(   cl_context);
OCL_API(cl_int, CL_API_CALL, clGetContextInfo)
(   cl_context,
cl_context_info,
size_t,
void *,
size_t *);
OCL_API(cl_command_queue, CL_API_CALL, clCreateCommandQueue)
(   cl_context,
cl_device_id,
cl_command_queue_properties,
cl_int *);
OCL_API(cl_int, CL_API_CALL, clRetainCommandQueue)
(   cl_command_queue);
OCL_API(cl_int, CL_API_CALL, clReleaseCommandQueue)
(   cl_command_queue);
OCL_API(cl_int, CL_API_CALL, clGetCommandQueueInfo)
(   cl_command_queue,
cl_command_queue_info,
size_t,
void *,
size_t *);
OCL_API(cl_mem, CL_API_CALL, clCreateBuffer)
(   cl_context,
cl_mem_flags,
size_t,
void *,
cl_int *);
OCL_API(cl_mem, CL_API_CALL, clCreateSubBuffer)
(   cl_mem,
cl_mem_flags,
cl_buffer_create_type,
const void *,
cl_int *);
OCL_API(cl_mem, CL_API_CALL, clCreateImage)
(   cl_context,
cl_mem_flags,
const cl_image_format *,
const cl_image_desc *,
void *,
cl_int *);
OCL_API(cl_int, CL_API_CALL, clRetainMemObject)
(   cl_mem);
OCL_API(cl_int, CL_API_CALL, clReleaseMemObject)
(   cl_mem);
OCL_API(cl_int, CL_API_CALL, clGetSupportedImageFormats)
(   cl_context,
cl_mem_flags,
cl_mem_object_type,
cl_uint,
cl_image_format *,
cl_uint *);
OCL_API(cl_int, CL_API_CALL, clGetMemObjectInfo)
(   cl_mem,
cl_mem_info,
size_t,
void *,
size_t *);
OCL_API(cl_int, CL_API_CALL, clGetImageInfo)
(   cl_mem,
cl_image_info,
size_t,
void *,
size_t *);
OCL_API(cl_int, CL_API_CALL, clSetMemObjectDestructorCallback)
(   cl_mem,
void (CL_CALLBACK *)( cl_mem, void*),
void * );
OCL_API(cl_sampler, CL_API_CALL, clCreateSampler)
(   cl_context,
cl_bool,
cl_addressing_mode,
cl_filter_mode,
cl_int *);
OCL_API(cl_int, CL_API_CALL, clRetainSampler)
(   cl_sampler);
OCL_API(cl_int, CL_API_CALL, clReleaseSampler)
(   cl_sampler);
OCL_API(cl_int, CL_API_CALL, clGetSamplerInfo)
(   cl_sampler,
cl_sampler_info,
size_t,
void *,
size_t *);
OCL_API(cl_program, CL_API_CALL, clCreateProgramWithSource)
(   cl_context,
cl_uint,
const char **,
const size_t *,
cl_int *);
OCL_API(cl_program, CL_API_CALL, clCreateProgramWithBinary)
(   cl_context,
cl_uint,
const cl_device_id *,
const size_t *,
const unsigned char **,
cl_int *,
cl_int *);
OCL_API(cl_program, CL_API_CALL, clCreateProgramWithBuiltInKernels)
(   cl_context,
cl_uint,
const cl_device_id *,
const char *,
cl_int *);
OCL_API(cl_int, CL_API_CALL, clRetainProgram)
(   cl_program);
OCL_API(cl_int, CL_API_CALL, clReleaseProgram)
(   cl_program);
OCL_API(cl_int, CL_API_CALL, clBuildProgram)
(   cl_program,
cl_uint,
const cl_device_id *,
const char *,
void (CL_CALLBACK *)(cl_program, void *),
void *);
OCL_API(cl_int, CL_API_CALL, clCompileProgram)
(   cl_program,
cl_uint,
const cl_device_id *,
const char *,
cl_uint,
const cl_program *,
const char **,
void (CL_CALLBACK *)(cl_program, void *),
void *);
OCL_API(cl_program, CL_API_CALL, clLinkProgram)
(   cl_context,
cl_uint,
const cl_device_id *,
const char *,
cl_uint,
const cl_program *,
void (CL_CALLBACK *)(cl_program, void *),
void *,
cl_int * );
OCL_API(cl_int, CL_API_CALL, clUnloadPlatformCompiler)
(   cl_platform_id);
OCL_API(cl_int, CL_API_CALL, clGetProgramInfo)
(   cl_program,
cl_program_info,
size_t,
void *,
size_t *);
OCL_API(cl_int, CL_API_CALL, clGetProgramBuildInfo)
(   cl_program,
cl_device_id,
cl_program_build_info,
size_t,
void *,
size_t *);
OCL_API(cl_kernel, CL_API_CALL, clCreateKernel)
(   cl_program,
const char *,
cl_int *);
OCL_API(cl_int, CL_API_CALL, clCreateKernelsInProgram)
(   cl_program,
cl_uint,
cl_kernel *,
cl_uint *);
OCL_API(cl_int, CL_API_CALL, clRetainKernel)
(   cl_kernel);
OCL_API(cl_int, CL_API_CALL, clReleaseKernel)
(   cl_kernel);
OCL_API(cl_int, CL_API_CALL, clSetKernelArg)
(   cl_kernel,
cl_uint,
size_t,
const void *);
OCL_API(cl_int, CL_API_CALL, clGetKernelInfo)
(   cl_kernel,
cl_kernel_info,
size_t,
void *,
size_t *);
OCL_API(cl_int, CL_API_CALL, clGetKernelArgInfo)
(   cl_kernel,
cl_uint,
cl_kernel_arg_info,
size_t,
void *,
size_t *);
OCL_API(cl_int, CL_API_CALL, clGetKernelWorkGroupInfo)
(   cl_kernel,
cl_device_id,
cl_kernel_work_group_info,
size_t,
void *,
size_t *);
OCL_API(cl_int, CL_API_CALL, clWaitForEvents)
(   cl_uint,
const cl_event *);
OCL_API(cl_int, CL_API_CALL, clGetEventInfo)
(   cl_event,
cl_event_info,
size_t,
void *,
size_t *);
OCL_API(cl_event, CL_API_CALL, clCreateUserEvent)
(   cl_context,
cl_int *);
OCL_API(cl_int, CL_API_CALL, clRetainEvent)
(   cl_event);
OCL_API(cl_int, CL_API_CALL, clReleaseEvent)
(   cl_event);
OCL_API(cl_int, CL_API_CALL, clSetUserEventStatus)
(   cl_event,
cl_int);
OCL_API(cl_int, CL_API_CALL, clSetEventCallback)
(   cl_event,
cl_int,
void (CL_CALLBACK *)(cl_event, cl_int, void *),
void *);
OCL_API(cl_int, CL_API_CALL, clGetEventProfilingInfo)
(   cl_event,
cl_profiling_info,
size_t,
void *,
size_t *);
OCL_API(cl_int, CL_API_CALL, clFlush)
(   cl_command_queue);
OCL_API(cl_int, CL_API_CALL, clFinish)
(   cl_command_queue);
OCL_API(cl_int, CL_API_CALL, clEnqueueReadBuffer)
(   cl_command_queue,
cl_mem,
cl_bool,
size_t,
size_t,
void *,
cl_uint,
const cl_event *,
cl_event *);
OCL_API(cl_int, CL_API_CALL, clEnqueueReadBufferRect)
(   cl_command_queue,
cl_mem,
cl_bool,
const size_t *,
const size_t *,
const size_t *,
size_t,
size_t,
size_t,
size_t,
void *,
cl_uint,
const cl_event *,
cl_event *);
OCL_API(cl_int, CL_API_CALL, clEnqueueWriteBuffer)
(   cl_command_queue,
cl_mem,
cl_bool,
size_t,
size_t,
const void *,
cl_uint,
const cl_event *,
cl_event *);
OCL_API(cl_int, CL_API_CALL, clEnqueueWriteBufferRect)
(   cl_command_queue,
cl_mem,
cl_bool,
const size_t *,
const size_t *,
const size_t *,
size_t,
size_t,
size_t,
size_t,
const void *,
cl_uint,
const cl_event *,
cl_event *);
OCL_API(cl_int, CL_API_CALL, clEnqueueFillBuffer)
(   cl_command_queue,
cl_mem,
const void *,
size_t,
size_t,
size_t,
cl_uint,
const cl_event *,
cl_event *);
OCL_API(cl_int, CL_API_CALL, clEnqueueCopyBuffer)
(   cl_command_queue,
cl_mem,
cl_mem,
size_t,
size_t,
size_t,
cl_uint,
const cl_event *,
cl_event *);
OCL_API(cl_int, CL_API_CALL, clEnqueueCopyBufferRect)
(   cl_command_queue,
cl_mem,
cl_mem,
const size_t *,
const size_t *,
const size_t *,
size_t,
size_t,
size_t,
size_t,
cl_uint,
const cl_event *,
cl_event *);
OCL_API(cl_int, CL_API_CALL, clEnqueueReadImage)
(   cl_command_queue,
cl_mem,
cl_bool,
const size_t *,
const size_t *,
size_t,
size_t,
void *,
cl_uint,
const cl_event *,
cl_event *);
OCL_API(cl_int, CL_API_CALL, clEnqueueWriteImage)
(   cl_command_queue,
cl_mem,
cl_bool,
const size_t *,
const size_t *,
size_t,
size_t,
const void *,
cl_uint,
const cl_event *,
cl_event *);
OCL_API(cl_int, CL_API_CALL, clEnqueueFillImage)
(   cl_command_queue,
cl_mem,
const void *,
const size_t *,
const size_t *,
cl_uint,
const cl_event *,
cl_event *);
OCL_API(cl_int, CL_API_CALL, clEnqueueCopyImage)
(   cl_command_queue,
cl_mem,
cl_mem,
const size_t *,
const size_t *,
const size_t *,
cl_uint,
const cl_event *,
cl_event *);
OCL_API(cl_int, CL_API_CALL, clEnqueueCopyImageToBuffer)
(   cl_command_queue,
cl_mem,
cl_mem,
const size_t *,
const size_t *,
size_t,
cl_uint,
const cl_event *,
cl_event *);
OCL_API(cl_int, CL_API_CALL, clEnqueueCopyBufferToImage)
(   cl_command_queue,
cl_mem,
cl_mem,
size_t,
const size_t *,
const size_t *,
cl_uint,
const cl_event *,
cl_event *);
OCL_API(void *, CL_API_CALL, clEnqueueMapBuffer)
(   cl_command_queue,
cl_mem,
cl_bool,
cl_map_flags,
size_t,
size_t,
cl_uint,
const cl_event *,
cl_event *,
cl_int *);
OCL_API(void *, CL_API_CALL, clEnqueueMapImage)
(   cl_command_queue,
cl_mem,
cl_bool,
cl_map_flags,
const size_t *,
const size_t *,
size_t *,
size_t *,
cl_uint,
const cl_event *,
cl_event *,
cl_int *);
OCL_API(cl_int, CL_API_CALL, clEnqueueUnmapMemObject)
(   cl_command_queue,
cl_mem,
void *,
cl_uint,
const cl_event *,
cl_event *);
OCL_API(cl_int, CL_API_CALL, clEnqueueMigrateMemObjects)
(   cl_command_queue,
cl_uint,
const cl_mem *,
cl_mem_migration_flags,
cl_uint,
const cl_event *,
cl_event *);
OCL_API(cl_int, CL_API_CALL, clEnqueueNDRangeKernel)
(   cl_command_queue,
cl_kernel,
cl_uint,
const size_t *,
const size_t *,
const size_t *,
cl_uint,
const cl_event *,
cl_event *);
OCL_API(cl_int, CL_API_CALL, clEnqueueTask)
(   cl_command_queue,
cl_kernel,
cl_uint,
const cl_event *,
cl_event *);
OCL_API(cl_int, CL_API_CALL, clEnqueueNativeKernel)
(   cl_command_queue,
void (CL_CALLBACK *)(void *),
void *,
size_t,
cl_uint,
const cl_mem *,
const void **,
cl_uint,
const cl_event *,
cl_event *);
OCL_API(cl_int, CL_API_CALL, clEnqueueMarkerWithWaitList)
(   cl_command_queue,
cl_uint,
const cl_event *,
cl_event *);
OCL_API(cl_int, CL_API_CALL, clEnqueueBarrierWithWaitList)
(   cl_command_queue,
cl_uint,
const cl_event *,
cl_event *);
OCL_API(void *, CL_API_CALL, clGetExtensionFunctionAddressForPlatform)
(   cl_platform_id,
const char *);
OCL_API(cl_mem, CL_API_CALL, clCreateImage2D)
(   cl_context,
cl_mem_flags,
const cl_image_format *,
size_t,
size_t,
size_t,
void *,
cl_int *);
OCL_API(cl_mem, CL_API_CALL, clCreateImage3D)
(   cl_context,
cl_mem_flags,
const cl_image_format *,
size_t,
size_t,
size_t,
size_t,
size_t,
void *,
cl_int *);
OCL_API(cl_int, CL_API_CALL, clEnqueueMarker)
(   cl_command_queue,
cl_event *);
OCL_API(cl_int, CL_API_CALL, clEnqueueWaitForEvents)
(   cl_command_queue,
cl_uint,
const cl_event *);
OCL_API(cl_int, CL_API_CALL, clEnqueueBarrier)
(   cl_command_queue);
OCL_API(cl_int, CL_API_CALL, clUnloadCompiler)
(   void);
OCL_API(void *, CL_API_CALL, clGetExtensionFunctionAddress)
(   const char *);
#define OCL_DECLARE_FUNC(name) name##_func name
typedef struct
x264_opencl_function_t;
#define NUM_IMAGE_SCALES 4
#define MAX_FINISH_COPIES 1024
#define PAGE_LOCKED_BUF_SIZE 32 * 1024 * 1024
typedef struct
x264_opencl_t;
typedef struct
x264_frame_opencl_t;
typedef struct x264_frame x264_frame;
x264_opencl_function_t *x264_opencl_load_library( void );
void x264_opencl_close_library( x264_opencl_function_t *ocl );
int x264_opencl_lookahead_init( x264_t *h );
void x264_opencl_lookahead_delete( x264_t *h );
void x264_opencl_frame_delete( x264_frame *frame );
