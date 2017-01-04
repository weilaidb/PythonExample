#define _IPR_H
#define IPR_DRIVER_VERSION "2.5.2"
#define IPR_DRIVER_DATE "(April 27, 2011)"
#define IPR_MAX_CMD_PER_LUN				6
#define IPR_MAX_CMD_PER_ATA_LUN			1
#define IPR_NUM_BASE_CMD_BLKS				100
#define PCI_DEVICE_ID_IBM_OBSIDIAN_E	0x0339
#define PCI_DEVICE_ID_IBM_CROC_FPGA_E2          0x033D
#define PCI_DEVICE_ID_IBM_CROC_ASIC_E2          0x034A
#define IPR_SUBS_DEV_ID_2780	0x0264
#define IPR_SUBS_DEV_ID_5702	0x0266
#define IPR_SUBS_DEV_ID_5703	0x0278
#define IPR_SUBS_DEV_ID_572E	0x028D
#define IPR_SUBS_DEV_ID_573E	0x02D3
#define IPR_SUBS_DEV_ID_573D	0x02D4
#define IPR_SUBS_DEV_ID_571A	0x02C0
#define IPR_SUBS_DEV_ID_571B	0x02BE
#define IPR_SUBS_DEV_ID_571E	0x02BF
#define IPR_SUBS_DEV_ID_571F	0x02D5
#define IPR_SUBS_DEV_ID_572A	0x02C1
#define IPR_SUBS_DEV_ID_572B	0x02C2
#define IPR_SUBS_DEV_ID_572F	0x02C3
#define IPR_SUBS_DEV_ID_574E	0x030A
#define IPR_SUBS_DEV_ID_575B	0x030D
#define IPR_SUBS_DEV_ID_575C	0x0338
#define IPR_SUBS_DEV_ID_57B3	0x033A
#define IPR_SUBS_DEV_ID_57B7	0x0360
#define IPR_SUBS_DEV_ID_57B8	0x02C2
#define IPR_SUBS_DEV_ID_57B4    0x033B
#define IPR_SUBS_DEV_ID_57B2    0x035F
#define IPR_SUBS_DEV_ID_57C4    0x0354
#define IPR_SUBS_DEV_ID_57C6    0x0357
#define IPR_SUBS_DEV_ID_57CC    0x035C
#define IPR_SUBS_DEV_ID_57B5    0x033C
#define IPR_SUBS_DEV_ID_57CE    0x035E
#define IPR_SUBS_DEV_ID_57B1    0x0355
#define IPR_SUBS_DEV_ID_574D    0x0356
#define IPR_SUBS_DEV_ID_575D    0x035D
#define IPR_NAME				"ipr"
#define IPR_RC_JOB_CONTINUE		1
#define IPR_RC_JOB_RETURN		2
#define IPR_IOASC_NR_INIT_CMD_REQUIRED		0x02040200
#define IPR_IOASC_NR_IOA_RESET_REQUIRED		0x02048000
#define IPR_IOASC_SYNC_REQUIRED			0x023f0000
#define IPR_IOASC_MED_DO_NOT_REALLOC		0x03110C00
#define IPR_IOASC_HW_SEL_TIMEOUT			0x04050000
#define IPR_IOASC_HW_DEV_BUS_STATUS			0x04448500
#define	IPR_IOASC_IOASC_MASK			0xFFFFFF00
#define	IPR_IOASC_SCSI_STATUS_MASK		0x000000FF
#define IPR_IOASC_IR_INVALID_REQ_TYPE_OR_PKT	0x05240000
#define IPR_IOASC_IR_RESOURCE_HANDLE		0x05250000
#define IPR_IOASC_IR_NO_CMDS_TO_2ND_IOA		0x05258100
#define IPR_IOASA_IR_DUAL_IOA_DISABLED		0x052C8000
#define IPR_IOASC_BUS_WAS_RESET			0x06290000
#define IPR_IOASC_BUS_WAS_RESET_BY_OTHER		0x06298000
#define IPR_IOASC_ABORTED_CMD_TERM_BY_HOST	0x0B5A0000
#define IPR_FIRST_DRIVER_IOASC			0x10000000
#define IPR_IOASC_IOA_WAS_RESET			0x10000001
#define IPR_IOASC_PCI_ACCESS_ERROR			0x10000002
#define IPR_USE_LONG_TRANSOP_TIMEOUT		0x00000001
#define IPR_USE_PCI_WARM_RESET			0x00000002
#define IPR_DEFAULT_MAX_ERROR_DUMP			984
#define IPR_NUM_LOG_HCAMS				2
#define IPR_NUM_CFG_CHG_HCAMS				2
#define IPR_NUM_HCAMS	(IPR_NUM_LOG_HCAMS + IPR_NUM_CFG_CHG_HCAMS)
#define IPR_MAX_SIS64_TARGETS_PER_BUS			1024
#define IPR_MAX_SIS64_LUNS_PER_TARGET			0xffffffff
#define IPR_MAX_NUM_TARGETS_PER_BUS			256
#define IPR_MAX_NUM_LUNS_PER_TARGET			256
#define IPR_MAX_NUM_VSET_LUNS_PER_TARGET	8
#define IPR_VSET_BUS					0xff
#define IPR_IOA_BUS						0xff
#define IPR_IOA_TARGET					0xff
#define IPR_IOA_LUN						0xff
#define IPR_MAX_NUM_BUSES				16
#define IPR_MAX_BUS_TO_SCAN				IPR_MAX_NUM_BUSES
#define IPR_NUM_RESET_RELOAD_RETRIES		3
#define IPR_NUM_INTERNAL_CMD_BLKS	(IPR_NUM_HCAMS + \
((IPR_NUM_RESET_RELOAD_RETRIES + 1) * 2) + 4)
#define IPR_MAX_COMMANDS		IPR_NUM_BASE_CMD_BLKS
#define IPR_NUM_CMD_BLKS		(IPR_NUM_BASE_CMD_BLKS + \
IPR_NUM_INTERNAL_CMD_BLKS)
#define IPR_MAX_PHYSICAL_DEVS				192
#define IPR_DEFAULT_SIS64_DEVS				1024
#define IPR_MAX_SIS64_DEVS				4096
#define IPR_MAX_SGLIST					64
#define IPR_IOA_MAX_SECTORS				32767
#define IPR_VSET_MAX_SECTORS				512
#define IPR_MAX_CDB_LEN					16
#define IPR_MAX_HRRQ_RETRIES				3
#define IPR_DEFAULT_BUS_WIDTH				16
#define IPR_80MBs_SCSI_RATE		((80 * 10) / (IPR_DEFAULT_BUS_WIDTH / 8))
#define IPR_U160_SCSI_RATE	((160 * 10) / (IPR_DEFAULT_BUS_WIDTH / 8))
#define IPR_U320_SCSI_RATE	((320 * 10) / (IPR_DEFAULT_BUS_WIDTH / 8))
#define IPR_MAX_SCSI_RATE(width) ((320 * 10) / ((width) / 8))
#define IPR_IOA_RES_HANDLE				0xffffffff
#define IPR_INVALID_RES_HANDLE			0
#define IPR_IOA_RES_ADDR				0x00ffffff
#define IPR_QUERY_RSRC_STATE				0xC2
#define IPR_RESET_DEVICE				0xC3
#define	IPR_RESET_TYPE_SELECT				0x80
#define	IPR_LUN_RESET					0x40
#define	IPR_TARGET_RESET					0x20
#define	IPR_BUS_RESET					0x10
#define	IPR_ATA_PHY_RESET					0x80
#define IPR_ID_HOST_RR_Q				0xC4
#define IPR_QUERY_IOA_CONFIG				0xC5
#define IPR_CANCEL_ALL_REQUESTS			0xCE
#define IPR_HOST_CONTROLLED_ASYNC			0xCF
#define	IPR_HCAM_CDB_OP_CODE_CONFIG_CHANGE	0x01
#define	IPR_HCAM_CDB_OP_CODE_LOG_DATA		0x02
#define IPR_SET_SUPPORTED_DEVICES			0xFB
#define IPR_SET_ALL_SUPPORTED_DEVICES			0x80
#define IPR_IOA_SHUTDOWN				0xF7
#define	IPR_WR_BUF_DOWNLOAD_AND_SAVE			0x05
#define IPR_SHUTDOWN_TIMEOUT			(ipr_fastfail ? 60 * HZ : 10 * 60 * HZ)
#define IPR_VSET_RW_TIMEOUT			(ipr_fastfail ? 30 * HZ : 2 * 60 * HZ)
#define IPR_ABBREV_SHUTDOWN_TIMEOUT		(10 * HZ)
#define IPR_DUAL_IOA_ABBR_SHUTDOWN_TO	(2 * 60 * HZ)
#define IPR_DEVICE_RESET_TIMEOUT		(ipr_fastfail ? 10 * HZ : 30 * HZ)
#define IPR_CANCEL_ALL_TIMEOUT		(ipr_fastfail ? 10 * HZ : 30 * HZ)
#define IPR_ABORT_TASK_TIMEOUT		(ipr_fastfail ? 10 * HZ : 30 * HZ)
#define IPR_INTERNAL_TIMEOUT			(ipr_fastfail ? 10 * HZ : 30 * HZ)
#define IPR_WRITE_BUFFER_TIMEOUT		(10 * 60 * HZ)
#define IPR_SET_SUP_DEVICE_TIMEOUT		(2 * 60 * HZ)
#define IPR_REQUEST_SENSE_TIMEOUT		(10 * HZ)
#define IPR_OPERATIONAL_TIMEOUT		(5 * 60)
#define IPR_LONG_OPERATIONAL_TIMEOUT	(12 * 60)
#define IPR_WAIT_FOR_RESET_TIMEOUT		(2 * HZ)
#define IPR_CHECK_FOR_RESET_TIMEOUT		(HZ / 10)
#define IPR_WAIT_FOR_BIST_TIMEOUT		(2 * HZ)
#define IPR_PCI_RESET_TIMEOUT			(HZ / 2)
#define IPR_SIS32_DUMP_TIMEOUT			(15 * HZ)
#define IPR_SIS64_DUMP_TIMEOUT			(40 * HZ)
#define IPR_DUMP_DELAY_SECONDS			4
#define IPR_DUMP_DELAY_TIMEOUT			(IPR_DUMP_DELAY_SECONDS * HZ)
#define IPR_VENDOR_ID_LEN			8
#define IPR_PROD_ID_LEN				16
#define IPR_SERIAL_NUM_LEN			8
#define IPR_FMT2_MBX_ADDR_MASK				0x0fffffff
#define IPR_FMT2_MBX_BAR_SEL_MASK			0xf0000000
#define IPR_FMT2_MKR_BAR_SEL_SHIFT			28
#define IPR_GET_FMT2_BAR_SEL(mbx) \
(((mbx) & IPR_FMT2_MBX_BAR_SEL_MASK) >> IPR_FMT2_MKR_BAR_SEL_SHIFT)
#define IPR_SDT_FMT2_BAR0_SEL				0x0
#define IPR_SDT_FMT2_BAR1_SEL				0x1
#define IPR_SDT_FMT2_BAR2_SEL				0x2
#define IPR_SDT_FMT2_BAR3_SEL				0x3
#define IPR_SDT_FMT2_BAR4_SEL				0x4
#define IPR_SDT_FMT2_BAR5_SEL				0x5
#define IPR_SDT_FMT2_EXP_ROM_SEL			0x8
#define IPR_FMT2_SDT_READY_TO_USE			0xC4D4E3F2
#define IPR_FMT3_SDT_READY_TO_USE			0xC4D4E3F3
#define IPR_DOORBELL					0x82800000
#define IPR_RUNTIME_RESET				0x40000000
#define IPR_IPL_INIT_MIN_STAGE_TIME			5
#define IPR_IPL_INIT_DEFAULT_STAGE_TIME                 15
#define IPR_IPL_INIT_STAGE_UNKNOWN			0x0
#define IPR_IPL_INIT_STAGE_TRANSOP			0xB0000000
#define IPR_IPL_INIT_STAGE_MASK				0xff000000
#define IPR_IPL_INIT_STAGE_TIME_MASK			0x0000ffff
#define IPR_PCII_IPL_STAGE_CHANGE			(0x80000000 >> 0)
#define IPR_PCII_IOA_TRANS_TO_OPER			(0x80000000 >> 0)
#define IPR_PCII_IOARCB_XFER_FAILED			(0x80000000 >> 3)
#define IPR_PCII_IOA_UNIT_CHECKED			(0x80000000 >> 4)
#define IPR_PCII_NO_HOST_RRQ				(0x80000000 >> 5)
#define IPR_PCII_CRITICAL_OPERATION			(0x80000000 >> 6)
#define IPR_PCII_IO_DEBUG_ACKNOWLEDGE		(0x80000000 >> 7)
#define IPR_PCII_IOARRIN_LOST				(0x80000000 >> 27)
#define IPR_PCII_MMIO_ERROR				(0x80000000 >> 28)
#define IPR_PCII_PROC_ERR_STATE			(0x80000000 >> 29)
#define IPR_PCII_HRRQ_UPDATED				(0x80000000 >> 30)
#define IPR_PCII_CORE_ISSUED_RST_REQ		(0x80000000 >> 31)
#define IPR_PCII_ERROR_INTERRUPTS \
(IPR_PCII_IOARCB_XFER_FAILED | IPR_PCII_IOA_UNIT_CHECKED | \
IPR_PCII_NO_HOST_RRQ | IPR_PCII_IOARRIN_LOST | IPR_PCII_MMIO_ERROR)
#define IPR_PCII_OPER_INTERRUPTS \
(IPR_PCII_ERROR_INTERRUPTS | IPR_PCII_HRRQ_UPDATED | IPR_PCII_IOA_TRANS_TO_OPER)
#define IPR_UPROCI_RESET_ALERT			(0x80000000 >> 7)
#define IPR_UPROCI_IO_DEBUG_ALERT			(0x80000000 >> 9)
#define IPR_UPROCI_SIS64_START_BIST			(0x80000000 >> 23)
#define IPR_LDUMP_MAX_LONG_ACK_DELAY_IN_USEC		200000
#define IPR_LDUMP_MAX_SHORT_ACK_DELAY_IN_USEC		200000
#define IPR_FMT2_MAX_IOA_DUMP_SIZE			(4 * 1024 * 1024)
#define IPR_FMT3_MAX_IOA_DUMP_SIZE			(32 * 1024 * 1024)
#define IPR_FMT2_NUM_SDT_ENTRIES			511
#define IPR_FMT3_NUM_SDT_ENTRIES			0xFFF
#define IPR_FMT2_MAX_NUM_DUMP_PAGES	((IPR_FMT2_MAX_IOA_DUMP_SIZE / PAGE_SIZE) + 1)
#define IPR_FMT3_MAX_NUM_DUMP_PAGES	((IPR_FMT3_MAX_IOA_DUMP_SIZE / PAGE_SIZE) + 1)
#define IPR_NUM_IOADL_ENTRIES			IPR_MAX_SGLIST
struct ipr_res_addr __attribute__((packed, aligned (4)));
struct ipr_std_inq_vpids __attribute__((packed));
struct ipr_vpd __attribute__((packed));
struct ipr_ext_vpd __attribute__((packed));
struct ipr_ext_vpd64 __attribute__((packed));
struct ipr_std_inq_data __attribute__ ((packed));
#define IPR_RES_TYPE_AF_DASD		0x00
#define IPR_RES_TYPE_GENERIC_SCSI	0x01
#define IPR_RES_TYPE_VOLUME_SET		0x02
#define IPR_RES_TYPE_REMOTE_AF_DASD	0x03
#define IPR_RES_TYPE_GENERIC_ATA	0x04
#define IPR_RES_TYPE_ARRAY		0x05
#define IPR_RES_TYPE_IOAFP		0xff
struct ipr_config_table_entry __attribute__ ((packed, aligned (4)));
struct ipr_config_table_entry64 __attribute__ ((packed, aligned (8)));
struct ipr_config_table_hdr __attribute__((packed, aligned (4)));
struct ipr_config_table_hdr64 __attribute__((packed, aligned (4)));
struct ipr_config_table __attribute__((packed, aligned (4)));
struct ipr_config_table64 __attribute__((packed, aligned (8)));
struct ipr_config_table_entry_wrapper ;
struct ipr_hostrcb_cfg_ch_not __attribute__((packed, aligned (4)));
struct ipr_supported_device __attribute__((packed, aligned (4)));
struct ipr_cmd_pkt __attribute__ ((packed, aligned(4)));
struct ipr_ioarcb_ata_regs __attribute__ ((packed, aligned(4)));
struct ipr_ioadl_desc __attribute__((packed, aligned (8)));
struct ipr_ioadl64_desc __attribute__((packed, aligned (16)));
struct ipr_ata64_ioadl __attribute__((packed, aligned (16)));
struct ipr_ioarcb_add_data __attribute__ ((packed, aligned (4)));
struct ipr_ioarcb_sis64_add_addr_ecb __attribute__((packed, aligned (8)));
struct ipr_ioarcb __attribute__((packed, aligned (4)));
struct ipr_ioasa_vset __attribute__((packed, aligned (4)));
struct ipr_ioasa_af_dasd __attribute__((packed, aligned (4)));
struct ipr_ioasa_gpdd __attribute__((packed, aligned (4)));
struct ipr_ioasa_gata __attribute__((packed, aligned (4)));
struct ipr_auto_sense ;
struct ipr_ioasa_hdr __attribute__((packed, aligned (4)));
struct ipr_ioasa __attribute__((packed, aligned (4)));
struct ipr_ioasa64 __attribute__((packed, aligned (4)));
struct ipr_mode_parm_hdr __attribute__((packed));
struct ipr_mode_pages __attribute__((packed));
struct ipr_mode_page_hdr __attribute__ ((packed));
struct ipr_dev_bus_entry __attribute__((packed, aligned (4)));
struct ipr_mode_page28 __attribute__((packed));
struct ipr_mode_page24 __attribute__((packed));
struct ipr_ioa_vpd __attribute__((packed));
struct ipr_inquiry_page3 __attribute__((packed));
struct ipr_inquiry_cap __attribute__((packed));
#define IPR_INQUIRY_PAGE0_ENTRIES 20
struct ipr_inquiry_page0 __attribute__((packed));
struct ipr_hostrcb_device_data_entry __attribute__((packed, aligned (4)));
struct ipr_hostrcb_device_data_entry_enhanced __attribute__((packed, aligned (4)));
struct ipr_hostrcb64_device_data_entry_enhanced __attribute__((packed, aligned (4)));
struct ipr_hostrcb_array_data_entry __attribute__((packed, aligned (4)));
struct ipr_hostrcb64_array_data_entry __attribute__((packed, aligned (4)));
struct ipr_hostrcb_array_data_entry_enhanced __attribute__((packed, aligned (4)));
struct ipr_hostrcb_type_ff_error __attribute__((packed, aligned (4)));
struct ipr_hostrcb_type_01_error __attribute__((packed, aligned (4)));
struct ipr_hostrcb_type_02_error __attribute__((packed, aligned (4)));
struct ipr_hostrcb_type_12_error __attribute__((packed, aligned (4)));
struct ipr_hostrcb_type_03_error __attribute__((packed, aligned (4)));
struct ipr_hostrcb_type_13_error __attribute__((packed, aligned (4)));
struct ipr_hostrcb_type_23_error __attribute__((packed, aligned (4)));
struct ipr_hostrcb_type_04_error __attribute__((packed, aligned (4)));
struct ipr_hostrcb_type_14_error __attribute__((packed, aligned (4)));
struct ipr_hostrcb_type_24_error __attribute__((packed, aligned (4)));
struct ipr_hostrcb_type_07_error __attribute__((packed, aligned (4)));
struct ipr_hostrcb_type_17_error __attribute__((packed, aligned (4)));
struct ipr_hostrcb_config_element __attribute__((packed, aligned (4)));
struct ipr_hostrcb64_config_element __attribute__((packed, aligned (8)));
struct ipr_hostrcb_fabric_desc __attribute__((packed, aligned (4)));
struct ipr_hostrcb64_fabric_desc __attribute__((packed, aligned (8)));
#define for_each_fabric_cfg(fabric, cfg) \
for (cfg = (fabric)->elem; \
cfg < ((fabric)->elem + be16_to_cpu((fabric)->num_entries)); \
cfg++)
struct ipr_hostrcb_type_20_error __attribute__((packed, aligned (4)));
struct ipr_hostrcb_type_30_error __attribute__((packed, aligned (4)));
struct ipr_hostrcb_error __attribute__((packed, aligned (4)));
struct ipr_hostrcb64_error __attribute__((packed, aligned (8)));
struct ipr_hostrcb_raw __attribute__((packed, aligned (4)));
struct ipr_hcam __attribute__((packed, aligned (4)));
struct ipr_hostrcb ;
struct ipr_sdt_entry __attribute__((packed, aligned (4)));
struct ipr_sdt_header __attribute__((packed, aligned (4)));
struct ipr_sdt __attribute__((packed, aligned (4)));
struct ipr_uc_sdt __attribute__((packed, aligned (4)));
struct ipr_bus_attributes ;
struct ipr_sata_port ;
struct ipr_resource_entry ;
struct ipr_resource_hdr ;
struct ipr_misc_cbs ;
struct ipr_interrupt_offsets ;
struct ipr_interrupts ;
struct ipr_chip_cfg_t ;
struct ipr_chip_t ;
enum ipr_shutdown_type ;
struct ipr_trace_entry ;
struct ipr_sglist ;
enum ipr_sdt_state ;
struct ipr_ioa_cfg ;
struct ipr_cmnd ;
struct ipr_ses_table_entry ;
struct ipr_dump_header __attribute__((packed, aligned (4)));
struct ipr_dump_entry_header __attribute__((packed, aligned (4)));
struct ipr_dump_location_entry __attribute__((packed));
struct ipr_dump_trace_entry __attribute__((packed, aligned (4)));
struct ipr_dump_version_entry ;
struct ipr_dump_ioa_type_entry ;
struct ipr_driver_dump __attribute__((packed));
struct ipr_ioa_dump __attribute__((packed, aligned (4)));
struct ipr_dump ;
struct ipr_error_table_t ;
struct ipr_software_inq_lid_info __attribute__((packed, aligned (4)));
struct ipr_ucode_image_header __attribute__((packed, aligned (4)));
#define IPR_DBG_CMD(CMD) if (ipr_debug)
#define ipr_create_trace_file(kobj, attr) sysfs_create_bin_file(kobj, attr)
#define ipr_remove_trace_file(kobj, attr) sysfs_remove_bin_file(kobj, attr)
#define ipr_create_trace_file(kobj, attr) 0
#define ipr_remove_trace_file(kobj, attr) do  while(0)
#define ipr_create_dump_file(kobj, attr) sysfs_create_bin_file(kobj, attr)
#define ipr_remove_dump_file(kobj, attr) sysfs_remove_bin_file(kobj, attr)
#define ipr_create_dump_file(kobj, attr) 0
#define ipr_remove_dump_file(kobj, attr) do  while(0)
#define ipr_err(...) printk(KERN_ERR IPR_NAME ": "__VA_ARGS__)
#define ipr_info(...) printk(KERN_INFO IPR_NAME ": "__VA_ARGS__)
#define ipr_dbg(...) IPR_DBG_CMD(printk(KERN_INFO IPR_NAME ": "__VA_ARGS__))
#define ipr_res_printk(level, ioa_cfg, bus, target, lun, fmt, ...) \
printk(level IPR_NAME ": %d:%d:%d:%d: " fmt, (ioa_cfg)->host->host_no, \
bus, target, lun, ##__VA_ARGS__)
#define ipr_res_err(ioa_cfg, res, fmt, ...) \
ipr_res_printk(KERN_ERR, ioa_cfg, (res)->bus, (res)->target, (res)->lun, fmt, ##__VA_ARGS__)
#define ipr_ra_printk(level, ioa_cfg, ra, fmt, ...) \
printk(level IPR_NAME ": %d:%d:%d:%d: " fmt, (ioa_cfg)->host->host_no, \
(ra).bus, (ra).target, (ra).lun, ##__VA_ARGS__)
#define ipr_ra_err(ioa_cfg, ra, fmt, ...) \
ipr_ra_printk(KERN_ERR, ioa_cfg, ra, fmt, ##__VA_ARGS__)
#define ipr_phys_res_err(ioa_cfg, res, fmt, ...)			\
#define ipr_hcam_err(hostrcb, fmt, ...)					\
#define ipr_trace ipr_dbg("%s: %s: Line: %d\n",\
__FILE__, __func__, __LINE__)
#define ENTER IPR_DBG_CMD(printk(KERN_INFO IPR_NAME": Entering %s\n", __func__))
#define LEAVE IPR_DBG_CMD(printk(KERN_INFO IPR_NAME": Leaving %s\n", __func__))
#define ipr_err_separator \
ipr_err("----------------------------------------------------------\n")
static inline int ipr_is_ioa_resource(struct ipr_resource_entry *res)
static inline int ipr_is_af_dasd_device(struct ipr_resource_entry *res)
static inline int ipr_is_vset_device(struct ipr_resource_entry *res)
static inline int ipr_is_gscsi(struct ipr_resource_entry *res)
static inline int ipr_is_scsi_disk(struct ipr_resource_entry *res)
static inline int ipr_is_gata(struct ipr_resource_entry *res)
static inline int ipr_is_naca_model(struct ipr_resource_entry *res)
static inline int ipr_is_device(struct ipr_hostrcb *hostrcb)
static inline int ipr_sdt_is_fmt2(u32 sdt_word)
static inline void writeq(u64 val, void __iomem *addr)
