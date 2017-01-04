#define __INTEL_SST_FW_IPC_H__
#define MAX_NUM_STREAMS_MRST 3
#define MAX_NUM_STREAMS_MFLD 6
#define MAX_NUM_STREAMS 6
#define MAX_DBG_RW_BYTES 80
#define MAX_NUM_SCATTER_BUFFERS 8
#define MAX_LOOP_BACK_DWORDS 8
#define SST_MAILBOX_SIZE 0x0400
#define SST_MAILBOX_SEND 0x0000
#define SST_MAILBOX_RCV 0x0804
#define SST_TIME_STAMP 0x1800
#define SST_RESERVED_OFFSET 0x1A00
#define SST_CHEKPOINT_OFFSET 0x1C00
#define REPLY_MSG 0x80
#define IPC_IA_PREP_LIB_DNLD 0x01
#define IPC_IA_LIB_DNLD_CMPLT 0x02
#define IPC_IA_SET_PMIC_TYPE 0x03
#define IPC_IA_GET_FW_VERSION 0x04
#define IPC_IA_GET_FW_BUILD_INF 0x05
#define IPC_IA_GET_FW_INFO 0x06
#define IPC_IA_GET_FW_CTXT 0x07
#define IPC_IA_SET_FW_CTXT 0x08
#define IPC_IA_SET_CODEC_PARAMS 0x10
#define IPC_IA_GET_CODEC_PARAMS 0x11
#define IPC_IA_SET_PPP_PARAMS 0x12
#define IPC_IA_GET_PPP_PARAMS 0x13
#define IPC_IA_PLAY_FRAMES 0x14
#define IPC_IA_CAPT_FRAMES 0x15
#define IPC_IA_PLAY_VOICE 0x16
#define IPC_IA_CAPT_VOICE 0x17
#define IPC_IA_DECODE_FRAMES 0x18
#define IPC_IA_ALG_PARAMS 0x1A
#define IPC_IA_TUNING_PARAMS 0x1B
#define IPC_IA_ALLOC_STREAM 0x20
#define IPC_IA_FREE_STREAM 0x21
#define IPC_IA_SET_STREAM_PARAMS 0x22
#define IPC_IA_GET_STREAM_PARAMS 0x23
#define IPC_IA_PAUSE_STREAM 0x24
#define IPC_IA_RESUME_STREAM 0x25
#define IPC_IA_DROP_STREAM 0x26
#define IPC_IA_DRAIN_STREAM 0x27
#define IPC_IA_TARGET_DEV_SELECT 0x28
#define IPC_IA_CONTROL_ROUTING 0x29
#define IPC_IA_SET_STREAM_VOL 0x2A
#define IPC_IA_GET_STREAM_VOL 0x2B
#define IPC_IA_SET_STREAM_MUTE 0x2C
#define IPC_IA_GET_STREAM_MUTE 0x2D
#define IPC_IA_ENABLE_RX_TIME_SLOT 0x2E
#define IPC_IA_START_STREAM 0x30
#define IPC_IA_DBG_MEM_READ 0x40
#define IPC_IA_DBG_MEM_WRITE 0x41
#define IPC_IA_DBG_LOOP_BACK 0x42
#define IPC_IA_FW_INIT_CMPLT 0x81
#define IPC_IA_LPE_GETTING_STALLED 0x82
#define IPC_IA_LPE_UNSTALLED 0x83
#define IPC_SST_GET_PLAY_FRAMES 0x90
#define IPC_SST_GET_CAPT_FRAMES 0x91
#define IPC_SST_BUF_UNDER_RUN 0x92
#define IPC_SST_BUF_OVER_RUN 0x93
#define IPC_SST_DRAIN_END 0x94
#define IPC_SST_CHNGE_SSP_PARAMS 0x95
#define IPC_SST_STREAM_PROCESS_FATAL_ERR 0x96
#define IPC_SST_PERIOD_ELAPSED 0x97
#define IPC_IA_TARGET_DEV_CHNGD 0x98
#define IPC_SST_ERROR_EVENT 0x99
#define IPC_SC_DDR_LINK_UP 0xC0
#define IPC_SC_DDR_LINK_DOWN 0xC1
#define IPC_SC_SET_LPECLK_REQ 0xC2
#define IPC_SC_SSP_BIT_BANG 0xC3
#define IPC_IA_MEM_ALLOC_FAIL 0xE0
#define IPC_IA_PROC_ERR 0xE1
#define IPC_IA_PRINT_STRING 0xF0
enum ackData ;
enum sst_error_codes ;
enum dbg_mem_data_type ;
union ipc_header  __attribute__ ((packed));
struct sst_fw_build_info  __attribute__ ((packed));
struct ipc_header_fw_init  __attribute__ ((packed));
struct sst_address_info  __attribute__ ((packed));
struct snd_sst_tstamp ;
struct sst_frame_info  __attribute__ ((packed));
struct snd_sst_decode_info  __attribute__ ((packed));
struct ipc_sst_ia_print_params  __attribute__ ((packed));
struct snd_sst_voice_data  __attribute__ ((packed));
struct ipc_sst_ia_dbg_mem_rw   __attribute__ ((packed));
struct ipc_sst_ia_dbg_loop_back  __attribute__ ((packed));
struct snd_sst_str_type  __attribute__ ((packed));
struct module_info  __attribute__ ((packed));
struct lib_slot_info  __attribute__ ((packed));
struct snd_sst_lib_download ;
struct snd_sst_lib_download_info ;
struct snd_sst_alloc_params ;
struct snd_sst_fw_get_stream_params ;
struct snd_sst_alloc_response ;
struct snd_sst_drop_response ;
struct snd_sst_control_routing ;
struct ipc_post ;
struct snd_sst_ctxt_params ;
