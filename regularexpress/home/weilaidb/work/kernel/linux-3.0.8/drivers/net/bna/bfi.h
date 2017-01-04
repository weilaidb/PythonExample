#define __BFI_H__
#define	BFI_FLASH_CHUNK_SZ			256
#define	BFI_FLASH_CHUNK_SZ_WORDS	(BFI_FLASH_CHUNK_SZ/sizeof(u32))
enum ;
struct bfi_mhdr ;
#define bfi_h2i_set(_mh, _mc, _op, _lpuid) do  while (0)
#define bfi_i2h_set(_mh, _mc, _op, _i2htok) do  while (0)
#define BFI_I2H_OPCODE_BASE	128
#define BFA_I2HM(_x) 			((_x) + BFI_I2H_OPCODE_BASE)
#define BFI_SGE_INLINE	1
#define BFI_SGE_INLINE_MAX	(BFI_SGE_INLINE + 1)
enum ;
union bfi_addr_u ;
struct bfi_sge ;
#define BFI_SGPG_DATA_SGES		7
#define BFI_SGPG_SGES_MAX		(BFI_SGPG_DATA_SGES + 1)
#define BFI_SGPG_RSVD_WD_LEN	8
struct bfi_sgpg ;
#define BFI_LMSG_SZ		128
#define BFI_LMSG_PL_WSZ	\
((BFI_LMSG_SZ - sizeof(struct bfi_mhdr)) / 4)
struct bfi_msg ;
#define BFI_MBMSG_SZ		7
struct bfi_mbmsg ;
enum bfi_mclass ;
#define BFI_IOC_MAX_CQS		4
#define BFI_IOC_MAX_CQS_ASIC	8
#define BFI_IOC_MSGLEN_MAX	32
#define BFI_BOOT_TYPE_OFF		8
#define BFI_BOOT_LOADER_OFF		12
#define BFI_BOOT_TYPE_NORMAL 		0
#define	BFI_BOOT_TYPE_FLASH		1
#define	BFI_BOOT_TYPE_MEMTEST		2
#define BFI_BOOT_LOADER_OS		0
#define BFI_BOOT_MEMTEST_RES_ADDR   0x900
#define BFI_BOOT_MEMTEST_RES_SIG    0xA0A1A2A3
enum bfi_ioc_h2i_msgs ;
enum bfi_ioc_i2h_msgs ;
struct bfi_ioc_getattr_req ;
struct bfi_ioc_attr ;
struct bfi_ioc_getattr_reply ;
#define BFI_IOC_SMEM_PG0_CB	(0x40)
#define BFI_IOC_SMEM_PG0_CT	(0x180)
#define BFI_IOC_FWSTATS_OFF	(0x6B40)
#define BFI_IOC_FWSTATS_SZ	(4096)
#define BFI_IOC_TRC_OFF		(0x4b00)
#define BFI_IOC_TRC_ENTS	256
#define BFI_IOC_FW_SIGNATURE	(0xbfadbfad)
#define BFI_IOC_MD5SUM_SZ	4
struct bfi_ioc_image_hdr ;
struct bfi_ioc_rdy_event ;
struct bfi_ioc_hbeat ;
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
struct bfi_ioc_ctrl_req ;
struct bfi_ioc_ctrl_reply ;
#define BFI_IOC_MSGSZ   8
union bfi_ioc_h2i_msg_u ;
union bfi_ioc_i2h_msg_u ;
