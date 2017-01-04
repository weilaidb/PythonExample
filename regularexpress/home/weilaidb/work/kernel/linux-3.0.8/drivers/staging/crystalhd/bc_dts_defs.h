#define _BC_DTS_DEFS_H_
#define BC_BIT(_x)		(1 << (_x))
enum BC_STATUS ;
#define BC_REG_KEY_MAIN_PATH	"Software\\Broadcom\\MediaPC\\70010"
#define BC_REG_KEY_FWPATH		"FirmwareFilePath"
#define BC_REG_KEY_SEC_OPT		"DbgOptions"
enum BC_SW_OPTIONS ;
struct BC_REG_CONFIG;
#if defined(__KERNEL__) || defined(__LINUX_USER__)
#define ALIGN(x)	__declspec(align(x))
enum DtsDeviceOpenMode ;
enum DtsDeviceFixMode ;
#define DTS_DFLT_RESOLUTION(x)	(x<<11)
#define DTS_DFLT_CLOCK(x) (x<<19)
enum FW_FILE_VER ;
enum DtsOpenDecStreamTypes ;
enum DtsSetVideoParamsAlgo ;
#define BC_MPEG_VALID_PANSCAN		(1)
struct BC_PIB_EXT_MPEG ;
#define H264_VALID_PANSCAN		(1)
#define H264_VALID_SPS_CROP		(2)
#define H264_VALID_VUI			(4)
struct BC_PIB_EXT_H264 ;
#define VC1_VALID_PANSCAN		(1)
struct BC_PIB_EXT_VC1 ;
#if defined(__LINUX_USER__)
enum ;
enum ;
enum ;
enum ;
enum ;
#define VDEC_FLAG_EOS				(0x0004)
#define VDEC_FLAG_FRAME				(0x0000)
#define VDEC_FLAG_FIELDPAIR			(0x0008)
#define VDEC_FLAG_TOPFIELD			(0x0010)
#define VDEC_FLAG_BOTTOMFIELD			(0x0018)
#define VDEC_FLAG_PROGRESSIVE_SRC		(0x0000)
#define VDEC_FLAG_INTERLACED_SRC		(0x0020)
#define VDEC_FLAG_UNKNOWN_SRC			(0x0040)
#define VDEC_FLAG_BOTTOM_FIRST			(0x0080)
#define VDEC_FLAG_LAST_PICTURE			(0x0100)
#define VDEC_FLAG_PICTURE_META_DATA_PRESENT	(0x40000)
enum _BC_OUTPUT_FORMAT ;
struct BC_PIC_INFO_BLOCK ;
enum POUT_OPTIONAL_IN_FLAGS_;
typedef enum BC_STATUS(*dts_pout_callback)(void  *shnd, uint32_t width, uint32_t height, uint32_t stride, void *pOut);
#define MAX_UD_SIZE		1792
struct BC_DTS_PROC_OUT ;
struct BC_DTS_STATUS ;
#define BC_SWAP32(_v)			\
((((_v) & 0xFF000000)>>24)|	\
(((_v) & 0x00FF0000)>>8)|	\
(((_v) & 0x0000FF00)<<8)|	\
(((_v) & 0x000000FF)<<24))
#define WM_AGENT_TRAYICON_DECODER_OPEN	10001
#define WM_AGENT_TRAYICON_DECODER_CLOSE	10002
#define WM_AGENT_TRAYICON_DECODER_START	10003
#define WM_AGENT_TRAYICON_DECODER_STOP	10004
#define WM_AGENT_TRAYICON_DECODER_RUN	10005
#define WM_AGENT_TRAYICON_DECODER_PAUSE	10006
