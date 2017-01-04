#define AVCODEC_NVENC_H
#if CONFIG_CUDA
#if defined(_WIN32)
#define CUDAAPI __stdcall
#define CUDAAPI
typedef enum cudaError_enum  CUresult;
typedef int CUdevice;
typedef void* CUcontext;
typedef void* CUdeviceptr;
#define MAX_REGISTERED_FRAMES 64
typedef struct NvencSurface
NvencSurface;
typedef CUresult(CUDAAPI *PCUINIT)(unsigned int Flags);
typedef CUresult(CUDAAPI *PCUDEVICEGETCOUNT)(int *count);
typedef CUresult(CUDAAPI *PCUDEVICEGET)(CUdevice *device, int ordinal);
typedef CUresult(CUDAAPI *PCUDEVICEGETNAME)(char *name, int len, CUdevice dev);
typedef CUresult(CUDAAPI *PCUDEVICECOMPUTECAPABILITY)(int *major, int *minor, CUdevice dev);
typedef CUresult(CUDAAPI *PCUCTXCREATE)(CUcontext *pctx, unsigned int flags, CUdevice dev);
typedef CUresult(CUDAAPI *PCUCTXPOPCURRENT)(CUcontext *pctx);
typedef CUresult(CUDAAPI *PCUCTXDESTROY)(CUcontext ctx);
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
int ff_nvenc_encode_init(AVCodecContext *avctx);
int ff_nvenc_encode_close(AVCodecContext *avctx);
int ff_nvenc_encode_frame(AVCodecContext *avctx, AVPacket *pkt,
const AVFrame *frame, int *got_packet);
extern const enum AVPixelFormat ff_nvenc_pix_fmts[];
