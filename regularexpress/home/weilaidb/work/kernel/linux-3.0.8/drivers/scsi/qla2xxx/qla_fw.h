#define __QLA_FW_H
#define MBS_CHECKSUM_ERROR	0x4010
#define MBS_INVALID_PRODUCT_KEY	0x4020
#define FO1_ENABLE_PUREX	BIT_10
#define FO1_DISABLE_LED_CTRL	BIT_6
#define FO1_ENABLE_8016		BIT_0
#define FO2_ENABLE_SEL_CLASS2	BIT_5
#define FO3_NO_ABTS_ON_LINKDOWN	BIT_14
#define FO3_HOLD_STS_IOCB	BIT_12
#define PDO_FORCE_ADISC		BIT_1
#define PDO_FORCE_PLOGI		BIT_0
#define	PORT_DATABASE_24XX_SIZE		64
struct port_database_24xx ;
struct vp_database_24xx ;
struct nvram_24xx ;
#define	ICB_VERSION 1
struct init_cb_24xx ;
#define COMMAND_TYPE_6	0x48
struct cmd_type_6 ;
#define COMMAND_TYPE_7	0x18
struct cmd_type_7 ;
#define COMMAND_TYPE_CRC_2	0x6A
struct cmd_type_crc_2 ;
#define	STATUS_TYPE	0x03
struct sts_entry_24xx ;
#define CS_DATA_REASSEMBLY_ERROR 0x11
#define CS_ABTS_BY_TARGET	0x13
#define CS_FW_RESOURCE		0x2C
#define CS_TASK_MGMT_OVERRUN	0x30
#define CS_ABORT_BY_TARGET	0x47
#define MARKER_TYPE	0x04
struct mrk_entry_24xx ;
#define CT_IOCB_TYPE		0x29
struct ct_entry_24xx ;
#define ELS_IOCB_TYPE		0x53
struct els_entry_24xx ;
struct els_sts_entry_24xx ;
#define MBX_IOCB_TYPE	0x39
struct mbx_entry_24xx ;
#define LOGINOUT_PORT_IOCB_TYPE	0x52
struct logio_entry_24xx ;
#define TSK_MGMT_IOCB_TYPE	0x14
struct tsk_mgmt_entry ;
#define ABORT_IOCB_TYPE	0x33
struct abort_entry_24xx ;
struct device_reg_24xx ;
#define TC_AEN_DISABLE		0
#define TC_EFT_ENABLE		4
#define TC_EFT_DISABLE		5
#define TC_FCE_ENABLE		8
#define TC_FCE_OPTIONS		0
#define TC_FCE_DEFAULT_RX_SIZE	2112
#define TC_FCE_DEFAULT_TX_SIZE	2112
#define TC_FCE_DISABLE		9
#define TC_FCE_DISABLE_TRACE	BIT_0
#define MIN_MULTI_ID_FABRIC	64
#define MAX_MULTI_ID_FABRIC	256
#define for_each_mapped_vp_idx(_ha, _idx)		\
for (_idx = find_next_bit((_ha)->vp_idx_map,	\
(_ha)->max_npiv_vports + 1, 1);		\
_idx <= (_ha)->max_npiv_vports;		\
_idx = find_next_bit((_ha)->vp_idx_map,	\
(_ha)->max_npiv_vports + 1, _idx + 1))	\
struct mid_conf_entry_24xx ;
struct mid_init_cb_24xx ;
struct mid_db_entry_24xx ;
#define VP_CTRL_IOCB_TYPE	0x30
struct vp_ctrl_entry_24xx ;
#define VP_CONFIG_IOCB_TYPE	0x31
struct vp_config_entry_24xx ;
#define VP_RPT_ID_IOCB_TYPE	0x32
struct vp_rpt_id_entry_24xx ;
#define VF_EVFP_IOCB_TYPE       0x26
struct vf_evfp_entry_24xx ;
struct qla_fdt_layout ;
struct qla_flt_location ;
struct qla_flt_header ;
#define FLT_REG_FW		0x01
#define FLT_REG_BOOT_CODE	0x07
#define FLT_REG_VPD_0		0x14
#define FLT_REG_NVRAM_0		0x15
#define FLT_REG_VPD_1		0x16
#define FLT_REG_NVRAM_1		0x17
#define FLT_REG_FDT		0x1a
#define FLT_REG_FLT		0x1c
#define FLT_REG_HW_EVENT_0	0x1d
#define FLT_REG_HW_EVENT_1	0x1f
#define FLT_REG_NPIV_CONF_0	0x29
#define FLT_REG_NPIV_CONF_1	0x2a
#define FLT_REG_GOLD_FW		0x2f
#define FLT_REG_FCP_PRIO_0	0x87
#define FLT_REG_FCP_PRIO_1	0x88
struct qla_flt_region ;
struct qla_npiv_header ;
struct qla_npiv_entry ;
#define MBA_ISP84XX_ALERT	0x800f
#define A84_PANIC_RECOVERY	0x1
#define A84_OP_LOGIN_COMPLETE	0x2
#define A84_DIAG_LOGIN_COMPLETE	0x3
#define A84_GOLD_LOGIN_COMPLETE	0x4
#define MBC_ISP84XX_RESET	0x3a
#define FSTATE_REMOTE_FC_DOWN	BIT_0
#define FSTATE_NSL_LINK_DOWN	BIT_1
#define FSTATE_IS_DIAG_FW	BIT_2
#define FSTATE_LOGGED_IN	BIT_3
#define FSTATE_WAITING_FOR_VERIFY	BIT_4
#define VERIFY_CHIP_IOCB_TYPE	0x1B
struct verify_chip_entry_84xx ;
struct verify_chip_rsp_84xx ;
#define ACCESS_CHIP_IOCB_TYPE	0x2B
struct access_chip_84xx ;
struct access_chip_rsp_84xx ;
#define MBA_DCBX_START		0x8016
#define MBA_DCBX_COMPLETE	0x8030
#define MBA_FCF_CONF_ERR	0x8031
#define MBA_DCBX_PARAM_UPDATE	0x8032
#define MBA_IDC_COMPLETE	0x8100
#define MBA_IDC_NOTIFY		0x8101
#define MBA_IDC_TIME_EXT	0x8102
#define MBC_IDC_ACK		0x101
#define MBC_RESTART_MPI_FW	0x3d
#define MBC_FLASH_ACCESS_CTRL	0x3e
#define MBC_GET_XGMAC_STATS	0x7a
#define MBC_GET_DCBX_PARAMS	0x51
#define FAC_OPT_FORCE_SEMAPHORE		BIT_15
#define FAC_OPT_REQUESTOR_ID		BIT_14
#define FAC_OPT_CMD_SUBCODE		0xff
#define FAC_OPT_CMD_WRITE_PROTECT	0x00
#define FAC_OPT_CMD_WRITE_ENABLE	0x01
#define FAC_OPT_CMD_ERASE_SECTOR	0x02
#define FAC_OPT_CMD_LOCK_SEMAPHORE	0x03
#define FAC_OPT_CMD_UNLOCK_SEMAPHORE	0x04
#define FAC_OPT_CMD_GET_SECTOR_SIZE	0x05
struct nvram_81xx ;
#define	ICB_VERSION 1
struct init_cb_81xx ;
struct mid_init_cb_81xx ;
struct ex_init_cb_81xx ;
#define FARX_ACCESS_FLASH_CONF_81XX	0x7FFD0000
#define FARX_ACCESS_FLASH_DATA_81XX	0x7F800000
#define QLFC_FCP_PRIO_DISABLE           0x0
#define QLFC_FCP_PRIO_ENABLE            0x1
#define QLFC_FCP_PRIO_GET_CONFIG        0x2
#define QLFC_FCP_PRIO_SET_CONFIG        0x3
struct qla_fcp_prio_entry ;
struct qla_fcp_prio_cfg ;
#define FCP_PRIO_CFG_SIZE       (32*1024)
#define FA_FCP_PRIO0_ADDR_25	0x3C000
#define FA_FCP_PRIO1_ADDR_25	0x3E000
#define FA_BOOT_CODE_ADDR_81	0x80000
#define FA_RISC_CODE_ADDR_81	0xA0000
#define FA_FW_AREA_ADDR_81	0xC0000
#define FA_VPD_NVRAM_ADDR_81	0xD0000
#define FA_VPD0_ADDR_81		0xD0000
#define FA_VPD1_ADDR_81		0xD0400
#define FA_NVRAM0_ADDR_81	0xD0080
#define FA_NVRAM1_ADDR_81	0xD0180
#define FA_FEATURE_ADDR_81	0xD4000
#define FA_FLASH_DESCR_ADDR_81	0xD8000
#define FA_FLASH_LAYOUT_ADDR_81	0xD8400
#define FA_HW_EVENT0_ADDR_81	0xDC000
#define FA_HW_EVENT1_ADDR_81	0xDC400
#define FA_NPIV_CONF0_ADDR_81	0xD1000
#define FA_NPIV_CONF1_ADDR_81	0xD2000