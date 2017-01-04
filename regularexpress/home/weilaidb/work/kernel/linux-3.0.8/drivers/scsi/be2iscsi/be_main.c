static unsigned int be_iopoll_budget = 10;
static unsigned int be_max_phys_size = 64;
static unsigned int enable_msix = 1;
static unsigned int gcrashmode = 0;
static unsigned int num_hba = 0;
MODULE_DEVICE_TABLE(pci, beiscsi_pci_id_table);
MODULE_DESCRIPTION(DRV_DESC " " BUILD_STR);
MODULE_AUTHOR("ServerEngines Corporation");
MODULE_LICENSE("GPL");
module_param(be_iopoll_budget, int, 0);
module_param(enable_msix, int, 0);
module_param(be_max_phys_size, uint, S_IRUGO);
MODULE_PARM_DESC(be_max_phys_size, "Maximum Size (In Kilobytes) of physically"
"contiguous memory that can be allocated."
"Range is 16 - 128");
static int beiscsi_slave_configure(struct scsi_device *sdev)
static int beiscsi_eh_abort(struct scsi_cmnd *sc)
static int beiscsi_eh_device_reset(struct scsi_cmnd *sc)
static ssize_t beiscsi_show_boot_tgt_info(void *data, int type, char *buf)
static ssize_t beiscsi_show_boot_ini_info(void *data, int type, char *buf)
static ssize_t beiscsi_show_boot_eth_info(void *data, int type, char *buf)
static mode_t beiscsi_tgt_get_attr_visibility(void *data, int type)
static mode_t beiscsi_ini_get_attr_visibility(void *data, int type)
static mode_t beiscsi_eth_get_attr_visibility(void *data, int type)
static int beiscsi_setup_boot_info(struct beiscsi_hba *phba)
static DEFINE_PCI_DEVICE_TABLE(beiscsi_pci_id_table) = ;
MODULE_DEVICE_TABLE(pci, beiscsi_pci_id_table);
static struct scsi_host_template beiscsi_sht = ;
static struct scsi_transport_template *beiscsi_scsi_transport;
static struct beiscsi_hba *beiscsi_hba_alloc(struct pci_dev *pcidev)
static void beiscsi_unmap_pci_function(struct beiscsi_hba *phba)
static int beiscsi_map_pci_bars(struct beiscsi_hba *phba,
struct pci_dev *pcidev)
static int beiscsi_enable_pci(struct pci_dev *pcidev)
static int be_ctrl_init(struct beiscsi_hba *phba, struct pci_dev *pdev)
static void beiscsi_get_params(struct beiscsi_hba *phba)
static void hwi_ring_eq_db(struct beiscsi_hba *phba,
unsigned int id, unsigned int clr_interrupt,
unsigned int num_processed,
unsigned char rearm, unsigned char event)
static irqreturn_t be_isr_mcc(int irq, void *dev_id)
static irqreturn_t be_isr_msix(int irq, void *dev_id)
static irqreturn_t be_isr(int irq, void *dev_id)
static int beiscsi_init_irqs(struct beiscsi_hba *phba)
static void hwi_ring_cq_db(struct beiscsi_hba *phba,
unsigned int id, unsigned int num_processed,
unsigned char rearm, unsigned char event)
static unsigned int
beiscsi_process_async_pdu(struct beiscsi_conn *beiscsi_conn,
struct beiscsi_hba *phba,
unsigned short cid,
struct pdu_base *ppdu,
unsigned long pdu_len,
void *pbuffer, unsigned long buf_len)
static struct sgl_handle *alloc_io_sgl_handle(struct beiscsi_hba *phba)
static void
free_io_sgl_handle(struct beiscsi_hba *phba, struct sgl_handle *psgl_handle)
struct wrb_handle *alloc_wrb_handle(struct beiscsi_hba *phba, unsigned int cid)
static void
free_wrb_handle(struct beiscsi_hba *phba, struct hwi_wrb_context *pwrb_context,
struct wrb_handle *pwrb_handle)
static struct sgl_handle *alloc_mgmt_sgl_handle(struct beiscsi_hba *phba)
void
free_mgmt_sgl_handle(struct beiscsi_hba *phba, struct sgl_handle *psgl_handle)
static void
be_complete_io(struct beiscsi_conn *beiscsi_conn,
struct iscsi_task *task, struct sol_cqe *psol)
static void
be_complete_logout(struct beiscsi_conn *beiscsi_conn,
struct iscsi_task *task, struct sol_cqe *psol)
static void
be_complete_tmf(struct beiscsi_conn *beiscsi_conn,
struct iscsi_task *task, struct sol_cqe *psol)
static void
hwi_complete_drvr_msgs(struct beiscsi_conn *beiscsi_conn,
struct beiscsi_hba *phba, struct sol_cqe *psol)
static void
be_complete_nopin_resp(struct beiscsi_conn *beiscsi_conn,
struct iscsi_task *task, struct sol_cqe *psol)
static void hwi_complete_cmd(struct beiscsi_conn *beiscsi_conn,
struct beiscsi_hba *phba, struct sol_cqe *psol)
static struct list_head *hwi_get_async_busy_list(struct hwi_async_pdu_context
*pasync_ctx, unsigned int is_header,
unsigned int host_write_ptr)
static struct async_pdu_handle *
hwi_get_async_handle(struct beiscsi_hba *phba,
struct beiscsi_conn *beiscsi_conn,
struct hwi_async_pdu_context *pasync_ctx,
struct i_t_dpdu_cqe *pdpdu_cqe, unsigned int *pcq_index)
static unsigned int
hwi_update_async_writables(struct hwi_async_pdu_context *pasync_ctx,
unsigned int is_header, unsigned int cq_index)
static unsigned int hwi_free_async_msg(struct beiscsi_hba *phba,
unsigned int cri)
static struct phys_addr *
hwi_get_ring_address(struct hwi_async_pdu_context *pasync_ctx,
unsigned int is_header, unsigned int host_write_ptr)
static void hwi_post_async_buffers(struct beiscsi_hba *phba,
unsigned int is_header)
static void hwi_flush_default_pdu_buffer(struct beiscsi_hba *phba,
struct beiscsi_conn *beiscsi_conn,
struct i_t_dpdu_cqe *pdpdu_cqe)
static unsigned int
hwi_fwd_async_msg(struct beiscsi_conn *beiscsi_conn,
struct beiscsi_hba *phba,
struct hwi_async_pdu_context *pasync_ctx, unsigned short cri)
static unsigned int
hwi_gather_async_pdu(struct beiscsi_conn *beiscsi_conn,
struct beiscsi_hba *phba,
struct async_pdu_handle *pasync_handle)
static void hwi_process_default_pdu_ring(struct beiscsi_conn *beiscsi_conn,
struct beiscsi_hba *phba,
struct i_t_dpdu_cqe *pdpdu_cqe)
static void  beiscsi_process_mcc_isr(struct beiscsi_hba *phba)
static unsigned int beiscsi_process_cq(struct be_eq_obj *pbe_eq)
void beiscsi_process_all_cqs(struct work_struct *work)
static int be_iopoll(struct blk_iopoll *iop, int budget)
static void
hwi_write_sgl(struct iscsi_wrb *pwrb, struct scatterlist *sg,
unsigned int num_sg, struct beiscsi_io_task *io_task)
static void hwi_write_buffer(struct iscsi_wrb *pwrb, struct iscsi_task *task)
static void beiscsi_find_mem_req(struct beiscsi_hba *phba)
static int beiscsi_alloc_mem(struct beiscsi_hba *phba)
static int beiscsi_get_memory(struct beiscsi_hba *phba)
static void iscsi_init_global_templates(struct beiscsi_hba *phba)
static void beiscsi_init_wrb_handle(struct beiscsi_hba *phba)
static void hwi_init_async_pdu_ctx(struct beiscsi_hba *phba)
static int
be_sgl_create_contiguous(void *virtual_address,
u64 physical_address, u32 length,
struct be_dma_mem *sgl)
static void be_sgl_destroy_contiguous(struct be_dma_mem *sgl)
static void
hwi_build_be_sgl_arr(struct beiscsi_hba *phba,
struct mem_array *pmem, struct be_dma_mem *sgl)
static void
hwi_build_be_sgl_by_offset(struct beiscsi_hba *phba,
struct mem_array *pmem, struct be_dma_mem *sgl)
static int be_fill_queue(struct be_queue_info *q,
u16 len, u16 entry_size, void *vaddress)
static int beiscsi_create_eqs(struct beiscsi_hba *phba,
struct hwi_context_memory *phwi_context)
static int beiscsi_create_cqs(struct beiscsi_hba *phba,
struct hwi_context_memory *phwi_context)
static int
beiscsi_create_def_hdr(struct beiscsi_hba *phba,
struct hwi_context_memory *phwi_context,
struct hwi_controller *phwi_ctrlr,
unsigned int def_pdu_ring_sz)
static int
beiscsi_create_def_data(struct beiscsi_hba *phba,
struct hwi_context_memory *phwi_context,
struct hwi_controller *phwi_ctrlr,
unsigned int def_pdu_ring_sz)
static int
beiscsi_post_pages(struct beiscsi_hba *phba)
static void be_queue_free(struct beiscsi_hba *phba, struct be_queue_info *q)
static int be_queue_alloc(struct beiscsi_hba *phba, struct be_queue_info *q,
u16 len, u16 entry_size)
static int
beiscsi_create_wrb_rings(struct beiscsi_hba *phba,
struct hwi_context_memory *phwi_context,
struct hwi_controller *phwi_ctrlr)
static void free_wrb_handles(struct beiscsi_hba *phba)
static void be_mcc_queues_destroy(struct beiscsi_hba *phba)
static void hwi_cleanup(struct beiscsi_hba *phba)
static int be_mcc_queues_create(struct beiscsi_hba *phba,
struct hwi_context_memory *phwi_context)
static int find_num_cpus(void)
static int hwi_init_port(struct beiscsi_hba *phba)
static int hwi_init_controller(struct beiscsi_hba *phba)
static void beiscsi_free_mem(struct beiscsi_hba *phba)
static int beiscsi_init_controller(struct beiscsi_hba *phba)
static int beiscsi_init_sgl_handle(struct beiscsi_hba *phba)
static int hba_setup_cid_tbls(struct beiscsi_hba *phba)
static void hwi_enable_intr(struct beiscsi_hba *phba)
static void hwi_disable_intr(struct beiscsi_hba *phba)
static int beiscsi_get_boot_info(struct beiscsi_hba *phba)
static int beiscsi_init_port(struct beiscsi_hba *phba)
static void hwi_purge_eq(struct beiscsi_hba *phba)
static void beiscsi_clean_port(struct beiscsi_hba *phba)
void
beiscsi_offload_connection(struct beiscsi_conn *beiscsi_conn,
struct beiscsi_offload_params *params)
static void beiscsi_parse_pdu(struct iscsi_conn *conn, itt_t itt,
int *index, int *age)
static int beiscsi_alloc_pdu(struct iscsi_task *task, uint8_t opcode)
static void beiscsi_cleanup_task(struct iscsi_task *task)
static int beiscsi_iotask(struct iscsi_task *task, struct scatterlist *sg,
unsigned int num_sg, unsigned int xferlen,
unsigned int writedir)
static int beiscsi_mtask(struct iscsi_task *task)
static int beiscsi_task_xmit(struct iscsi_task *task)
static void beiscsi_remove(struct pci_dev *pcidev)
static void beiscsi_msix_enable(struct beiscsi_hba *phba)
static int __devinit beiscsi_dev_probe(struct pci_dev *pcidev,
const struct pci_device_id *id)
struct iscsi_transport beiscsi_iscsi_transport = ;
static struct pci_driver beiscsi_pci_driver = ;
static int __init beiscsi_module_init(void)
static void __exit beiscsi_module_exit(void)
module_init(beiscsi_module_init);
module_exit(beiscsi_module_exit);
