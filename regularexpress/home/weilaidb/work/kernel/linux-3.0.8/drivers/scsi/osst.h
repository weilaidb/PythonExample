typedef struct  idetape_inquiry_result_t;
typedef struct  idetape_read_position_result_t;
#define COMPRESSION_PAGE           0x0f
#define COMPRESSION_PAGE_LENGTH    16
#define CAPABILITIES_PAGE          0x2a
#define CAPABILITIES_PAGE_LENGTH   20
#define TAPE_PARAMTR_PAGE          0x2b
#define TAPE_PARAMTR_PAGE_LENGTH   16
#define NUMBER_RETRIES_PAGE        0x2f
#define NUMBER_RETRIES_PAGE_LENGTH 4
#define BLOCK_SIZE_PAGE            0x30
#define BLOCK_SIZE_PAGE_LENGTH     4
#define BUFFER_FILLING_PAGE        0x33
#define BUFFER_FILLING_PAGE_LENGTH 4
#define VENDOR_IDENT_PAGE          0x36
#define VENDOR_IDENT_PAGE_LENGTH   8
#define LOCATE_STATUS_PAGE         0x37
#define LOCATE_STATUS_PAGE_LENGTH  0
#define MODE_HEADER_LENGTH         4
typedef struct  idetape_request_sense_result_t;
typedef struct  osst_mode_parameter_header_t;
typedef struct  osst_parameter_block_descriptor_t;
typedef struct  osst_data_compression_page_t;
typedef struct  osst_medium_partition_page_t;
typedef struct  osst_capabilities_page_t;
typedef struct  osst_block_size_page_t;
typedef struct  osst_tape_paramtr_page_t;
#define OS_CONFIG_PARTITION     (0xff)
#define OS_DATA_PARTITION       (0)
#define OS_PARTITION_VERSION    (1)
typedef struct os_partition_s  os_partition_t;
typedef struct os_dat_entry_s  os_dat_entry_t;
#define OS_DAT_FLAGS_DATA       (0xc)
#define OS_DAT_FLAGS_MARK       (0x1)
typedef struct os_dat_s  os_dat_t;
#define OS_FRAME_TYPE_FILL      (0)
#define OS_FRAME_TYPE_EOD       (1 << 0)
#define OS_FRAME_TYPE_MARKER    (1 << 1)
#define OS_FRAME_TYPE_HEADER    (1 << 3)
#define OS_FRAME_TYPE_DATA      (1 << 7)
typedef struct os_aux_s  os_aux_t;
#define OS_FM_TAB_MAX 1024
typedef struct os_fm_tab_s  os_fm_tab_t;
typedef struct os_ext_trk_ey_s  os_ext_trk_ey_t;
typedef struct os_ext_trk_tb_s  os_ext_trk_tb_t;
typedef struct os_header_s  os_header_t;
#define OS_FRAME_SIZE   (32 * 1024 + 512)
#define OS_DATA_SIZE    (32 * 1024)
#define OS_AUX_SIZE     (512)
struct osst_buffer  ;
struct osst_tape  ;
struct osst_request ;
#define OS_WRITE_DATA      0
#define OS_WRITE_EOD       1
#define OS_WRITE_NEW_MARK  2
#define OS_WRITE_LAST_MARK 3
#define OS_WRITE_HEADER    4
#define OS_WRITE_FILLER    5
#define OS_WRITING_COMPLETE 3
