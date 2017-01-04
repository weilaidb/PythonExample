#define __BFI_H__
#define	BFI_FLASH_CHUNK_SZ			256
#define	BFI_FLASH_CHUNK_SZ_WORDS	(BFI_FLASH_CHUNK_SZ/sizeof(u32))
enum ;
struct bfi_mhdr_s ;
#define bfi_h2i_set(_mh, _mc, _op, _lpuid) do  while (0)
#define bfi_i2h_set(_mh, _mc, _op, _i2htok) do  while (0)
#define BFI_I2H_OPCODE_BASE	128
#define BFA_I2HM(_x)		((_x) + BFI_I2H_OPCODE_BASE)
#define BFI_SGE_INLINE	1
#define BFI_SGE_INLINE_MAX	(BFI_SGE_INLINE + 1)
enum ;
union bfi_addr_u ;
struct bfi_sge_s ;
#define BFI_SGPG_DATA_SGES		7
#define BFI_SGPG_SGES_MAX		(BFI_SGPG_DATA_SGES + 1)
#define BFI_SGPG_RSVD_WD_LEN	8
struct bfi_sgpg_s ;
#define BFI_LMSG_SZ		128
#define BFI_LMSG_PL_WSZ	\
((BFI_LMSG_SZ - sizeof(struct bfi_mhdr_s)) / 4)
struct bfi_msg_s ;
#define BFI_MBMSG_SZ		7
struct bfi_mbmsg_s ;
enum bfi_mclass ;
#define BFI_IOC_MAX_CQS		4
#define BFI_IOC_MAX_CQS_ASIC	8
#define BFI_IOC_MSGLEN_MAX	32
#define BFI_BOOT_TYPE_OFF		8
#define BFI_BOOT_LOADER_OFF		12
#define BFI_BOOT_TYPE_NORMAL		0
#define	BFI_BOOT_TYPE_FLASH		1
#define	BFI_BOOT_TYPE_MEMTEST		2
#define BFI_BOOT_LOADER_OS		0
#define BFI_BOOT_LOADER_BIOS		1
#define BFI_BOOT_LOADER_UEFI		2
enum bfi_ioc_h2i_msgs ;
enum bfi_ioc_i2h_msgs ;
struct bfi_ioc_getattr_req_s ;
struct bfi_ioc_attr_s ;
struct bfi_ioc_getattr_reply_s ;
#define BFI_IOC_SMEM_PG0_CB	(0x40)
#define BFI_IOC_SMEM_PG0_CT	(0x180)
#define BFI_IOC_FWSTATS_OFF	(0x6B40)
#define BFI_IOC_FWSTATS_SZ	(4096)
#define BFI_IOC_TRC_OFF		(0x4b00)
#define BFI_IOC_TRC_ENTS	256
#define BFI_IOC_FW_SIGNATURE	(0xbfadbfad)
#define BFI_IOC_MD5SUM_SZ	4
struct bfi_ioc_image_hdr_s ;
struct bfi_ioc_rdy_event_s ;
struct bfi_ioc_hbeat_s ;
enum bfi_ioc_state ;
#define BFI_IOC_ENDIAN_SIG  0x12345678
enum ;
#define BFI_ADAPTER_GETP(__prop, __adap_prop)			\
(((__adap_prop) & BFI_ADAPTER_ ## __prop ## _MK) >>	\
BFI_ADAPTER_ ## __prop ## _SH)
#define BFI_ADAPTER_SETP(__prop, __val)				\
((__val) << BFI_ADAPTER_ ## __prop ## _SH)
#define BFI_ADAPTER_IS_PROTO(__adap_type)			\
((__adap_type) & BFI_ADAPTER_PROTO)
#define BFI_ADAPTER_IS_TTV(__adap_type)				\
((__adap_type) & BFI_ADAPTER_TTV)
#define BFI_ADAPTER_IS_UNSUPP(__adap_type)			\
((__adap_type) & BFI_ADAPTER_UNSUPP)
#define BFI_ADAPTER_IS_SPECIAL(__adap_type)			\
((__adap_type) & (BFI_ADAPTER_TTV | BFI_ADAPTER_PROTO |	\
BFI_ADAPTER_UNSUPP))
struct bfi_ioc_ctrl_req_s ;
#define bfi_ioc_enable_req_t struct bfi_ioc_ctrl_req_s;
#define bfi_ioc_disable_req_t struct bfi_ioc_ctrl_req_s;
struct bfi_ioc_ctrl_reply_s ;
#define bfi_ioc_enable_reply_t struct bfi_ioc_ctrl_reply_s;
#define bfi_ioc_disable_reply_t struct bfi_ioc_ctrl_reply_s;
#define BFI_IOC_MSGSZ   8
union bfi_ioc_h2i_msg_u ;
union bfi_ioc_i2h_msg_u ;
#define BFI_PBC_MAX_BLUNS	8
#define BFI_PBC_MAX_VPORTS	16
struct bfi_pbc_blun_s ;
struct bfi_pbc_vport_s ;
struct bfi_pbc_s ;
#define BFI_MSGQ_FULL(_q)	(((_q->pi + 1) % _q->q_depth) == _q->ci)
#define BFI_MSGQ_EMPTY(_q)	(_q->pi == _q->ci)
#define BFI_MSGQ_UPDATE_CI(_q)	(_q->ci = (_q->ci + 1) % _q->q_depth)
#define BFI_MSGQ_UPDATE_PI(_q)	(_q->pi = (_q->pi + 1) % _q->q_depth)
#define BFI_MSGQ_FREE_CNT(_q)	((_q->ci - _q->pi - 1) & (_q->q_depth - 1))
enum bfi_msgq_h2i_msgs_e ;
enum bfi_msgq_i2h_msgs_e ;
struct bfi_msgq_mhdr_s ;
#define bfi_msgq_mhdr_set(_mh, _mc, _mid, _tok, _enet_id) do  while (0)
#define BFI_MSGQ_CMD_ENTRY_SIZE		(64)
#define BFI_MSGQ_RSP_ENTRY_SIZE		(64)
#define BFI_MSGQ_MSG_SIZE_MAX		(2048)
struct bfi_msgq_s ;
struct bfi_msgq_cfg_req_s ;
struct bfi_msgq_cfg_rsp_s ;
struct bfi_msgq_h2i_db_s ;
struct bfi_msgq_i2h_db_s ;
enum bfi_port_h2i ;
enum bfi_port_i2h ;
struct bfi_port_generic_req_s ;
struct bfi_port_generic_rsp_s ;
struct bfi_port_get_stats_req_s ;
union bfi_port_h2i_msg_u ;
union bfi_port_i2h_msg_u ;
