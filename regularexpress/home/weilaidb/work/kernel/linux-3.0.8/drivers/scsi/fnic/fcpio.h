#define _FCPIO_H_
#define FCPIO_HOST_EXCH_RANGE_START         0x1000
#define FCPIO_HOST_EXCH_RANGE_END           0x1fff
#define FCPIO_HOST_SEQ_ID_RANGE_START       0x80
#define FCPIO_HOST_SEQ_ID_RANGE_END         0xff
enum fcpio_type ;
enum fcpio_status ;
struct fcpio_tag ;
static inline void
fcpio_tag_id_enc(struct fcpio_tag *tag, u32 id)
static inline void
fcpio_tag_id_dec(struct fcpio_tag *tag, u32 *id)
static inline void
fcpio_tag_exid_enc(struct fcpio_tag *tag, u16 ox_id, u16 rx_id)
static inline void
fcpio_tag_exid_dec(struct fcpio_tag *tag, u16 *ox_id, u16 *rx_id)
struct fcpio_header ;
static inline void
fcpio_header_enc(struct fcpio_header *hdr,
u8 type, u8 status,
struct fcpio_tag tag)
static inline void
fcpio_header_dec(struct fcpio_header *hdr,
u8 *type, u8 *status,
struct fcpio_tag *tag)
#define CDB_16      16
#define CDB_32      32
#define LUN_ADDRESS 8
struct fcpio_icmnd_16 ;
#define FCPIO_ICMND_SRFLAG_RETRY 0x01
#define FCPIO_ICMND_PTA_SIMPLE      0
#define FCPIO_ICMND_PTA_HEADQ       1
#define FCPIO_ICMND_PTA_ORDERED     2
#define FCPIO_ICMND_PTA_ACA         4
#define FCPIO_ICMND_PRI_SHIFT       3
#define FCPIO_ICMND_RDDATA      0x02
#define FCPIO_ICMND_WRDATA      0x01
struct fcpio_icmnd_32 ;
struct fcpio_itmf ;
enum fcpio_itmf_tm_req_type ;
struct fcpio_tdata ;
#define FCPIO_TDATA_SCSI_RSP    0x01
struct fcpio_txrdy ;
struct fcpio_trsp ;
#define FCPIO_TRSP_RESID_UNDER  0x08
#define FCPIO_TRSP_RESID_OVER   0x04
struct fcpio_ttmf_ack ;
struct fcpio_tabort ;
struct fcpio_reset ;
enum fcpio_flogi_reg_format_type ;
struct fcpio_flogi_reg ;
struct fcpio_echo ;
struct fcpio_lunmap_req ;
struct fcpio_flogi_fip_reg ;
#define FCPIO_HOST_REQ_LEN      128
struct fcpio_host_req ;
struct fcpio_icmnd_cmpl ;
#define FCPIO_ICMND_CMPL_RESID_UNDER    0x08
#define FCPIO_ICMND_CMPL_RESID_OVER     0x04
struct fcpio_itmf_cmpl ;
struct fcpio_tcmnd_16 ;
#define FCPIO_TCMND_PTA_SIMPLE      0
#define FCPIO_TCMND_PTA_HEADQ       1
#define FCPIO_TCMND_PTA_ORDERED     2
#define FCPIO_TCMND_PTA_ACA         4
#define FCPIO_TCMND_PRI_SHIFT       3
#define FCPIO_TCMND_RDDATA      0x02
#define FCPIO_TCMND_WRDATA      0x01
struct fcpio_tcmnd_32 ;
struct fcpio_tdrsp_cmpl ;
struct fcpio_ttmf ;
#define FCPIO_TTMF_CLR_ACA      0x40
#define FCPIO_TTMF_LUN_RESET    0x10
#define FCPIO_TTMF_CLR_TASK_SET 0x04
#define FCPIO_TTMF_ABT_TASK_SET 0x02
#define FCPIO_TTMF_ABT_TASK     0x01
struct fcpio_tabort_cmpl ;
struct fcpio_ack ;
struct fcpio_reset_cmpl ;
struct fcpio_flogi_reg_cmpl ;
struct fcpio_echo_cmpl ;
struct fcpio_lunmap_chng ;
struct fcpio_lunmap_req_cmpl ;
#define FCPIO_FW_REQ_LEN        64
struct fcpio_fw_req ;
static inline void fcpio_color_enc(struct fcpio_fw_req *fw_req, u8 color)
static inline void fcpio_color_dec(struct fcpio_fw_req *fw_req, u8 *color)
#define FCPIO_LUNMAP_TABLE_SIZE     256
#define FCPIO_FLAGS_LUNMAP_VALID    0x80
#define FCPIO_FLAGS_BOOT            0x01
struct fcpio_lunmap_entry ;
struct fcpio_lunmap_tbl ;
