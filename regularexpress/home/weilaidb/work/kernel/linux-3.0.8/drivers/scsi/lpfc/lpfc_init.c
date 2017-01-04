char *_dump_buf_data;
unsigned long _dump_buf_data_order;
char *_dump_buf_dif;
unsigned long _dump_buf_dif_order;
spinlock_t _dump_buf_lock;
static void lpfc_get_hba_model_desc(struct lpfc_hba *, uint8_t *, uint8_t *);
static int lpfc_post_rcv_buf(struct lpfc_hba *);
static int lpfc_sli4_queue_create(struct lpfc_hba *);
static void lpfc_sli4_queue_destroy(struct lpfc_hba *);
static int lpfc_create_bootstrap_mbox(struct lpfc_hba *);
static int lpfc_setup_endian_order(struct lpfc_hba *);
static int lpfc_sli4_read_config(struct lpfc_hba *);
static void lpfc_destroy_bootstrap_mbox(struct lpfc_hba *);
static void lpfc_free_sgl_list(struct lpfc_hba *);
static int lpfc_init_sgl_list(struct lpfc_hba *);
static int lpfc_init_active_sgl_array(struct lpfc_hba *);
static void lpfc_free_active_sgl(struct lpfc_hba *);
static int lpfc_hba_down_post_s3(struct lpfc_hba *phba);
static int lpfc_hba_down_post_s4(struct lpfc_hba *phba);
static int lpfc_sli4_cq_event_pool_create(struct lpfc_hba *);
static void lpfc_sli4_cq_event_pool_destroy(struct lpfc_hba *);
static void lpfc_sli4_cq_event_release_all(struct lpfc_hba *);
static struct scsi_transport_template *lpfc_transport_template = NULL;
static struct scsi_transport_template *lpfc_vport_transport_template = NULL;
static DEFINE_IDR(lpfc_hba_index);
int
lpfc_config_port_prep(struct lpfc_hba *phba)
static void
lpfc_config_async_cmpl(struct lpfc_hba * phba, LPFC_MBOXQ_t * pmboxq)
static void
lpfc_dump_wakeup_param_cmpl(struct lpfc_hba *phba, LPFC_MBOXQ_t *pmboxq)
void
lpfc_update_vport_wwn(struct lpfc_vport *vport)
int
lpfc_config_port_post(struct lpfc_hba *phba)
int
lpfc_hba_init_link(struct lpfc_hba *phba, uint32_t flag)
int
lpfc_hba_down_link(struct lpfc_hba *phba, uint32_t flag)
int
lpfc_hba_down_prep(struct lpfc_hba *phba)
static int
lpfc_hba_down_post_s3(struct lpfc_hba *phba)
static int
lpfc_hba_down_post_s4(struct lpfc_hba *phba)
int
lpfc_hba_down_post(struct lpfc_hba *phba)
static void
lpfc_hb_timeout(unsigned long ptr)
static void
lpfc_rrq_timeout(unsigned long ptr)
static void
lpfc_hb_mbox_cmpl(struct lpfc_hba * phba, LPFC_MBOXQ_t * pmboxq)
void
lpfc_hb_timeout_handler(struct lpfc_hba *phba)
static void
lpfc_offline_eratt(struct lpfc_hba *phba)
static void
lpfc_sli4_offline_eratt(struct lpfc_hba *phba)
static void
lpfc_handle_deferred_eratt(struct lpfc_hba *phba)
static void
lpfc_board_errevt_to_mgmt(struct lpfc_hba *phba)
static void
lpfc_handle_eratt_s3(struct lpfc_hba *phba)
static void
lpfc_handle_eratt_s4(struct lpfc_hba *phba)
void
lpfc_handle_eratt(struct lpfc_hba *phba)
void
lpfc_handle_latt(struct lpfc_hba *phba)
int
lpfc_parse_vpd(struct lpfc_hba *phba, uint8_t *vpd, int len)
static void
lpfc_get_hba_model_desc(struct lpfc_hba *phba, uint8_t *mdp, uint8_t *descp)
int
lpfc_post_buffer(struct lpfc_hba *phba, struct lpfc_sli_ring *pring, int cnt)
static int
lpfc_post_rcv_buf(struct lpfc_hba *phba)
#define S(N,V) (((V)<<(N))|((V)>>(32-(N))))
static void
lpfc_sha_init(uint32_t * HashResultPointer)
static void
lpfc_sha_iterate(uint32_t * HashResultPointer, uint32_t * HashWorkingPointer)
static void
lpfc_challenge_key(uint32_t * RandomChallenge, uint32_t * HashWorking)
void
lpfc_hba_init(struct lpfc_hba *phba, uint32_t *hbainit)
void
lpfc_cleanup(struct lpfc_vport *vport)
void
lpfc_stop_vport_timers(struct lpfc_vport *vport)
void
__lpfc_sli4_stop_fcf_redisc_wait_timer(struct lpfc_hba *phba)
void
lpfc_sli4_stop_fcf_redisc_wait_timer(struct lpfc_hba *phba)
void
lpfc_stop_hba_timers(struct lpfc_hba *phba)
static void
lpfc_block_mgmt_io(struct lpfc_hba * phba)
int
lpfc_online(struct lpfc_hba *phba)
void
lpfc_unblock_mgmt_io(struct lpfc_hba * phba)
void
lpfc_offline_prep(struct lpfc_hba * phba)
void
lpfc_offline(struct lpfc_hba *phba)
static int
lpfc_scsi_free(struct lpfc_hba *phba)
struct lpfc_vport *
lpfc_create_port(struct lpfc_hba *phba, int instance, struct device *dev)
void
destroy_port(struct lpfc_vport *vport)
int
lpfc_get_instance(void)
int lpfc_scan_finished(struct Scsi_Host *shost, unsigned long time)
void lpfc_host_attrib_init(struct Scsi_Host *shost)
static void
lpfc_stop_port_s3(struct lpfc_hba *phba)
static void
lpfc_stop_port_s4(struct lpfc_hba *phba)
void
lpfc_stop_port(struct lpfc_hba *phba)
void
lpfc_fcf_redisc_wait_start_timer(struct lpfc_hba *phba)
void
lpfc_sli4_fcf_redisc_wait_tmo(unsigned long ptr)
static uint16_t
lpfc_sli4_parse_latt_fault(struct lpfc_hba *phba,
struct lpfc_acqe_link *acqe_link)
static uint8_t
lpfc_sli4_parse_latt_type(struct lpfc_hba *phba,
struct lpfc_acqe_link *acqe_link)
static uint8_t
lpfc_sli4_parse_latt_link_speed(struct lpfc_hba *phba,
struct lpfc_acqe_link *acqe_link)
static void
lpfc_sli4_async_link_evt(struct lpfc_hba *phba,
struct lpfc_acqe_link *acqe_link)
static void
lpfc_sli4_async_fc_evt(struct lpfc_hba *phba, struct lpfc_acqe_fc_la *acqe_fc)
static void
lpfc_sli4_async_sli_evt(struct lpfc_hba *phba, struct lpfc_acqe_sli *acqe_sli)
static struct lpfc_nodelist *
lpfc_sli4_perform_vport_cvl(struct lpfc_vport *vport)
static void
lpfc_sli4_perform_all_vport_cvl(struct lpfc_hba *phba)
static void
lpfc_sli4_async_fip_evt(struct lpfc_hba *phba,
struct lpfc_acqe_fip *acqe_fip)
static void
lpfc_sli4_async_dcbx_evt(struct lpfc_hba *phba,
struct lpfc_acqe_dcbx *acqe_dcbx)
static void
lpfc_sli4_async_grp5_evt(struct lpfc_hba *phba,
struct lpfc_acqe_grp5 *acqe_grp5)
void lpfc_sli4_async_event_proc(struct lpfc_hba *phba)
void lpfc_sli4_fcf_redisc_event_proc(struct lpfc_hba *phba)
int
lpfc_api_table_setup(struct lpfc_hba *phba, uint8_t dev_grp)
static void lpfc_log_intr_mode(struct lpfc_hba *phba, uint32_t intr_mode)
static int
lpfc_enable_pci_dev(struct lpfc_hba *phba)
static void
lpfc_disable_pci_dev(struct lpfc_hba *phba)
void
lpfc_reset_hba(struct lpfc_hba *phba)
uint16_t
lpfc_sli_sriov_nr_virtfn_get(struct lpfc_hba *phba)
int
lpfc_sli_probe_sriov_nr_virtfn(struct lpfc_hba *phba, int nr_vfn)
static int
lpfc_sli_driver_resource_setup(struct lpfc_hba *phba)
static void
lpfc_sli_driver_resource_unset(struct lpfc_hba *phba)
static int
lpfc_sli4_driver_resource_setup(struct lpfc_hba *phba)
static void
lpfc_sli4_driver_resource_unset(struct lpfc_hba *phba)
int
lpfc_init_api_table_setup(struct lpfc_hba *phba, uint8_t dev_grp)
static int
lpfc_setup_driver_resource_phase1(struct lpfc_hba *phba)
static int
lpfc_setup_driver_resource_phase2(struct lpfc_hba *phba)
static void
lpfc_unset_driver_resource_phase2(struct lpfc_hba *phba)
static void
lpfc_free_iocb_list(struct lpfc_hba *phba)
static int
lpfc_init_iocb_list(struct lpfc_hba *phba, int iocb_count)
static void
lpfc_free_sgl_list(struct lpfc_hba *phba)
static int
lpfc_init_active_sgl_array(struct lpfc_hba *phba)
static void
lpfc_free_active_sgl(struct lpfc_hba *phba)
static int
lpfc_init_sgl_list(struct lpfc_hba *phba)
int
lpfc_sli4_init_rpi_hdrs(struct lpfc_hba *phba)
struct lpfc_rpi_hdr *
lpfc_sli4_create_rpi_hdr(struct lpfc_hba *phba)
void
lpfc_sli4_remove_rpi_hdrs(struct lpfc_hba *phba)
static struct lpfc_hba *
lpfc_hba_alloc(struct pci_dev *pdev)
static void
lpfc_hba_free(struct lpfc_hba *phba)
static int
lpfc_create_shost(struct lpfc_hba *phba)
static void
lpfc_destroy_shost(struct lpfc_hba *phba)
static void
lpfc_setup_bg(struct lpfc_hba *phba, struct Scsi_Host *shost)
static void
lpfc_post_init_setup(struct lpfc_hba *phba)
static int
lpfc_sli_pci_mem_setup(struct lpfc_hba *phba)
static void
lpfc_sli_pci_mem_unset(struct lpfc_hba *phba)
int
lpfc_sli4_post_status_check(struct lpfc_hba *phba)
static void
lpfc_sli4_bar0_register_memmap(struct lpfc_hba *phba, uint32_t if_type)
static void
lpfc_sli4_bar1_register_memmap(struct lpfc_hba *phba)
static int
lpfc_sli4_bar2_register_memmap(struct lpfc_hba *phba, uint32_t vf)
static int
lpfc_create_bootstrap_mbox(struct lpfc_hba *phba)
static void
lpfc_destroy_bootstrap_mbox(struct lpfc_hba *phba)
static int
lpfc_sli4_read_config(struct lpfc_hba *phba)
static int
lpfc_setup_endian_order(struct lpfc_hba *phba)
static int
lpfc_sli4_queue_create(struct lpfc_hba *phba)
static void
lpfc_sli4_queue_destroy(struct lpfc_hba *phba)
int
lpfc_sli4_queue_setup(struct lpfc_hba *phba)
void
lpfc_sli4_queue_unset(struct lpfc_hba *phba)
static int
lpfc_sli4_cq_event_pool_create(struct lpfc_hba *phba)
static void
lpfc_sli4_cq_event_pool_destroy(struct lpfc_hba *phba)
struct lpfc_cq_event *
__lpfc_sli4_cq_event_alloc(struct lpfc_hba *phba)
struct lpfc_cq_event *
lpfc_sli4_cq_event_alloc(struct lpfc_hba *phba)
void
__lpfc_sli4_cq_event_release(struct lpfc_hba *phba,
struct lpfc_cq_event *cq_event)
void
lpfc_sli4_cq_event_release(struct lpfc_hba *phba,
struct lpfc_cq_event *cq_event)
static void
lpfc_sli4_cq_event_release_all(struct lpfc_hba *phba)
int
lpfc_pci_function_reset(struct lpfc_hba *phba)
static int
lpfc_sli4_send_nop_mbox_cmds(struct lpfc_hba *phba, uint32_t cnt)
static int
lpfc_sli4_pci_mem_setup(struct lpfc_hba *phba)
static void
lpfc_sli4_pci_mem_unset(struct lpfc_hba *phba)
static int
lpfc_sli_enable_msix(struct lpfc_hba *phba)
static void
lpfc_sli_disable_msix(struct lpfc_hba *phba)
static int
lpfc_sli_enable_msi(struct lpfc_hba *phba)
static void
lpfc_sli_disable_msi(struct lpfc_hba *phba)
static uint32_t
lpfc_sli_enable_intr(struct lpfc_hba *phba, uint32_t cfg_mode)
static void
lpfc_sli_disable_intr(struct lpfc_hba *phba)
static int
lpfc_sli4_enable_msix(struct lpfc_hba *phba)
static void
lpfc_sli4_disable_msix(struct lpfc_hba *phba)
static int
lpfc_sli4_enable_msi(struct lpfc_hba *phba)
static void
lpfc_sli4_disable_msi(struct lpfc_hba *phba)
static uint32_t
lpfc_sli4_enable_intr(struct lpfc_hba *phba, uint32_t cfg_mode)
static void
lpfc_sli4_disable_intr(struct lpfc_hba *phba)
static void
lpfc_unset_hba(struct lpfc_hba *phba)
static void
lpfc_sli4_unset_hba(struct lpfc_hba *phba)
static void
lpfc_sli4_xri_exchange_busy_wait(struct lpfc_hba *phba)
static void
lpfc_sli4_hba_unset(struct lpfc_hba *phba)
int
lpfc_pc_sli4_params_get(struct lpfc_hba *phba, LPFC_MBOXQ_t *mboxq)
int
lpfc_get_sli4_parameters(struct lpfc_hba *phba, LPFC_MBOXQ_t *mboxq)
static int __devinit
lpfc_pci_probe_one_s3(struct pci_dev *pdev, const struct pci_device_id *pid)
static void __devexit
lpfc_pci_remove_one_s3(struct pci_dev *pdev)
static int
lpfc_pci_suspend_one_s3(struct pci_dev *pdev, pm_message_t msg)
static int
lpfc_pci_resume_one_s3(struct pci_dev *pdev)
static void
lpfc_sli_prep_dev_for_recover(struct lpfc_hba *phba)
static void
lpfc_sli_prep_dev_for_reset(struct lpfc_hba *phba)
static void
lpfc_sli_prep_dev_for_perm_failure(struct lpfc_hba *phba)
static pci_ers_result_t
lpfc_io_error_detected_s3(struct pci_dev *pdev, pci_channel_state_t state)
static pci_ers_result_t
lpfc_io_slot_reset_s3(struct pci_dev *pdev)
static void
lpfc_io_resume_s3(struct pci_dev *pdev)
int
lpfc_sli4_get_els_iocb_cnt(struct lpfc_hba *phba)
int
lpfc_write_firmware(struct lpfc_hba *phba, const struct firmware *fw)
static int __devinit
lpfc_pci_probe_one_s4(struct pci_dev *pdev, const struct pci_device_id *pid)
static void __devexit
lpfc_pci_remove_one_s4(struct pci_dev *pdev)
static int
lpfc_pci_suspend_one_s4(struct pci_dev *pdev, pm_message_t msg)
static int
lpfc_pci_resume_one_s4(struct pci_dev *pdev)
static void
lpfc_sli4_prep_dev_for_recover(struct lpfc_hba *phba)
static void
lpfc_sli4_prep_dev_for_reset(struct lpfc_hba *phba)
static void
lpfc_sli4_prep_dev_for_perm_failure(struct lpfc_hba *phba)
static pci_ers_result_t
lpfc_io_error_detected_s4(struct pci_dev *pdev, pci_channel_state_t state)
static pci_ers_result_t
lpfc_io_slot_reset_s4(struct pci_dev *pdev)
static void
lpfc_io_resume_s4(struct pci_dev *pdev)
static int __devinit
lpfc_pci_probe_one(struct pci_dev *pdev, const struct pci_device_id *pid)
static void __devexit
lpfc_pci_remove_one(struct pci_dev *pdev)
static int
lpfc_pci_suspend_one(struct pci_dev *pdev, pm_message_t msg)
static int
lpfc_pci_resume_one(struct pci_dev *pdev)
static pci_ers_result_t
lpfc_io_error_detected(struct pci_dev *pdev, pci_channel_state_t state)
static pci_ers_result_t
lpfc_io_slot_reset(struct pci_dev *pdev)
static void
lpfc_io_resume(struct pci_dev *pdev)
static struct pci_device_id lpfc_id_table[] = ;
MODULE_DEVICE_TABLE(pci, lpfc_id_table);
static struct pci_error_handlers lpfc_err_handler = ;
static struct pci_driver lpfc_driver = ;
static int __init
lpfc_init(void)
static void __exit
lpfc_exit(void)
module_init(lpfc_init);
module_exit(lpfc_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION(LPFC_MODULE_DESC);
MODULE_AUTHOR("Emulex Corporation - tech.support@emulex.com");
MODULE_VERSION("0:" LPFC_DRIVER_VERSION);
