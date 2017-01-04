static uint8_t lpfcAlpaArray[] = ;
static void lpfc_disc_timeout_handler(struct lpfc_vport *);
static void lpfc_disc_flush_list(struct lpfc_vport *vport);
static void lpfc_unregister_fcfi_cmpl(struct lpfc_hba *, LPFC_MBOXQ_t *);
static int lpfc_fcf_inuse(struct lpfc_hba *);
void
lpfc_terminate_rport_io(struct fc_rport *rport)
void
lpfc_dev_loss_tmo_callbk(struct fc_rport *rport)
static int
lpfc_dev_loss_tmo_handler(struct lpfc_nodelist *ndlp)
static void
lpfc_sli4_post_dev_loss_tmo_handler(struct lpfc_hba *phba, int fcf_inuse,
uint32_t nlp_did)
struct lpfc_fast_path_event *
lpfc_alloc_fast_evt(struct lpfc_hba *phba)
void
lpfc_free_fast_evt(struct lpfc_hba *phba,
struct lpfc_fast_path_event *evt)
static void
lpfc_send_fastpath_evt(struct lpfc_hba *phba,
struct lpfc_work_evt *evtp)
static void
lpfc_work_list_done(struct lpfc_hba *phba)
static void
lpfc_work_done(struct lpfc_hba *phba)
int
lpfc_do_work(void *p)
int
lpfc_workq_post_event(struct lpfc_hba *phba, void *arg1, void *arg2,
uint32_t evt)
void
lpfc_cleanup_rpis(struct lpfc_vport *vport, int remove)
void
lpfc_port_link_failure(struct lpfc_vport *vport)
void
lpfc_linkdown_port(struct lpfc_vport *vport)
int
lpfc_linkdown(struct lpfc_hba *phba)
static void
lpfc_linkup_cleanup_nodes(struct lpfc_vport *vport)
static void
lpfc_linkup_port(struct lpfc_vport *vport)
static int
lpfc_linkup(struct lpfc_hba *phba)
static void
lpfc_mbx_cmpl_clear_la(struct lpfc_hba *phba, LPFC_MBOXQ_t *pmb)
static void
lpfc_mbx_cmpl_local_config_link(struct lpfc_hba *phba, LPFC_MBOXQ_t *pmb)
static void
lpfc_mbx_cmpl_reg_fcfi(struct lpfc_hba *phba, LPFC_MBOXQ_t *mboxq)
static uint32_t
lpfc_fab_name_match(uint8_t *fab_name, struct fcf_record *new_fcf_record)
static uint32_t
lpfc_sw_name_match(uint8_t *sw_name, struct fcf_record *new_fcf_record)
static uint32_t
lpfc_mac_addr_match(uint8_t *mac_addr, struct fcf_record *new_fcf_record)
static bool
lpfc_vlan_id_match(uint16_t curr_vlan_id, uint16_t new_vlan_id)
static void
lpfc_copy_fcf_record(struct lpfc_fcf_rec *fcf_rec,
struct fcf_record *new_fcf_record)
static void
__lpfc_update_fcf_record(struct lpfc_hba *phba, struct lpfc_fcf_rec *fcf_rec,
struct fcf_record *new_fcf_record, uint32_t addr_mode,
uint16_t vlan_id, uint32_t flag)
static void
lpfc_register_fcf(struct lpfc_hba *phba)
static int
lpfc_match_fcf_conn_list(struct lpfc_hba *phba,
struct fcf_record *new_fcf_record,
uint32_t *boot_flag, uint32_t *addr_mode,
uint16_t *vlan_id)
int
lpfc_check_pending_fcoe_event(struct lpfc_hba *phba, uint8_t unreg_fcf)
static bool
lpfc_sli4_new_fcf_random_select(struct lpfc_hba *phba, uint32_t fcf_cnt)
static struct fcf_record *
lpfc_sli4_fcf_rec_mbox_parse(struct lpfc_hba *phba, LPFC_MBOXQ_t *mboxq,
uint16_t *next_fcf_index)
static void
lpfc_sli4_log_fcf_record_info(struct lpfc_hba *phba,
struct fcf_record *fcf_record,
uint16_t vlan_id,
uint16_t next_fcf_index)
static bool
lpfc_sli4_fcf_record_match(struct lpfc_hba *phba,
struct lpfc_fcf_rec *fcf_rec,
struct fcf_record *new_fcf_record,
uint16_t new_vlan_id)
int lpfc_sli4_fcf_rr_next_proc(struct lpfc_vport *vport, uint16_t fcf_index)
void
lpfc_mbx_cmpl_fcf_scan_read_fcf_rec(struct lpfc_hba *phba, LPFC_MBOXQ_t *mboxq)
void
lpfc_mbx_cmpl_fcf_rr_read_fcf_rec(struct lpfc_hba *phba, LPFC_MBOXQ_t *mboxq)
void
lpfc_mbx_cmpl_read_fcf_rec(struct lpfc_hba *phba, LPFC_MBOXQ_t *mboxq)
void
lpfc_init_vfi_cmpl(struct lpfc_hba *phba, LPFC_MBOXQ_t *mboxq)
void
lpfc_issue_init_vfi(struct lpfc_vport *vport)
void
lpfc_init_vpi_cmpl(struct lpfc_hba *phba, LPFC_MBOXQ_t *mboxq)
void
lpfc_issue_init_vpi(struct lpfc_vport *vport)
void
lpfc_start_fdiscs(struct lpfc_hba *phba)
void
lpfc_mbx_cmpl_reg_vfi(struct lpfc_hba *phba, LPFC_MBOXQ_t *mboxq)
static void
lpfc_mbx_cmpl_read_sparam(struct lpfc_hba *phba, LPFC_MBOXQ_t *pmb)
static void
lpfc_mbx_process_link_up(struct lpfc_hba *phba, struct lpfc_mbx_read_top *la)
static void
lpfc_enable_la(struct lpfc_hba *phba)
static void
lpfc_mbx_issue_link_down(struct lpfc_hba *phba)
void
lpfc_mbx_cmpl_read_topology(struct lpfc_hba *phba, LPFC_MBOXQ_t *pmb)
void
lpfc_mbx_cmpl_reg_login(struct lpfc_hba *phba, LPFC_MBOXQ_t *pmb)
static void
lpfc_mbx_cmpl_unreg_vpi(struct lpfc_hba *phba, LPFC_MBOXQ_t *pmb)
int
lpfc_mbx_unreg_vpi(struct lpfc_vport *vport)
static void
lpfc_mbx_cmpl_reg_vpi(struct lpfc_hba *phba, LPFC_MBOXQ_t *pmb)
void
lpfc_create_static_vport(struct lpfc_hba *phba)
void
lpfc_mbx_cmpl_fabric_reg_login(struct lpfc_hba *phba, LPFC_MBOXQ_t *pmb)
void
lpfc_mbx_cmpl_ns_reg_login(struct lpfc_hba *phba, LPFC_MBOXQ_t *pmb)
static void
lpfc_register_remote_port(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp)
static void
lpfc_unregister_remote_port(struct lpfc_nodelist *ndlp)
static void
lpfc_nlp_counters(struct lpfc_vport *vport, int state, int count)
static void
lpfc_nlp_state_cleanup(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp,
int old_state, int new_state)
static char *
lpfc_nlp_state_name(char *buffer, size_t size, int state)
void
lpfc_nlp_set_state(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp,
int state)
void
lpfc_enqueue_node(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp)
void
lpfc_dequeue_node(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp)
static void
lpfc_disable_node(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp)
static inline void
lpfc_initialize_node(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp,
uint32_t did)
struct lpfc_nodelist *
lpfc_enable_node(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp,
int state)
void
lpfc_drop_node(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp)
void
lpfc_set_disctmo(struct lpfc_vport *vport)
int
lpfc_can_disctmo(struct lpfc_vport *vport)
int
lpfc_check_sli_ndlp(struct lpfc_hba *phba,
struct lpfc_sli_ring *pring,
struct lpfc_iocbq *iocb,
struct lpfc_nodelist *ndlp)
static int
lpfc_no_rpi(struct lpfc_hba *phba, struct lpfc_nodelist *ndlp)
int
lpfc_unreg_rpi(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp)
void
lpfc_unreg_hba_rpis(struct lpfc_hba *phba)
void
lpfc_unreg_all_rpis(struct lpfc_vport *vport)
void
lpfc_unreg_default_rpis(struct lpfc_vport *vport)
static int
lpfc_cleanup_node(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp)
static void
lpfc_nlp_remove(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp)
static int
lpfc_matchdid(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp,
uint32_t did)
static struct lpfc_nodelist *
__lpfc_findnode_did(struct lpfc_vport *vport, uint32_t did)
struct lpfc_nodelist *
lpfc_findnode_did(struct lpfc_vport *vport, uint32_t did)
struct lpfc_nodelist *
lpfc_setup_disc_node(struct lpfc_vport *vport, uint32_t did)
void
lpfc_disc_list_loopmap(struct lpfc_vport *vport)
void
lpfc_issue_clear_la(struct lpfc_hba *phba, struct lpfc_vport *vport)
void
lpfc_issue_reg_vpi(struct lpfc_hba *phba, struct lpfc_vport *vport)
void
lpfc_disc_start(struct lpfc_vport *vport)
static void
lpfc_free_tx(struct lpfc_hba *phba, struct lpfc_nodelist *ndlp)
static void
lpfc_disc_flush_list(struct lpfc_vport *vport)
void
lpfc_cleanup_discovery_resources(struct lpfc_vport *vport)
void
lpfc_disc_timeout(unsigned long ptr)
static void
lpfc_disc_timeout_handler(struct lpfc_vport *vport)
void
lpfc_mbx_cmpl_fdmi_reg_login(struct lpfc_hba *phba, LPFC_MBOXQ_t *pmb)
static int
lpfc_filter_by_rpi(struct lpfc_nodelist *ndlp, void *param)
static int
lpfc_filter_by_wwpn(struct lpfc_nodelist *ndlp, void *param)
static struct lpfc_nodelist *
__lpfc_find_node(struct lpfc_vport *vport, node_filter filter, void *param)
struct lpfc_nodelist *
__lpfc_findnode_rpi(struct lpfc_vport *vport, uint16_t rpi)
struct lpfc_nodelist *
lpfc_findnode_wwpn(struct lpfc_vport *vport, struct lpfc_name *wwpn)
void
lpfc_nlp_init(struct lpfc_vport *vport, struct lpfc_nodelist *ndlp,
uint32_t did)
static void
lpfc_nlp_release(struct kref *kref)
struct lpfc_nodelist *
lpfc_nlp_get(struct lpfc_nodelist *ndlp)
int
lpfc_nlp_put(struct lpfc_nodelist *ndlp)
int
lpfc_nlp_not_used(struct lpfc_nodelist *ndlp)
static int
lpfc_fcf_inuse(struct lpfc_hba *phba)
static void
lpfc_unregister_vfi_cmpl(struct lpfc_hba *phba, LPFC_MBOXQ_t *mboxq)
static void
lpfc_unregister_fcfi_cmpl(struct lpfc_hba *phba, LPFC_MBOXQ_t *mboxq)
int
lpfc_unregister_fcf_prep(struct lpfc_hba *phba)
int
lpfc_sli4_unregister_fcf(struct lpfc_hba *phba)
void
lpfc_unregister_fcf_rescan(struct lpfc_hba *phba)
void
lpfc_unregister_fcf(struct lpfc_hba *phba)
void
lpfc_unregister_unused_fcf(struct lpfc_hba *phba)
static void
lpfc_read_fcf_conn_tbl(struct lpfc_hba *phba,
uint8_t *buff)
static void
lpfc_read_fcoe_param(struct lpfc_hba *phba,
uint8_t *buff)
static uint8_t *
lpfc_get_rec_conf23(uint8_t *buff, uint32_t size, uint8_t rec_type)
void
lpfc_parse_fcoe_conf(struct lpfc_hba *phba,
uint8_t *buff,
uint32_t size)
