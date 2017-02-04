#define AVCODEC_NVENC_H
#if CONFIG_CUDA
defined
#define CUDAAPI __stdcall
#define CUDAAPI
typedef enum cudaError_enum  CUresult;
typedef int CUdevice;
typedef void* CUcontext;
typedef void* CUdeviceptr;
#define MAX_REGISTERED_FRAMES 64
typedef struct NvencSurface
NvencSurface;
CUresult(unsigned int Flags);
CUresult(int *count);
CUresult(CUdevice *device, int ordinal);
CUresult(char *name, int len, CUdevice dev);
CUresult(int *major, int *minor, CUdevice dev);
CUresult(CUcontext *pctx, unsigned int flags, CUdevice dev);
CUresult(CUcontext *pctx);
CUresult(CUcontext ctx);
typedef NVENCSTATUS (NVENCAPI *PNVENCODEAPIGETMAXSUPPORTEDVERSION)(uint32_t* version);
typedef NVENCSTATUS (NVENCAPI *PNVENCODEAPICREATEINSTANCE)(NV_ENCODE_API_FUNCTION_LIST *functionList);
typedef struct NvencDynLoadFunctions
NvencDynLoadFunctions;
enum ;
enum ;
enum ;
enum ;
enum ;
typedef struct NvencContext
NvencContext;
ff_nvenc_encode_init;
ff_nvenc_encode_close;
ff_nvenc_encode_frame;
extern const enum AVPixelFormat ff_nvenc_pix_fmts[];
