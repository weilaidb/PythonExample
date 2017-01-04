#define TARGET_CORE_TRANSPORT_H
#define TARGET_CORE_VERSION			TARGET_CORE_MOD_VERSION
#define PYX_TRANSPORT_WINDOW_CLOSED_THRESHOLD	3
#define PYX_TRANSPORT_WINDOW_CLOSED_WAIT_SHORT	3
#define PYX_TRANSPORT_WINDOW_CLOSED_WAIT_LONG	10
#define PYX_TRANSPORT_STATUS_INTERVAL		5
#define PYX_TRANSPORT_SENT_TO_TRANSPORT		0
#define PYX_TRANSPORT_WRITE_PENDING		1
#define PYX_TRANSPORT_UNKNOWN_SAM_OPCODE	-1
#define PYX_TRANSPORT_HBA_QUEUE_FULL		-2
#define PYX_TRANSPORT_REQ_TOO_MANY_SECTORS	-3
#define PYX_TRANSPORT_OUT_OF_MEMORY_RESOURCES	-4
#define PYX_TRANSPORT_INVALID_CDB_FIELD		-5
#define PYX_TRANSPORT_INVALID_PARAMETER_LIST	-6
#define PYX_TRANSPORT_LU_COMM_FAILURE		-7
#define PYX_TRANSPORT_UNKNOWN_MODE_PAGE		-8
#define PYX_TRANSPORT_WRITE_PROTECTED		-9
#define PYX_TRANSPORT_TASK_TIMEOUT		-10
#define PYX_TRANSPORT_RESERVATION_CONFLICT	-11
#define PYX_TRANSPORT_ILLEGAL_REQUEST		-12
#define PYX_TRANSPORT_USE_SENSE_REASON		-13
#define SAM_STAT_RESERVATION_CONFLICT		0x18
#define TRANSPORT_PLUGIN_FREE			0
#define TRANSPORT_PLUGIN_REGISTERED		1
#define TRANSPORT_PLUGIN_PHBA_PDEV		1
#define TRANSPORT_PLUGIN_VHBA_PDEV		2
#define TRANSPORT_PLUGIN_VHBA_VDEV		3
#define TRANSPORT_TIMEOUT_TUR			10
#define TRANSPORT_TIMEOUT_TYPE_DISK		60
#define TRANSPORT_TIMEOUT_TYPE_ROM		120
#define TRANSPORT_TIMEOUT_TYPE_TAPE		600
#define TRANSPORT_TIMEOUT_TYPE_OTHER		300
#define TSF_EXCEPTION_CLEARED			0x01
#define SDF_FIRMWARE_VPD_UNIT_SERIAL		0x00000001
#define SDF_EMULATED_VPD_UNIT_SERIAL		0x00000002
#define SDF_USING_UDEV_PATH			0x00000004
#define SDF_USING_ALIAS				0x00000008
#define DF_READ_ONLY				0x00000001
#define DF_SPC2_RESERVATIONS			0x00000002
#define DF_SPC2_RESERVATIONS_WITH_ISID		0x00000004
#define DA_TASK_TIMEOUT_MAX			600
#define DA_MAX_UNMAP_LBA_COUNT			0
#define DA_MAX_UNMAP_BLOCK_DESC_COUNT		0
#define DA_UNMAP_GRANULARITY_DEFAULT		0
#define DA_UNMAP_GRANULARITY_ALIGNMENT_DEFAULT	0
#define DA_EMULATE_DPO				0
#define DA_EMULATE_FUA_WRITE			1
#define DA_EMULATE_FUA_READ			0
#define DA_EMULATE_WRITE_CACHE			0
#define DA_EMULATE_UA_INTLLCK_CTRL		0
#define DA_EMULATE_TAS				1
#define DA_EMULATE_TPU				0
#define DA_EMULATE_TPWS				0
#define DA_EMULATE_RESERVATIONS			0
#define DA_EMULATE_ALUA				0
#define DA_ENFORCE_PR_ISIDS			1
#define DA_STATUS_MAX_SECTORS_MIN		16
#define DA_STATUS_MAX_SECTORS_MAX		8192
#define SE_MODE_PAGE_BUF			512
#define MOD_MAX_SECTORS(ms, bs)			(ms % (PAGE_SIZE / bs))
struct se_mem;
struct se_subsystem_api;
extern struct kmem_cache *se_mem_cache;
extern int init_se_global(void);
extern void release_se_global(void);
extern void init_scsi_index_table(void);
extern u32 scsi_get_new_index(scsi_index_t);
extern void transport_init_queue_obj(struct se_queue_obj *);
extern int transport_subsystem_check_init(void);
extern int transport_subsystem_register(struct se_subsystem_api *);
extern void transport_subsystem_release(struct se_subsystem_api *);
extern void transport_load_plugins(void);
extern struct se_session *transport_init_session(void);
extern void __transport_register_session(struct se_portal_group *,
struct se_node_acl *,
struct se_session *, void *);
extern void transport_register_session(struct se_portal_group *,
struct se_node_acl *,
struct se_session *, void *);
extern void transport_free_session(struct se_session *);
extern void transport_deregister_session_configfs(struct se_session *);
extern void transport_deregister_session(struct se_session *);
extern void transport_cmd_finish_abort(struct se_cmd *, int);
extern void transport_cmd_finish_abort_tmr(struct se_cmd *);
extern void transport_complete_sync_cache(struct se_cmd *, int);
extern void transport_complete_task(struct se_task *, int);
extern void transport_add_task_to_execute_queue(struct se_task *,
struct se_task *,
struct se_device *);
extern void transport_remove_task_from_execute_queue(struct se_task *,
struct se_device *);
unsigned char *transport_dump_cmd_direction(struct se_cmd *);
extern void transport_dump_dev_state(struct se_device *, char *, int *);
extern void transport_dump_dev_info(struct se_device *, struct se_lun *,
unsigned long long, char *, int *);
extern void transport_dump_vpd_proto_id(struct t10_vpd *,
unsigned char *, int);
extern void transport_set_vpd_proto_id(struct t10_vpd *, unsigned char *);
extern int transport_dump_vpd_assoc(struct t10_vpd *,
unsigned char *, int);
extern int transport_set_vpd_assoc(struct t10_vpd *, unsigned char *);
extern int transport_dump_vpd_ident_type(struct t10_vpd *,
unsigned char *, int);
extern int transport_set_vpd_ident_type(struct t10_vpd *, unsigned char *);
extern int transport_dump_vpd_ident(struct t10_vpd *,
unsigned char *, int);
extern int transport_set_vpd_ident(struct t10_vpd *, unsigned char *);
extern struct se_device *transport_add_device_to_core_hba(struct se_hba *,
struct se_subsystem_api *,
struct se_subsystem_dev *, u32,
void *, struct se_dev_limits *,
const char *, const char *);
extern void transport_device_setup_cmd(struct se_cmd *);
extern void transport_init_se_cmd(struct se_cmd *,
struct target_core_fabric_ops *,
struct se_session *, u32, int, int,
unsigned char *);
extern void transport_free_se_cmd(struct se_cmd *);
extern int transport_generic_allocate_tasks(struct se_cmd *, unsigned char *);
extern int transport_generic_handle_cdb(struct se_cmd *);
extern int transport_generic_handle_cdb_map(struct se_cmd *);
extern int transport_generic_handle_data(struct se_cmd *);
extern void transport_new_cmd_failure(struct se_cmd *);
extern int transport_generic_handle_tmr(struct se_cmd *);
extern void transport_generic_free_cmd_intr(struct se_cmd *);
extern void __transport_stop_task_timer(struct se_task *, unsigned long *);
extern unsigned char transport_asciihex_to_binaryhex(unsigned char val[2]);
extern int transport_generic_map_mem_to_cmd(struct se_cmd *cmd, struct scatterlist *, u32,
struct scatterlist *, u32);
extern int transport_clear_lun_from_sessions(struct se_lun *);
extern int transport_check_aborted_status(struct se_cmd *, int);
extern int transport_send_check_condition_and_sense(struct se_cmd *, u8, int);
extern void transport_send_task_abort(struct se_cmd *);
extern void transport_release_cmd_to_pool(struct se_cmd *);
extern void transport_generic_free_cmd(struct se_cmd *, int, int, int);
extern void transport_generic_wait_for_cmds(struct se_cmd *, int);
extern u32 transport_calc_sg_num(struct se_task *, struct se_mem *, u32);
extern int transport_map_mem_to_sg(struct se_task *, struct list_head *,
void *, struct se_mem *,
struct se_mem **, u32 *, u32 *);
extern void transport_do_task_sg_chain(struct se_cmd *);
extern void transport_generic_process_write(struct se_cmd *);
extern int transport_generic_do_tmr(struct se_cmd *);
extern int core_alua_check_nonop_delay(struct se_cmd *);
extern int transport_emulate_control_cdb(struct se_task *);
struct se_mem  ____cacheline_aligned;
struct se_subsystem_api  ____cacheline_aligned;
#define TRANSPORT(dev)		((dev)->transport)
#define HBA_TRANSPORT(hba)	((hba)->transport)
extern struct se_global *se_global;
