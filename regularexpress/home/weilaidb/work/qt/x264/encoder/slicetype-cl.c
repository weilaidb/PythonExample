#if HAVE_OPENCL
void x264_weights_analyse( x264_t *h, x264_frame_t *fenc, x264_frame_t *ref, int b_lookahead );
#define CL_QUEUE_THREAD_HANDLE_AMD 0x403E
#define OCLCHECK( method, ... )\
do\
while( 0 )
void x264_opencl_flush( x264_t *h )
static void *x264_opencl_alloc_locked( x264_t *h, int bytes )
int x264_opencl_lowres_init( x264_t *h, x264_frame_t *fenc, int lambda )
static void x264_optimal_launch_dims( x264_t *h, size_t *gdims, size_t *ldims, const cl_kernel kernel, const cl_device_id device )
int x264_opencl_motionsearch( x264_t *h, x264_frame_t **frames, int b, int ref, int b_islist1, int lambda, const x264_weight_t *w )
int x264_opencl_finalize_cost( x264_t *h, int lambda, x264_frame_t **frames, int p0, int p1, int b, int dist_scale_factor )
void x264_opencl_slicetype_prep( x264_t *h, x264_frame_t **frames, int num_frames, int lambda )
void x264_opencl_slicetype_end( x264_t *h )
int x264_opencl_precalculate_frame_cost( x264_t *h, x264_frame_t **frames, int lambda, int p0, int p1, int b )
