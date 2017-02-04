#define _NV_ENCODEAPI_H_
typedef __int32 int32_t;
typedef unsigned __int32 uint32_t;
typedef __int64 int64_t;
typedef unsigned __int64 uint64_t;
typedef signed char int8_t;
typedef unsigned char uint8_t;
typedef short int16_t;
typedef unsigned short uint16_t;
defined || defined(__CYGWIN__)
#define NVENCAPI __stdcall
#define NVENCAPI
typedef RECT NVENC_RECT;
typedef struct
GUID;
typedef struct _NVENC_RECT
NVENC_RECT;
typedef void* NV_ENC_INPUT_PTR;
typedef void* NV_ENC_OUTPUT_PTR;
typedef void* NV_ENC_REGISTERED_PTR;
#define NVENCAPI_MAJOR_VERSION 7
#define NVENCAPI_MINOR_VERSION 0
#define NVENCAPI_VERSION (NVENCAPI_MAJOR_VERSION | (NVENCAPI_MINOR_VERSION << 24))
NVENCAPI_STRUCT_VERSION ((uint32_t)NVENCAPI_VERSION | ((ver)<<16) | (0x7 << 28))
#define NVENC_INFINITE_GOPLENGTH  0xffffffff
#define NV_MAX_SEQ_HDR_LEN  (512)
static const GUID NV_ENC_CODEC_H264_GUID =
;
static const GUID NV_ENC_CODEC_HEVC_GUID =
;
static const GUID NV_ENC_CODEC_PROFILE_AUTOSELECT_GUID =
;
static const GUID  NV_ENC_H264_PROFILE_BASELINE_GUID =
;
static const GUID  NV_ENC_H264_PROFILE_MAIN_GUID =
;
static const GUID NV_ENC_H264_PROFILE_HIGH_GUID =
;
static const GUID  NV_ENC_H264_PROFILE_HIGH_444_GUID =
;
static const GUID NV_ENC_H264_PROFILE_STEREO_GUID =
;
static const GUID NV_ENC_H264_PROFILE_SVC_TEMPORAL_SCALABILTY =
;
static const GUID NV_ENC_H264_PROFILE_PROGRESSIVE_HIGH_GUID =
;
static const GUID NV_ENC_H264_PROFILE_CONSTRAINED_HIGH_GUID =
;
static const GUID NV_ENC_HEVC_PROFILE_MAIN_GUID =
;
static const GUID NV_ENC_HEVC_PROFILE_MAIN10_GUID =
;
static const GUID NV_ENC_HEVC_PROFILE_FREXT_GUID =
;
static const GUID NV_ENC_PRESET_DEFAULT_GUID =
;
static const GUID NV_ENC_PRESET_HP_GUID =
;
static const GUID NV_ENC_PRESET_HQ_GUID =
;
static const GUID NV_ENC_PRESET_BD_GUID  =
;
static const GUID NV_ENC_PRESET_LOW_LATENCY_DEFAULT_GUID  =
;
static const GUID NV_ENC_PRESET_LOW_LATENCY_HQ_GUID  =
;
static const GUID NV_ENC_PRESET_LOW_LATENCY_HP_GUID =
;
static const GUID NV_ENC_PRESET_LOSSLESS_DEFAULT_GUID =
;
static const GUID NV_ENC_PRESET_LOSSLESS_HP_GUID =
;
typedef enum _NV_ENC_PARAMS_FRAME_FIELD_MODE
NV_ENC_PARAMS_FRAME_FIELD_MODE;
typedef enum _NV_ENC_PARAMS_RC_MODE
NV_ENC_PARAMS_RC_MODE;
#define NV_ENC_PARAMS_RC_CBR2   NV_ENC_PARAMS_RC_CBR
typedef enum _NV_ENC_PIC_STRUCT
NV_ENC_PIC_STRUCT;
typedef enum _NV_ENC_PIC_TYPE
NV_ENC_PIC_TYPE;
typedef enum _NV_ENC_MV_PRECISION
NV_ENC_MV_PRECISION;
typedef enum _NV_ENC_BUFFER_FORMAT
NV_ENC_BUFFER_FORMAT;
#define NV_ENC_BUFFER_FORMAT_NV12_PL NV_ENC_BUFFER_FORMAT_NV12
#define NV_ENC_BUFFER_FORMAT_YV12_PL NV_ENC_BUFFER_FORMAT_YV12
#define NV_ENC_BUFFER_FORMAT_IYUV_PL NV_ENC_BUFFER_FORMAT_IYUV
#define NV_ENC_BUFFER_FORMAT_YUV444_PL NV_ENC_BUFFER_FORMAT_YUV444
typedef enum _NV_ENC_LEVEL
NV_ENC_LEVEL;
typedef enum _NVENCSTATUS
NVENCSTATUS;
typedef enum _NV_ENC_PIC_FLAGS
NV_ENC_PIC_FLAGS;
typedef enum _NV_ENC_MEMORY_HEAP
NV_ENC_MEMORY_HEAP;
typedef enum _NV_ENC_H264_ENTROPY_CODING_MODE
NV_ENC_H264_ENTROPY_CODING_MODE;
typedef enum _NV_ENC_H264_BDIRECT_MODE
NV_ENC_H264_BDIRECT_MODE;
typedef enum _NV_ENC_H264_FMO_MODE
NV_ENC_H264_FMO_MODE;
typedef enum _NV_ENC_H264_ADAPTIVE_TRANSFORM_MODE
NV_ENC_H264_ADAPTIVE_TRANSFORM_MODE;
typedef enum _NV_ENC_STEREO_PACKING_MODE
NV_ENC_STEREO_PACKING_MODE;
typedef enum _NV_ENC_INPUT_RESOURCE_TYPE
NV_ENC_INPUT_RESOURCE_TYPE;
typedef enum _NV_ENC_DEVICE_TYPE
NV_ENC_DEVICE_TYPE;
typedef enum _NV_ENC_CAPS
NV_ENC_CAPS;
typedef enum _NV_ENC_HEVC_CUSIZE
NV_ENC_HEVC_CUSIZE;
typedef struct _NV_ENC_CAPS_PARAM
NV_ENC_CAPS_PARAM;
NVENCAPI_STRUCT_VERSION
typedef struct _NV_ENC_CREATE_INPUT_BUFFER
NV_ENC_CREATE_INPUT_BUFFER;
NVENCAPI_STRUCT_VERSION
typedef struct _NV_ENC_CREATE_BITSTREAM_BUFFER
NV_ENC_CREATE_BITSTREAM_BUFFER;
NVENCAPI_STRUCT_VERSION
typedef struct _NV_ENC_MVECTOR
NV_ENC_MVECTOR;
typedef struct _NV_ENC_H264_MV_DATA
NV_ENC_H264_MV_DATA;
typedef struct _NV_ENC_HEVC_MV_DATA
NV_ENC_HEVC_MV_DATA;
typedef struct _NV_ENC_CREATE_MV_BUFFER
NV_ENC_CREATE_MV_BUFFER;
NVENCAPI_STRUCT_VERSION
typedef struct _NV_ENC_QP
NV_ENC_QP;
typedef struct _NV_ENC_RC_PARAMS
NV_ENC_RC_PARAMS;
NVENCAPI_STRUCT_VERSION
typedef struct _NV_ENC_CONFIG_H264_VUI_PARAMETERS
NV_ENC_CONFIG_H264_VUI_PARAMETERS;
typedef NV_ENC_CONFIG_H264_VUI_PARAMETERS NV_ENC_CONFIG_HEVC_VUI_PARAMETERS;
typedef struct _NVENC_EXTERNAL_ME_HINT_COUNTS_PER_BLOCKTYPE
NVENC_EXTERNAL_ME_HINT_COUNTS_PER_BLOCKTYPE;
typedef struct _NVENC_EXTERNAL_ME_HINT
NVENC_EXTERNAL_ME_HINT;
typedef struct _NV_ENC_CONFIG_H264
NV_ENC_CONFIG_H264;
typedef struct _NV_ENC_CONFIG_HEVC
NV_ENC_CONFIG_HEVC;
typedef union _NV_ENC_CODEC_CONFIG
NV_ENC_CODEC_CONFIG;
typedef struct _NV_ENC_CONFIG
NV_ENC_CONFIG;
#define NV_ENC_CONFIG_VER (NVENCAPI_STRUCT_VERSION(6) | ( 1<<31 ))
typedef struct _NV_ENC_INITIALIZE_PARAMS
NV_ENC_INITIALIZE_PARAMS;
#define NV_ENC_INITIALIZE_PARAMS_VER (NVENCAPI_STRUCT_VERSION(5) | ( 1<<31 ))
typedef struct _NV_ENC_RECONFIGURE_PARAMS
NV_ENC_RECONFIGURE_PARAMS;
#define NV_ENC_RECONFIGURE_PARAMS_VER (NVENCAPI_STRUCT_VERSION(1) | ( 1<<31 ))
typedef struct _NV_ENC_PRESET_CONFIG
NV_ENC_PRESET_CONFIG;
#define NV_ENC_PRESET_CONFIG_VER (NVENCAPI_STRUCT_VERSION(4) | ( 1<<31 ))
typedef struct _NV_ENC_SEI_PAYLOAD
NV_ENC_SEI_PAYLOAD;
#define NV_ENC_H264_SEI_PAYLOAD NV_ENC_SEI_PAYLOAD
typedef struct _NV_ENC_PIC_PARAMS_H264
NV_ENC_PIC_PARAMS_H264;
typedef struct _NV_ENC_PIC_PARAMS_HEVC
NV_ENC_PIC_PARAMS_HEVC;
typedef union _NV_ENC_CODEC_PIC_PARAMS
NV_ENC_CODEC_PIC_PARAMS;
typedef struct _NV_ENC_PIC_PARAMS
NV_ENC_PIC_PARAMS;
#define NV_ENC_PIC_PARAMS_VER (NVENCAPI_STRUCT_VERSION(4) | ( 1<<31 ))
typedef struct _NV_ENC_MEONLY_PARAMS
NV_ENC_MEONLY_PARAMS;
NVENCAPI_STRUCT_VERSION
typedef struct _NV_ENC_LOCK_BITSTREAM
NV_ENC_LOCK_BITSTREAM;
NVENCAPI_STRUCT_VERSION
typedef struct _NV_ENC_LOCK_INPUT_BUFFER
NV_ENC_LOCK_INPUT_BUFFER;
NVENCAPI_STRUCT_VERSION
typedef struct _NV_ENC_MAP_INPUT_RESOURCE
NV_ENC_MAP_INPUT_RESOURCE;
NVENCAPI_STRUCT_VERSION
typedef struct _NV_ENC_REGISTER_RESOURCE
NV_ENC_REGISTER_RESOURCE;
NVENCAPI_STRUCT_VERSION
typedef struct _NV_ENC_STAT
NV_ENC_STAT;
NVENCAPI_STRUCT_VERSION
typedef struct _NV_ENC_SEQUENCE_PARAM_PAYLOAD
NV_ENC_SEQUENCE_PARAM_PAYLOAD;
NVENCAPI_STRUCT_VERSION
typedef struct _NV_ENC_EVENT_PARAMS
NV_ENC_EVENT_PARAMS;
NVENCAPI_STRUCT_VERSION
typedef struct _NV_ENC_OPEN_ENCODE_SESSIONEX_PARAMS
NV_ENC_OPEN_ENCODE_SESSION_EX_PARAMS;
NVENCAPI_STRUCT_VERSION
NVENCSTATUS NVENCAPI NvEncOpenEncodeSession                     (void* device, uint32_t deviceType, void** encoder);
NVENCSTATUS NVENCAPI NvEncGetEncodeGUIDCount                    (void* encoder, uint32_t* encodeGUIDCount);
NVENCSTATUS NVENCAPI NvEncGetEncodeGUIDs                        (void* encoder, GUID* GUIDs, uint32_t guidArraySize, uint32_t* GUIDCount);
NVENCSTATUS NVENCAPI NvEncGetEncodeProfileGUIDCount                    (void* encoder, GUID encodeGUID, uint32_t* encodeProfileGUIDCount);
NVENCSTATUS NVENCAPI NvEncGetEncodeProfileGUIDs                               (void* encoder, GUID encodeGUID, GUID* profileGUIDs, uint32_t guidArraySize, uint32_t* GUIDCount);
NVENCSTATUS NVENCAPI NvEncGetInputFormatCount                   (void* encoder, GUID encodeGUID, uint32_t* inputFmtCount);
NVENCSTATUS NVENCAPI NvEncGetInputFormats                       (void* encoder, GUID encodeGUID, NV_ENC_BUFFER_FORMAT* inputFmts, uint32_t inputFmtArraySize, uint32_t* inputFmtCount);
NVENCSTATUS NVENCAPI NvEncGetEncodeCaps                     (void* encoder, GUID encodeGUID, NV_ENC_CAPS_PARAM* capsParam, int* capsVal);
NVENCSTATUS NVENCAPI NvEncGetEncodePresetCount              (void* encoder, GUID encodeGUID, uint32_t* encodePresetGUIDCount);
NVENCSTATUS NVENCAPI NvEncGetEncodePresetGUIDs                  (void* encoder, GUID encodeGUID, GUID* presetGUIDs, uint32_t guidArraySize, uint32_t* encodePresetGUIDCount);
NVENCSTATUS NVENCAPI NvEncGetEncodePresetConfig               (void* encoder, GUID encodeGUID, GUID  presetGUID, NV_ENC_PRESET_CONFIG* presetConfig);
NVENCSTATUS NVENCAPI NvEncInitializeEncoder                     (void* encoder, NV_ENC_INITIALIZE_PARAMS* createEncodeParams);
NVENCSTATUS NVENCAPI NvEncCreateInputBuffer                     (void* encoder, NV_ENC_CREATE_INPUT_BUFFER* createInputBufferParams);
NVENCSTATUS NVENCAPI NvEncDestroyInputBuffer                    (void* encoder, NV_ENC_INPUT_PTR inputBuffer);
NVENCSTATUS NVENCAPI NvEncCreateBitstreamBuffer                 (void* encoder, NV_ENC_CREATE_BITSTREAM_BUFFER* createBitstreamBufferParams);
NVENCSTATUS NVENCAPI NvEncDestroyBitstreamBuffer                (void* encoder, NV_ENC_OUTPUT_PTR bitstreamBuffer);
NVENCSTATUS NVENCAPI NvEncEncodePicture                         (void* encoder, NV_ENC_PIC_PARAMS* encodePicParams);
NVENCSTATUS NVENCAPI NvEncLockBitstream                         (void* encoder, NV_ENC_LOCK_BITSTREAM* lockBitstreamBufferParams);
NVENCSTATUS NVENCAPI NvEncUnlockBitstream                       (void* encoder, NV_ENC_OUTPUT_PTR bitstreamBuffer);
NVENCSTATUS NVENCAPI NvEncLockInputBuffer                      (void* encoder, NV_ENC_LOCK_INPUT_BUFFER* lockInputBufferParams);
NVENCSTATUS NVENCAPI NvEncUnlockInputBuffer                     (void* encoder, NV_ENC_INPUT_PTR inputBuffer);
NVENCSTATUS NVENCAPI NvEncGetEncodeStats                        (void* encoder, NV_ENC_STAT* encodeStats);
NVENCSTATUS NVENCAPI NvEncGetSequenceParams                     (void* encoder, NV_ENC_SEQUENCE_PARAM_PAYLOAD* sequenceParamPayload);
NVENCSTATUS NVENCAPI NvEncRegisterAsyncEvent                    (void* encoder, NV_ENC_EVENT_PARAMS* eventParams);
NVENCSTATUS NVENCAPI NvEncUnregisterAsyncEvent                  (void* encoder, NV_ENC_EVENT_PARAMS* eventParams);
NVENCSTATUS NVENCAPI NvEncMapInputResource                         (void* encoder, NV_ENC_MAP_INPUT_RESOURCE* mapInputResParams);
NVENCSTATUS NVENCAPI NvEncUnmapInputResource                         (void* encoder, NV_ENC_INPUT_PTR mappedInputBuffer);
NVENCSTATUS NVENCAPI NvEncDestroyEncoder                        (void* encoder);
NvEncInvalidateRefFrames;
NVENCSTATUS NVENCAPI NvEncOpenEncodeSessionEx                   (NV_ENC_OPEN_ENCODE_SESSION_EX_PARAMS *openSessionExParams, void** encoder);
NVENCSTATUS NVENCAPI NvEncRegisterResource                      (void* encoder, NV_ENC_REGISTER_RESOURCE* registerResParams);
NVENCSTATUS NVENCAPI NvEncUnregisterResource                    (void* encoder, NV_ENC_REGISTERED_PTR registeredResource);
NVENCSTATUS NVENCAPI NvEncReconfigureEncoder                   (void *encoder, NV_ENC_RECONFIGURE_PARAMS* reInitEncodeParams);
NVENCSTATUS NVENCAPI NvEncCreateMVBuffer                        (void* encoder, NV_ENC_CREATE_MV_BUFFER* createMVBufferParams);
NVENCSTATUS NVENCAPI NvEncDestroyMVBuffer                       (void* encoder, NV_ENC_OUTPUT_PTR mvBuffer);
NVENCSTATUS NVENCAPI NvEncRunMotionEstimationOnly               (void* encoder, NV_ENC_MEONLY_PARAMS* meOnlyParams);
NVENCSTATUS NVENCAPI NvEncodeAPIGetMaxSupportedVersion          (uint32_t* version);
typedef NVENCSTATUS (NVENCAPI* PNVENCOPENENCODESESSION)         (void* device, uint32_t deviceType, void** encoder);
typedef NVENCSTATUS (NVENCAPI* PNVENCGETENCODEGUIDCOUNT)        (void* encoder, uint32_t* encodeGUIDCount);
typedef NVENCSTATUS (NVENCAPI* PNVENCGETENCODEGUIDS)            (void* encoder, GUID* GUIDs, uint32_t guidArraySize, uint32_t* GUIDCount);
typedef NVENCSTATUS (NVENCAPI* PNVENCGETENCODEPROFILEGUIDCOUNT) (void* encoder, GUID encodeGUID, uint32_t* encodeProfileGUIDCount);
typedef NVENCSTATUS (NVENCAPI* PNVENCGETENCODEPROFILEGUIDS)     (void* encoder, GUID encodeGUID, GUID* profileGUIDs, uint32_t guidArraySize, uint32_t* GUIDCount);
typedef NVENCSTATUS (NVENCAPI* PNVENCGETINPUTFORMATCOUNT)       (void* encoder, GUID encodeGUID, uint32_t* inputFmtCount);
typedef NVENCSTATUS (NVENCAPI* PNVENCGETINPUTFORMATS)           (void* encoder, GUID encodeGUID, NV_ENC_BUFFER_FORMAT* inputFmts, uint32_t inputFmtArraySize, uint32_t* inputFmtCount);
typedef NVENCSTATUS (NVENCAPI* PNVENCGETENCODECAPS)             (void* encoder, GUID encodeGUID, NV_ENC_CAPS_PARAM* capsParam, int* capsVal);
typedef NVENCSTATUS (NVENCAPI* PNVENCGETENCODEPRESETCOUNT)      (void* encoder, GUID encodeGUID, uint32_t* encodePresetGUIDCount);
typedef NVENCSTATUS (NVENCAPI* PNVENCGETENCODEPRESETGUIDS)      (void* encoder, GUID encodeGUID, GUID* presetGUIDs, uint32_t guidArraySize, uint32_t* encodePresetGUIDCount);
typedef NVENCSTATUS (NVENCAPI* PNVENCGETENCODEPRESETCONFIG)     (void* encoder, GUID encodeGUID, GUID  presetGUID, NV_ENC_PRESET_CONFIG* presetConfig);
typedef NVENCSTATUS (NVENCAPI* PNVENCINITIALIZEENCODER)         (void* encoder, NV_ENC_INITIALIZE_PARAMS* createEncodeParams);
typedef NVENCSTATUS (NVENCAPI* PNVENCCREATEINPUTBUFFER)         (void* encoder, NV_ENC_CREATE_INPUT_BUFFER* createInputBufferParams);
typedef NVENCSTATUS (NVENCAPI* PNVENCDESTROYINPUTBUFFER)        (void* encoder, NV_ENC_INPUT_PTR inputBuffer);
typedef NVENCSTATUS (NVENCAPI* PNVENCCREATEBITSTREAMBUFFER)     (void* encoder, NV_ENC_CREATE_BITSTREAM_BUFFER* createBitstreamBufferParams);
typedef NVENCSTATUS (NVENCAPI* PNVENCDESTROYBITSTREAMBUFFER)    (void* encoder, NV_ENC_OUTPUT_PTR bitstreamBuffer);
typedef NVENCSTATUS (NVENCAPI* PNVENCENCODEPICTURE)             (void* encoder, NV_ENC_PIC_PARAMS* encodePicParams);
typedef NVENCSTATUS (NVENCAPI* PNVENCLOCKBITSTREAM)             (void* encoder, NV_ENC_LOCK_BITSTREAM* lockBitstreamBufferParams);
typedef NVENCSTATUS (NVENCAPI* PNVENCUNLOCKBITSTREAM)           (void* encoder, NV_ENC_OUTPUT_PTR bitstreamBuffer);
typedef NVENCSTATUS (NVENCAPI* PNVENCLOCKINPUTBUFFER)           (void* encoder, NV_ENC_LOCK_INPUT_BUFFER* lockInputBufferParams);
typedef NVENCSTATUS (NVENCAPI* PNVENCUNLOCKINPUTBUFFER)         (void* encoder, NV_ENC_INPUT_PTR inputBuffer);
typedef NVENCSTATUS (NVENCAPI* PNVENCGETENCODESTATS)            (void* encoder, NV_ENC_STAT* encodeStats);
typedef NVENCSTATUS (NVENCAPI* PNVENCGETSEQUENCEPARAMS)         (void* encoder, NV_ENC_SEQUENCE_PARAM_PAYLOAD* sequenceParamPayload);
typedef NVENCSTATUS (NVENCAPI* PNVENCREGISTERASYNCEVENT)        (void* encoder, NV_ENC_EVENT_PARAMS* eventParams);
typedef NVENCSTATUS (NVENCAPI* PNVENCUNREGISTERASYNCEVENT)      (void* encoder, NV_ENC_EVENT_PARAMS* eventParams);
typedef NVENCSTATUS (NVENCAPI* PNVENCMAPINPUTRESOURCE)          (void* encoder, NV_ENC_MAP_INPUT_RESOURCE* mapInputResParams);
typedef NVENCSTATUS (NVENCAPI* PNVENCUNMAPINPUTRESOURCE)        (void* encoder, NV_ENC_INPUT_PTR mappedInputBuffer);
typedef NVENCSTATUS (NVENCAPI* PNVENCDESTROYENCODER)            (void* encoder);
typedef NVENCSTATUS (NVENCAPI* PNVENCINVALIDATEREFFRAMES)       (void* encoder, uint64_t invalidRefFrameTimeStamp);
typedef NVENCSTATUS (NVENCAPI* PNVENCOPENENCODESESSIONEX)       (NV_ENC_OPEN_ENCODE_SESSION_EX_PARAMS *openSessionExParams, void** encoder);
typedef NVENCSTATUS (NVENCAPI* PNVENCREGISTERRESOURCE)          (void* encoder, NV_ENC_REGISTER_RESOURCE* registerResParams);
typedef NVENCSTATUS (NVENCAPI* PNVENCUNREGISTERRESOURCE)        (void* encoder, NV_ENC_REGISTERED_PTR registeredRes);
typedef NVENCSTATUS (NVENCAPI* PNVENCRECONFIGUREENCODER)        (void* encoder, NV_ENC_RECONFIGURE_PARAMS* reInitEncodeParams);
typedef NVENCSTATUS (NVENCAPI* PNVENCCREATEMVBUFFER)            (void* encoder, NV_ENC_CREATE_MV_BUFFER* createMVBufferParams);
typedef NVENCSTATUS (NVENCAPI* PNVENCDESTROYMVBUFFER)           (void* encoder, NV_ENC_OUTPUT_PTR mvBuffer);
typedef NVENCSTATUS (NVENCAPI* PNVENCRUNMOTIONESTIMATIONONLY)   (void* encoder, NV_ENC_MEONLY_PARAMS* meOnlyParams);
typedef struct _NV_ENCODE_API_FUNCTION_LIST
NV_ENCODE_API_FUNCTION_LIST;
NVENCAPI_STRUCT_VERSION
NvEncodeAPICreateInstance;
