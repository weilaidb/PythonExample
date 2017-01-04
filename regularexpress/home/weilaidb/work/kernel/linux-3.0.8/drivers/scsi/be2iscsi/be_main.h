#define _BEISCSI_MAIN_
#define DRV_NAME		"be2iscsi"
#define BUILD_STR		"2.103.298.0"
#define BE_NAME			"ServerEngines BladeEngine2" \
"Linux iSCSI Driver version" BUILD_STR
#define DRV_DESC		BE_NAME " " "Driver"
#define BE_VENDOR_ID		0x19A2
#define BE_DEVICE_ID1		0x212
#define OC_DEVICE_ID1		0x702
#define OC_DEVICE_ID2		0x703
#define BE_DEVICE_ID2		0x222
#define OC_DEVICE_ID3		0x712
#define BE2_IO_DEPTH		1024
#define BE2_MAX_SESSIONS	256
#define BE2_CMDS_PER_CXN	128
#define BE2_TMFS		16
#define BE2_NOPOUT_REQ		16
#define BE2_SGE			32
#define BE2_DEFPDU_HDR_SZ	64
#define BE2_DEFPDU_DATA_SZ	8192
#define MAX_CPUS		31
#define BEISCSI_SGLIST_ELEMENTS	30
#define BEISCSI_CMD_PER_LUN	128
#define BEISCSI_MAX_SECTORS	2048
#define BEISCSI_MAX_CMD_LEN	16
#define BEISCSI_NUM_MAX_LUN	256
#define BEISCSI_NUM_DEVICES_SUPPORTED	0x01
#define BEISCSI_MAX_FRAGS_INIT	192
#define BE_NUM_MSIX_ENTRIES	1
#define MPU_EP_CONTROL          0
#define MPU_EP_SEMAPHORE        0xac
#define BE2_SOFT_RESET          0x5c
#define BE2_PCI_ONLINE0         0xb0
#define BE2_PCI_ONLINE1         0xb4
#define BE2_SET_RESET           0x80
#define BE2_MPU_IRAM_ONLINE     0x00000080
#define BE_SENSE_INFO_SIZE		258
#define BE_ISCSI_PDU_HEADER_SIZE	64
#define BE_MIN_MEM_SIZE			16384
#define MAX_CMD_SZ			65536
#define IIOC_SCSI_DATA                  0x05
#define DBG_LVL				0x00000001
#define DBG_LVL_1			0x00000001
#define DBG_LVL_2			0x00000002
#define DBG_LVL_3			0x00000004
#define DBG_LVL_4			0x00000008
#define DBG_LVL_5			0x00000010
#define DBG_LVL_6			0x00000020
#define DBG_LVL_7			0x00000040
#define DBG_LVL_8			0x00000080
#define SE_DEBUG(debug_mask, fmt, args...)		\
do  while (0);
#define BE_ADAPTER_UP		0x00000000
#define BE_ADAPTER_LINK_DOWN	0x00000001
#define HWI_GET_ASYNC_PDU_CTX(phwi)	(phwi->phwi_ctxt->pasync_ctx)
#define PCICFG_MEMBAR_CTRL_INT_CTRL_OFFSET	0xfc
#define MEMBAR_CTRL_INT_CTRL_HOSTINTR_MASK	(1 << 29)
#define CEV_ISR0_OFFSET				0xC18
#define CEV_ISR_SIZE				4
#define DB_TXULP0_OFFSET 0x40
#define DB_RXULP0_OFFSET 0xA0
#define DB_EQ_OFFSET			DB_CQ_OFFSET
#define DB_EQ_RING_ID_MASK		0x1FF
#define DB_EQ_CLR_SHIFT			(9)
#define DB_EQ_EVNT_SHIFT		(10)
#define DB_EQ_NUM_POPPED_SHIFT		(16)
#define DB_EQ_REARM_SHIFT		(29)
#define DB_CQ_OFFSET			0x120
#define DB_CQ_RING_ID_MASK		0x3FF
#define DB_CQ_NUM_POPPED_SHIFT		(16)
#define DB_CQ_REARM_SHIFT		(29)
#define GET_HWI_CONTROLLER_WS(pc)	(pc->phwi_ctrlr)
#define HWI_GET_DEF_BUFQ_ID(pc) (((struct hwi_controller *)\
(GET_HWI_CONTROLLER_WS(pc)))->default_pdu_data.id)
#define HWI_GET_DEF_HDRQ_ID(pc) (((struct hwi_controller *)\
(GET_HWI_CONTROLLER_WS(pc)))->default_pdu_hdr.id)
#define PAGES_REQUIRED(x) \
((x < PAGE_SIZE) ? 1 :  ((x + PAGE_SIZE - 1) / PAGE_SIZE))
enum be_mem_enum ;
struct be_bus_address32 ;
struct be_bus_address64 ;
struct be_bus_address ;
struct mem_array ;
struct be_mem_descriptor ;
struct sgl_handle ;
struct hba_parameters ;
struct invalidate_command_table  __packed;
struct beiscsi_hba ;
struct beiscsi_session ;
struct beiscsi_conn ;
struct pdu_data_out ;
struct amap_pdu_data_out ;
struct be_cmd_bhs ;
struct beiscsi_io_task ;
struct be_nonio_bhs ;
struct be_status_bhs ;
struct iscsi_sge ;
struct amap_iscsi_sge ;
struct beiscsi_offload_params ;
#define OFFLD_PARAMS_ERL	0x00000003
#define OFFLD_PARAMS_DDE	0x00000004
#define OFFLD_PARAMS_HDE	0x00000008
#define OFFLD_PARAMS_IR2T	0x00000010
#define OFFLD_PARAMS_IMD	0x00000020
struct amap_beiscsi_offload_params ;
struct async_pdu_handle ;
struct hwi_async_entry ;
struct hwi_async_pdu_context ;
#define PDUCQE_CODE_MASK	0x0000003F
#define PDUCQE_DPL_MASK		0xFFFF0000
#define PDUCQE_INDEX_MASK	0x0000FFFF
struct i_t_dpdu_cqe  __packed;
struct amap_i_t_dpdu_cqe  __packed;
#define CQE_VALID_MASK	0x80000000
#define CQE_CODE_MASK	0x0000003F
#define CQE_CID_MASK	0x0000FFC0
#define EQE_VALID_MASK		0x00000001
#define EQE_MAJORCODE_MASK	0x0000000E
#define EQE_RESID_MASK		0xFFFF0000
struct be_eq_entry  __packed;
struct amap_eq_entry  __packed;
struct cq_db  __packed;
struct amap_cq_db  __packed;
void beiscsi_process_eq(struct beiscsi_hba *phba);
struct iscsi_wrb  __packed;
#define WRB_TYPE_MASK 0xF0000000
struct amap_iscsi_wrb  __packed;
struct wrb_handle *alloc_wrb_handle(struct beiscsi_hba *phba, unsigned int cid);
void
free_mgmt_sgl_handle(struct beiscsi_hba *phba, struct sgl_handle *psgl_handle);
void beiscsi_process_all_cqs(struct work_struct *work);
struct pdu_nop_out ;
struct amap_pdu_nop_out ;
#define PDUBASE_OPCODE_MASK	0x0000003F
#define PDUBASE_DATALENHI_MASK	0x0000FF00
#define PDUBASE_DATALENLO_MASK	0xFFFF0000
struct pdu_base  __packed;
struct amap_pdu_base ;
struct iscsi_target_context_update_wrb  __packed;
struct amap_iscsi_target_context_update_wrb  __packed;
struct be_ring ;
struct hwi_wrb_context ;
struct hwi_controller ;
enum hwh_type_enum ;
struct wrb_handle ;
struct hwi_context_memory ;
