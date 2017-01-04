int
lpfc_dump_static_vport(struct lpfc_hba *phba, LPFC_MBOXQ_t *pmb,
uint16_t offset)
void
lpfc_down_link(struct lpfc_hba *phba, LPFC_MBOXQ_t *pmb)
void
lpfc_dump_mem(struct lpfc_hba *phba, LPFC_MBOXQ_t *pmb, uint16_t offset,
uint16_t region_id)
void
lpfc_dump_wakeup_param(struct lpfc_hba *phba, LPFC_MBOXQ_t *pmb)
void
lpfc_read_nv(struct lpfc_hba * phba, LPFC_MBOXQ_t * pmb)
void
lpfc_config_async(struct lpfc_hba * phba, LPFC_MBOXQ_t * pmb,
uint32_t ring)
void
lpfc_heart_beat(struct lpfc_hba * phba, LPFC_MBOXQ_t * pmb)
int
lpfc_read_topology(struct lpfc_hba *phba, LPFC_MBOXQ_t *pmb,
struct lpfc_dmabuf *mp)
void
lpfc_clear_la(struct lpfc_hba * phba, LPFC_MBOXQ_t * pmb)
void
lpfc_config_link(struct lpfc_hba * phba, LPFC_MBOXQ_t * pmb)
int
lpfc_config_msi(struct lpfc_hba *phba, LPFC_MBOXQ_t *pmb)
void
lpfc_init_link(struct lpfc_hba * phba,
LPFC_MBOXQ_t * pmb, uint32_t topology, uint32_t linkspeed)
int
lpfc_read_sparam(struct lpfc_hba *phba, LPFC_MBOXQ_t *pmb, int vpi)
void
lpfc_unreg_did(struct lpfc_hba * phba, uint16_t vpi, uint32_t did,
LPFC_MBOXQ_t * pmb)
void
lpfc_read_config(struct lpfc_hba * phba, LPFC_MBOXQ_t * pmb)
void
lpfc_read_lnk_stat(struct lpfc_hba * phba, LPFC_MBOXQ_t * pmb)
int
lpfc_reg_rpi(struct lpfc_hba *phba, uint16_t vpi, uint32_t did,
uint8_t *param, LPFC_MBOXQ_t *pmb, uint16_t rpi)
void
lpfc_unreg_login(struct lpfc_hba *phba, uint16_t vpi, uint32_t rpi,
LPFC_MBOXQ_t * pmb)
void
lpfc_sli4_unreg_all_rpis(struct lpfc_vport *vport)
void
lpfc_reg_vpi(struct lpfc_vport *vport, LPFC_MBOXQ_t *pmb)
void
lpfc_unreg_vpi(struct lpfc_hba *phba, uint16_t vpi, LPFC_MBOXQ_t *pmb)
static void
lpfc_config_pcb_setup(struct lpfc_hba * phba)
void
lpfc_read_rev(struct lpfc_hba * phba, LPFC_MBOXQ_t * pmb)
void
lpfc_sli4_swap_str(struct lpfc_hba *phba, LPFC_MBOXQ_t *pmb)
static void
lpfc_build_hbq_profile2(struct config_hbq_var *hbqmb,
struct lpfc_hbq_init  *hbq_desc)
static void
lpfc_build_hbq_profile3(struct config_hbq_var *hbqmb,
struct lpfc_hbq_init  *hbq_desc)
static void
lpfc_build_hbq_profile5(struct config_hbq_var *hbqmb,
struct lpfc_hbq_init  *hbq_desc)
void
lpfc_config_hbq(struct lpfc_hba *phba, uint32_t id,
struct lpfc_hbq_init *hbq_desc,
uint32_t hbq_entry_index, LPFC_MBOXQ_t *pmb)
void
lpfc_config_ring(struct lpfc_hba * phba, int ring, LPFC_MBOXQ_t * pmb)
void
lpfc_config_port(struct lpfc_hba *phba, LPFC_MBOXQ_t *pmb)
void
lpfc_kill_board(struct lpfc_hba * phba, LPFC_MBOXQ_t * pmb)
void
lpfc_mbox_put(struct lpfc_hba * phba, LPFC_MBOXQ_t * mbq)
LPFC_MBOXQ_t *
lpfc_mbox_get(struct lpfc_hba * phba)
void
__lpfc_mbox_cmpl_put(struct lpfc_hba *phba, LPFC_MBOXQ_t *mbq)
void
lpfc_mbox_cmpl_put(struct lpfc_hba *phba, LPFC_MBOXQ_t *mbq)
int
lpfc_mbox_cmd_check(struct lpfc_hba *phba, LPFC_MBOXQ_t *mboxq)
int
lpfc_mbox_dev_check(struct lpfc_hba *phba)
int
lpfc_mbox_tmo_val(struct lpfc_hba *phba, int cmd)
void
lpfc_sli4_mbx_sge_set(struct lpfcMboxq *mbox, uint32_t sgentry,
dma_addr_t phyaddr, uint32_t length)
void
lpfc_sli4_mbx_sge_get(struct lpfcMboxq *mbox, uint32_t sgentry,
struct lpfc_mbx_sge *sge)
void
lpfc_sli4_mbox_cmd_free(struct lpfc_hba *phba, struct lpfcMboxq *mbox)
int
lpfc_sli4_config(struct lpfc_hba *phba, struct lpfcMboxq *mbox,
uint8_t subsystem, uint8_t opcode, uint32_t length, bool emb)
int
lpfc_sli4_mbox_rsrc_extent(struct lpfc_hba *phba, struct lpfcMboxq *mbox,
uint16_t exts_count, uint16_t rsrc_type, bool emb)
uint8_t
lpfc_sli4_mbox_opcode_get(struct lpfc_hba *phba, struct lpfcMboxq *mbox)
int
lpfc_sli4_mbx_read_fcf_rec(struct lpfc_hba *phba,
struct lpfcMboxq *mboxq,
uint16_t fcf_index)
void
lpfc_request_features(struct lpfc_hba *phba, struct lpfcMboxq *mboxq)
void
lpfc_init_vfi(struct lpfcMboxq *mbox, struct lpfc_vport *vport)
void
lpfc_reg_vfi(struct lpfcMboxq *mbox, struct lpfc_vport *vport, dma_addr_t phys)
void
lpfc_init_vpi(struct lpfc_hba *phba, struct lpfcMboxq *mbox, uint16_t vpi)
void
lpfc_unreg_vfi(struct lpfcMboxq *mbox, struct lpfc_vport *vport)
int
lpfc_dump_fcoe_param(struct lpfc_hba *phba,
struct lpfcMboxq *mbox)
void
lpfc_reg_fcfi(struct lpfc_hba *phba, struct lpfcMboxq *mbox)
void
lpfc_unreg_fcfi(struct lpfcMboxq *mbox, uint16_t fcfi)
void
lpfc_resume_rpi(struct lpfcMboxq *mbox, struct lpfc_nodelist *ndlp)
void
lpfc_supported_pages(struct lpfcMboxq *mbox)
void
lpfc_pc_sli4_params(struct lpfcMboxq *mbox)
