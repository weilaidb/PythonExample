BFA_TRC_FILE(HAL, CORE);
static struct bfa_module_s *hal_mods[] = ;
static bfa_isr_func_t  bfa_isrs[BFI_MC_MAX] = ;
static bfa_ioc_mbox_mcfunc_t  bfa_mbox_isrs[BFI_MC_MAX] = ;
static void
bfa_com_port_attach(struct bfa_s *bfa, struct bfa_meminfo_s *mi)
#define BFA_IOCFC_TOV		5000
enum ;
#define DEF_CFG_NUM_FABRICS		1
#define DEF_CFG_NUM_LPORTS		256
#define DEF_CFG_NUM_CQS			4
#define DEF_CFG_NUM_IOIM_REQS		(BFA_IOIM_MAX)
#define DEF_CFG_NUM_TSKIM_REQS		128
#define DEF_CFG_NUM_FCXP_REQS		64
#define DEF_CFG_NUM_UF_BUFS		64
#define DEF_CFG_NUM_RPORTS		1024
#define DEF_CFG_NUM_ITNIMS		(DEF_CFG_NUM_RPORTS)
#define DEF_CFG_NUM_TINS		256
#define DEF_CFG_NUM_SGPGS		2048
#define DEF_CFG_NUM_REQQ_ELEMS		256
#define DEF_CFG_NUM_RSPQ_ELEMS		64
#define DEF_CFG_NUM_SBOOT_TGTS		16
#define DEF_CFG_NUM_SBOOT_LUNS		16
static void bfa_iocfc_enable_cbfn(void *bfa_arg, enum bfa_status status);
static void bfa_iocfc_disable_cbfn(void *bfa_arg);
static void bfa_iocfc_hbfail_cbfn(void *bfa_arg);
static void bfa_iocfc_reset_cbfn(void *bfa_arg);
static struct bfa_ioc_cbfn_s bfa_iocfc_cbfn;
static void
bfa_reqq_resume(struct bfa_s *bfa, int qid)
void
bfa_msix_all(struct bfa_s *bfa, int vec)
bfa_boolean_t
bfa_intx(struct bfa_s *bfa)
void
bfa_isr_enable(struct bfa_s *bfa)
void
bfa_isr_disable(struct bfa_s *bfa)
void
bfa_msix_reqq(struct bfa_s *bfa, int qid)
void
bfa_isr_unhandled(struct bfa_s *bfa, struct bfi_msg_s *m)
void
bfa_msix_rspq(struct bfa_s *bfa, int qid)
void
bfa_msix_lpu_err(struct bfa_s *bfa, int vec)
static void
bfa_iocfc_cqs_sz(struct bfa_iocfc_cfg_s *cfg, u32 *dm_len)
static void
bfa_iocfc_fw_cfg_sz(struct bfa_iocfc_cfg_s *cfg, u32 *dm_len)
static void
bfa_iocfc_send_cfg(void *bfa_arg)
static void
bfa_iocfc_init_mem(struct bfa_s *bfa, void *bfad, struct bfa_iocfc_cfg_s *cfg,
struct bfa_pcidev_s *pcidev)
static void
bfa_iocfc_mem_claim(struct bfa_s *bfa, struct bfa_iocfc_cfg_s *cfg,
struct bfa_meminfo_s *meminfo)
static void
bfa_iocfc_start_submod(struct bfa_s *bfa)
static void
bfa_iocfc_disable_submod(struct bfa_s *bfa)
static void
bfa_iocfc_init_cb(void *bfa_arg, bfa_boolean_t complete)
static void
bfa_iocfc_stop_cb(void *bfa_arg, bfa_boolean_t compl)
static void
bfa_iocfc_disable_cb(void *bfa_arg, bfa_boolean_t compl)
static void
bfa_iocfc_cfgrsp(struct bfa_s *bfa)
void
bfa_iocfc_reset_queues(struct bfa_s *bfa)
static void
bfa_iocfc_enable_cbfn(void *bfa_arg, enum bfa_status status)
static void
bfa_iocfc_disable_cbfn(void *bfa_arg)
static void
bfa_iocfc_hbfail_cbfn(void *bfa_arg)
static void
bfa_iocfc_reset_cbfn(void *bfa_arg)
void
bfa_iocfc_meminfo(struct bfa_iocfc_cfg_s *cfg, u32 *km_len,
u32 *dm_len)
void
bfa_iocfc_attach(struct bfa_s *bfa, void *bfad, struct bfa_iocfc_cfg_s *cfg,
struct bfa_meminfo_s *meminfo, struct bfa_pcidev_s *pcidev)
void
bfa_iocfc_init(struct bfa_s *bfa)
void
bfa_iocfc_start(struct bfa_s *bfa)
void
bfa_iocfc_stop(struct bfa_s *bfa)
void
bfa_iocfc_isr(void *bfaarg, struct bfi_mbmsg_s *m)
void
bfa_iocfc_get_attr(struct bfa_s *bfa, struct bfa_iocfc_attr_s *attr)
bfa_status_t
bfa_iocfc_israttr_set(struct bfa_s *bfa, struct bfa_iocfc_intr_attr_s *attr)
void
bfa_iocfc_set_snsbase(struct bfa_s *bfa, u64 snsbase_pa)
void
bfa_iocfc_enable(struct bfa_s *bfa)
void
bfa_iocfc_disable(struct bfa_s *bfa)
bfa_boolean_t
bfa_iocfc_is_operational(struct bfa_s *bfa)
void
bfa_iocfc_get_bootwwns(struct bfa_s *bfa, u8 *nwwns, wwn_t *wwns)
int
bfa_iocfc_get_pbc_vports(struct bfa_s *bfa, struct bfi_pbc_vport_s *pbc_vport)
void
bfa_cfg_get_meminfo(struct bfa_iocfc_cfg_s *cfg, struct bfa_meminfo_s *meminfo)
void
bfa_attach(struct bfa_s *bfa, void *bfad, struct bfa_iocfc_cfg_s *cfg,
struct bfa_meminfo_s *meminfo, struct bfa_pcidev_s *pcidev)
void
bfa_detach(struct bfa_s *bfa)
void
bfa_comp_deq(struct bfa_s *bfa, struct list_head *comp_q)
void
bfa_comp_process(struct bfa_s *bfa, struct list_head *comp_q)
void
bfa_comp_free(struct bfa_s *bfa, struct list_head *comp_q)
void
bfa_get_pciids(struct bfa_pciid_s **pciids, int *npciids)
void
bfa_cfg_get_default(struct bfa_iocfc_cfg_s *cfg)
void
bfa_cfg_get_min(struct bfa_iocfc_cfg_s *cfg)
