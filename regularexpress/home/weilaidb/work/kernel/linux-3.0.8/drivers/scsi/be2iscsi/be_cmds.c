int beiscsi_pci_soft_reset(struct beiscsi_hba *phba)
int be_chk_reset_complete(struct beiscsi_hba *phba)
void be_mcc_notify(struct beiscsi_hba *phba)
unsigned int alloc_mcc_tag(struct beiscsi_hba *phba)
void free_mcc_tag(struct be_ctrl_info *ctrl, unsigned int tag)
bool is_link_state_evt(u32 trailer)
static inline bool be_mcc_compl_is_new(struct be_mcc_compl *compl)
static inline void be_mcc_compl_use(struct be_mcc_compl *compl)
static int be_mcc_compl_process(struct be_ctrl_info *ctrl,
struct be_mcc_compl *compl)
int be_mcc_compl_process_isr(struct be_ctrl_info *ctrl,
struct be_mcc_compl *compl)
static struct be_mcc_compl *be_mcc_compl_get(struct beiscsi_hba *phba)
static void be2iscsi_fail_session(struct iscsi_cls_session *cls_session)
void beiscsi_async_link_state_process(struct beiscsi_hba *phba,
struct be_async_event_link_state *evt)
static void beiscsi_cq_notify(struct beiscsi_hba *phba, u16 qid, bool arm,
u16 num_popped)
int beiscsi_process_mcc(struct beiscsi_hba *phba)
static int be_mcc_wait_compl(struct beiscsi_hba *phba)
int be_mcc_notify_wait(struct beiscsi_hba *phba)
static int be_mbox_db_ready_wait(struct be_ctrl_info *ctrl)
int be_mbox_notify(struct be_ctrl_info *ctrl)
static int be_mbox_notify_wait(struct beiscsi_hba *phba)
void be_wrb_hdr_prepare(struct be_mcc_wrb *wrb, int payload_len,
bool embedded, u8 sge_cnt)
void be_cmd_hdr_prepare(struct be_cmd_req_hdr *req_hdr,
u8 subsystem, u8 opcode, int cmd_len)
static void be_cmd_page_addrs_prepare(struct phys_addr *pages, u32 max_pages,
struct be_dma_mem *mem)
static u32 eq_delay_to_mult(u32 usec_delay)
struct be_mcc_wrb *wrb_from_mbox(struct be_dma_mem *mbox_mem)
struct be_mcc_wrb *wrb_from_mccq(struct beiscsi_hba *phba)
int beiscsi_cmd_eq_create(struct be_ctrl_info *ctrl,
struct be_queue_info *eq, int eq_delay)
int be_cmd_fw_initialize(struct be_ctrl_info *ctrl)
int beiscsi_cmd_cq_create(struct be_ctrl_info *ctrl,
struct be_queue_info *cq, struct be_queue_info *eq,
bool sol_evts, bool no_delay, int coalesce_wm)
static u32 be_encoded_q_len(int q_len)
int beiscsi_cmd_mccq_create(struct beiscsi_hba *phba,
struct be_queue_info *mccq,
struct be_queue_info *cq)
int beiscsi_cmd_q_destroy(struct be_ctrl_info *ctrl, struct be_queue_info *q,
int queue_type)
int be_cmd_create_default_pdu_queue(struct be_ctrl_info *ctrl,
struct be_queue_info *cq,
struct be_queue_info *dq, int length,
int entry_size)
int be_cmd_wrbq_create(struct be_ctrl_info *ctrl, struct be_dma_mem *q_mem,
struct be_queue_info *wrbq)
int be_cmd_iscsi_post_sgl_pages(struct be_ctrl_info *ctrl,
struct be_dma_mem *q_mem,
u32 page_offset, u32 num_pages)
