#define DBDEFS_
#define PG_SIZE4K 4096
#define PG_MASK(pg_size) (~((pg_size)-1))
#define PG_ALIGN_LOW(addr, pg_size) ((addr) & PG_MASK(pg_size))
#define PG_ALIGN_HIGH(addr, pg_size) (((addr)+(pg_size)-1) & PG_MASK(pg_size))
#define DBAPI                       int
#define DSP_MAXNAMELEN              32
#define DSP_SIGNALEVENT             0x00000001
#define DSP_PROCESSORSTATECHANGE    0x00000001
#define DSP_PROCESSORATTACH         0x00000002
#define DSP_PROCESSORDETACH         0x00000004
#define DSP_PROCESSORRESTART        0x00000008
#define DSP_MMUFAULT                0x00000010
#define DSP_SYSERROR                0x00000020
#define DSP_EXCEPTIONABORT          0x00000300
#define DSP_PWRERROR                0x00000080
#define DSP_WDTOVERFLOW	0x00000040
#define IVA_MMUFAULT                0x00000040
#define DSP_NODESTATECHANGE         0x00000100
#define DSP_NODEMESSAGEREADY        0x00000200
#define DSP_STREAMDONE              0x00001000
#define DSP_STREAMIOCOMPLETION      0x00002000
#define DSP_HGPPNODE                0xFFFFFFFF
#define DSP_TONODE                  1
#define DSP_FROMNODE                2
#define DSP_NODE_MIN_PRIORITY       1
#define DSP_NODE_MAX_PRIORITY       15
#define DSP_RMSBUFDESC RMS_BUFDESC
#define DSP_UNIT    0
#define IVA_UNIT    1
#define DSPWORD       unsigned char
#define DSPWORDSIZE     sizeof(DSPWORD)
#define    MAX_PROFILES     16
#define DSPTYPE64	0x99
#define VALID_PROC_EVENT (DSP_PROCESSORSTATECHANGE | DSP_PROCESSORATTACH | \
DSP_PROCESSORDETACH | DSP_PROCESSORRESTART | DSP_NODESTATECHANGE | \
DSP_STREAMDONE | DSP_STREAMIOCOMPLETION | DSP_MMUFAULT | \
DSP_SYSERROR | DSP_WDTOVERFLOW | DSP_PWRERROR)
static inline bool is_valid_proc_event(u32 x)
struct dsp_uuid ;
enum dsp_dcdobjtype ;
enum dsp_procstate ;
enum node_type ;
enum node_state ;
enum dsp_streamstate ;
enum dsp_connecttype ;
enum dsp_strmmode ;
enum dsp_resourceinfotype ;
enum dsp_memtype ;
enum dsp_flushtype ;
struct dsp_memstat ;
struct dsp_procloadstat ;
struct dsp_strmattr ;
struct dsp_cbdata ;
struct dsp_msg ;
struct dsp_resourcereqmts ;
struct dsp_streamconnect ;
struct dsp_nodeprofs ;
struct dsp_ndbprops ;
struct dsp_nodeattrin ;
struct dsp_nodeinfo ;
struct dsp_nodeattr ;
struct dsp_notification ;
struct dsp_processorattrin ;
struct dsp_processorinfo ;
struct dsp_errorinfo ;
struct dsp_processorstate ;
struct dsp_resourceinfo ;
struct dsp_streamattrin ;
struct dsp_bufferattr ;
struct dsp_streaminfo ;
#define DSP_MAPVIRTUALADDR          0x00000000
#define DSP_MAPPHYSICALADDR         0x00000001
#define DSP_MAPBIGENDIAN            0x00000002
#define DSP_MAPLITTLEENDIAN         0x00000000
#define DSP_MAPMIXEDELEMSIZE        0x00000004
#define DSP_MAPELEMSIZE8            0x00000008
#define DSP_MAPELEMSIZE16           0x00000010
#define DSP_MAPELEMSIZE32           0x00000020
#define DSP_MAPELEMSIZE64           0x00000040
#define DSP_MAPVMALLOCADDR         0x00000080
#define DSP_MAPDONOTLOCK	   0x00000100
#define DSP_MAP_DIR_MASK		0x3FFF
#define GEM_CACHE_LINE_SIZE     128
#define GEM_L1P_PREFETCH_SIZE   128
#define DSPPROCTYPE_C64		6410
#define IVAPROCTYPE_ARM7	470
#define MAXREGPATHLENGTH	255
