#define DSP_DEFS_H_
#define dsp_download_reserve_space(fp,length)
struct _OsFileHandle_;
typedef long (  * OsFileIo)  (struct _OsFileHandle_    *handle,
void                     *buffer,
long                       size) ;
typedef long (  * OsFileSeek)(struct _OsFileHandle_    *handle,
long                       position,
int                        mode) ;
typedef long (  * OsCardLoad)(struct _OsFileHandle_    *handle,
long                       length,
void                         *   *addr) ;
typedef struct _OsFileHandle_
OsFileHandle ;
extern OsFileHandle *OsOpenFile (char *path_name) ;
extern void          OsCloseFile (OsFileHandle *fp) ;
#define DSP_TELINDUS_FILE "dspdload.bin"
#define DSP_QSIG_TELINDUS_FILE "dspdqsig.bin"
#define DSP_MDM_TELINDUS_FILE "dspdvmdm.bin"
#define DSP_FAX_TELINDUS_FILE "dspdvfax.bin"
#define DSP_DIRECTORY_ENTRIES 64
#define DSP_MEMORY_TYPE_EXTERNAL_DM         0
#define DSP_MEMORY_TYPE_EXTERNAL_PM         1
#define DSP_MEMORY_TYPE_INTERNAL_DM         2
#define DSP_MEMORY_TYPE_INTERNAL_PM         3
#define DSP_DOWNLOAD_FLAG_BOOTABLE          0x0001
#define DSP_DOWNLOAD_FLAG_2181              0x0002
#define DSP_DOWNLOAD_FLAG_TIMECRITICAL      0x0004
#define DSP_DOWNLOAD_FLAG_COMPAND           0x0008
#define DSP_MEMORY_BLOCK_COUNT              16
#define DSP_SEGMENT_PM_FLAG                 0x0001
#define DSP_SEGMENT_SHARED_FLAG             0x0002
#define DSP_SEGMENT_EXTERNAL_DM             DSP_MEMORY_TYPE_EXTERNAL_DM
#define DSP_SEGMENT_EXTERNAL_PM             DSP_MEMORY_TYPE_EXTERNAL_PM
#define DSP_SEGMENT_INTERNAL_DM             DSP_MEMORY_TYPE_INTERNAL_DM
#define DSP_SEGMENT_INTERNAL_PM             DSP_MEMORY_TYPE_INTERNAL_PM
#define DSP_SEGMENT_FIRST_RELOCATABLE       4
#define DSP_DATA_BLOCK_PM_FLAG              0x0001
#define DSP_DATA_BLOCK_DWORD_FLAG           0x0002
#define DSP_DATA_BLOCK_RESOLVE_FLAG         0x0004
#define DSP_RELOC_NONE                      0x00
#define DSP_RELOC_SEGMENT_MASK              0x3f
#define DSP_RELOC_TYPE_MASK                 0xc0
#define DSP_RELOC_TYPE_0                    0x00
#define DSP_RELOC_TYPE_1                    0x40
#define DSP_RELOC_TYPE_2                    0x80
#define DSP_RELOC_TYPE_3                    0xc0
#define DSP_COMBIFILE_FORMAT_IDENTIFICATION_SIZE 48
#define DSP_COMBIFILE_FORMAT_VERSION_BCD    0x0100
#define DSP_FILE_FORMAT_IDENTIFICATION_SIZE 48
#define DSP_FILE_FORMAT_VERSION_BCD         0x0100
typedef struct tag_dsp_combifile_header
t_dsp_combifile_header;
typedef struct tag_dsp_combifile_directory_entry
t_dsp_combifile_directory_entry;
typedef struct tag_dsp_file_header
t_dsp_file_header;
typedef struct tag_dsp_memory_block_desc
t_dsp_memory_block_desc;
typedef struct tag_dsp_segment_desc
t_dsp_segment_desc;
typedef struct tag_dsp_symbol_desc
t_dsp_symbol_desc;
typedef struct tag_dsp_data_block_header
t_dsp_data_block_header;
typedef struct tag_dsp_download_desc
t_dsp_desc;
typedef struct tag_dsp_portable_download_desc
t_dsp_portable_desc;
#define DSP_DOWNLOAD_INDEX_KERNEL               0
#define DSP30TX_DOWNLOAD_INDEX_KERNEL           1
#define DSP30RX_DOWNLOAD_INDEX_KERNEL           2
#define DSP_MAX_DOWNLOAD_COUNT                  64
#define DSP_DOWNLOAD_MAX_SEGMENTS         16
#define DSP_UDATA_REQUEST_RECONFIGURE     0
#define DSP_RECONFIGURE_TX_FLAG           0x8000
#define DSP_RECONFIGURE_SHORT_TRAIN_FLAG  0x4000
#define DSP_RECONFIGURE_ECHO_PROTECT_FLAG 0x2000
#define DSP_RECONFIGURE_HDLC_FLAG         0x1000
#define DSP_RECONFIGURE_SYNC_FLAG         0x0800
#define DSP_RECONFIGURE_PROTOCOL_MASK     0x00ff
#define DSP_RECONFIGURE_IDLE              0
#define DSP_RECONFIGURE_V25               1
#define DSP_RECONFIGURE_V21_CH2           2
#define DSP_RECONFIGURE_V27_2400          3
#define DSP_RECONFIGURE_V27_4800          4
#define DSP_RECONFIGURE_V29_7200          5
#define DSP_RECONFIGURE_V29_9600          6
#define DSP_RECONFIGURE_V33_12000         7
#define DSP_RECONFIGURE_V33_14400         8
#define DSP_RECONFIGURE_V17_7200          9
#define DSP_RECONFIGURE_V17_9600          10
#define DSP_RECONFIGURE_V17_12000         11
#define DSP_RECONFIGURE_V17_14400         12
#define DSP_UDATA_INDICATION_SYNC         0
#define DSP_UDATA_INDICATION_DCD_OFF      1
#define DSP_UDATA_INDICATION_DCD_ON       2
#define DSP_UDATA_INDICATION_CTS_OFF      3
#define DSP_UDATA_INDICATION_CTS_ON       4
#define DSP_CONNECTED_NORM_UNSPECIFIED      0
#define DSP_CONNECTED_NORM_V21              1
#define DSP_CONNECTED_NORM_V23              2
#define DSP_CONNECTED_NORM_V22              3
#define DSP_CONNECTED_NORM_V22_BIS          4
#define DSP_CONNECTED_NORM_V32_BIS          5
#define DSP_CONNECTED_NORM_V34              6
#define DSP_CONNECTED_NORM_V8               7
#define DSP_CONNECTED_NORM_BELL_212A        8
#define DSP_CONNECTED_NORM_BELL_103         9
#define DSP_CONNECTED_NORM_V29_LEASED_LINE  10
#define DSP_CONNECTED_NORM_V33_LEASED_LINE  11
#define DSP_CONNECTED_NORM_TFAST            12
#define DSP_CONNECTED_NORM_V21_CH2          13
#define DSP_CONNECTED_NORM_V27_TER          14
#define DSP_CONNECTED_NORM_V29              15
#define DSP_CONNECTED_NORM_V33              16
#define DSP_CONNECTED_NORM_V17              17
#define DSP_CONNECTED_OPTION_TRELLIS        0x0001
extern char *dsp_read_file (OsFileHandle          *fp,
word                     card_type_number,
word                  *p_dsp_download_count,
t_dsp_desc            *p_dsp_download_table,
t_dsp_portable_desc   *p_dsp_portable_download_table) ;
