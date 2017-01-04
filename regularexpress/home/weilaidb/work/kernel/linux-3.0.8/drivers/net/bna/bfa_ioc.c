#define bfa_ioc_firmware_lock(__ioc)			\
((__ioc)->ioc_hwif->ioc_firmware_lock(__ioc))
#define bfa_ioc_firmware_unlock(__ioc)			\
((__ioc)->ioc_hwif->ioc_firmware_unlock(__ioc))
#define bfa_ioc_reg_init(__ioc) ((__ioc)->ioc_hwif->ioc_reg_init(__ioc))
#define bfa_ioc_map_port(__ioc) ((__ioc)->ioc_hwif->ioc_map_port(__ioc))
#define bfa_ioc_notify_fail(__ioc)			\
((__ioc)->ioc_hwif->ioc_notify_fail(__ioc))
#define bfa_ioc_sync_start(__ioc)               \
((__ioc)->ioc_hwif->ioc_sync_start(__ioc))
#define bfa_ioc_sync_join(__ioc)			\
((__ioc)->ioc_hwif->ioc_sync_join(__ioc))
#define bfa_ioc_sync_leave(__ioc)			\
((__ioc)->ioc_hwif->ioc_sync_leave(__ioc))
#define bfa_ioc_sync_ack(__ioc)				\
((__ioc)->ioc_hwif->ioc_sync_ack(__ioc))
#define bfa_ioc_sync_complete(__ioc)			\
((__ioc)->ioc_hwif->ioc_sync_complete(__ioc))
#define bfa_ioc_mbox_cmd_pending(__ioc)		\
(!list_empty(&((__ioc)->mbox_mod.cmd_q)) || \
readl((__ioc)->ioc_regs.hfn_mbox_cmd))
static bool bfa_nw_auto_recover = true;
static void bfa_ioc_hw_sem_get(struct bfa_ioc *ioc);
static void bfa_ioc_hw_sem_get_cancel(struct bfa_ioc *ioc);
static void bfa_ioc_hwinit(struct bfa_ioc *ioc, bool force);
static void bfa_ioc_send_enable(struct bfa_ioc *ioc);
static void bfa_ioc_send_disable(struct bfa_ioc *ioc);
static void bfa_ioc_send_getattr(struct bfa_ioc *ioc);
static void bfa_ioc_hb_monitor(struct bfa_ioc *ioc);
static void bfa_ioc_hb_stop(struct bfa_ioc *ioc);
static void bfa_ioc_reset(struct bfa_ioc *ioc, bool force);
static void bfa_ioc_mbox_poll(struct bfa_ioc *ioc);
static void bfa_ioc_mbox_hbfail(struct bfa_ioc *ioc);
static void bfa_ioc_recover(struct bfa_ioc *ioc);
static void bfa_ioc_check_attr_wwns(struct bfa_ioc *ioc);
static void bfa_ioc_disable_comp(struct bfa_ioc *ioc);
static void bfa_ioc_lpu_stop(struct bfa_ioc *ioc);
static void bfa_ioc_fail_notify(struct bfa_ioc *ioc);
static void bfa_ioc_pf_enabled(struct bfa_ioc *ioc);
static void bfa_ioc_pf_disabled(struct bfa_ioc *ioc);
static void bfa_ioc_pf_initfailed(struct bfa_ioc *ioc);
static void bfa_ioc_pf_failed(struct bfa_ioc *ioc);
static void bfa_ioc_pf_fwmismatch(struct bfa_ioc *ioc);
static void bfa_ioc_boot(struct bfa_ioc *ioc, u32 boot_type,
u32 boot_param);
static u32 bfa_ioc_smem_pgnum(struct bfa_ioc *ioc, u32 fmaddr);
static void bfa_ioc_get_adapter_serial_num(struct bfa_ioc *ioc,
char *serial_num);
static void bfa_ioc_get_adapter_fw_ver(struct bfa_ioc *ioc,
char *fw_ver);
static void bfa_ioc_get_pci_chip_rev(struct bfa_ioc *ioc,
char *chip_rev);
static void bfa_ioc_get_adapter_optrom_ver(struct bfa_ioc *ioc,
char *optrom_ver);
static void bfa_ioc_get_adapter_manufacturer(struct bfa_ioc *ioc,
char *manufacturer);
static void bfa_ioc_get_adapter_model(struct bfa_ioc *ioc, char *model);
static u64 bfa_ioc_get_pwwn(struct bfa_ioc *ioc);
enum ioc_event ;
bfa_fsm_state_decl(bfa_ioc, uninit, struct bfa_ioc, enum ioc_event);
bfa_fsm_state_decl(bfa_ioc, reset, struct bfa_ioc, enum ioc_event);
bfa_fsm_state_decl(bfa_ioc, enabling, struct bfa_ioc, enum ioc_event);
bfa_fsm_state_decl(bfa_ioc, getattr, struct bfa_ioc, enum ioc_event);
bfa_fsm_state_decl(bfa_ioc, op, struct bfa_ioc, enum ioc_event);
bfa_fsm_state_decl(bfa_ioc, fail_retry, struct bfa_ioc, enum ioc_event);
bfa_fsm_state_decl(bfa_ioc, fail, struct bfa_ioc, enum ioc_event);
bfa_fsm_state_decl(bfa_ioc, disabling, struct bfa_ioc, enum ioc_event);
bfa_fsm_state_decl(bfa_ioc, disabled, struct bfa_ioc, enum ioc_event);
static struct bfa_sm_table ioc_sm_table[] = ;
static void bfa_iocpf_enable(struct bfa_ioc *ioc);
static void bfa_iocpf_disable(struct bfa_ioc *ioc);
static void bfa_iocpf_fail(struct bfa_ioc *ioc);
static void bfa_iocpf_initfail(struct bfa_ioc *ioc);
static void bfa_iocpf_getattrfail(struct bfa_ioc *ioc);
static void bfa_iocpf_stop(struct bfa_ioc *ioc);
enum iocpf_event ;
enum bfa_iocpf_state ;
bfa_fsm_state_decl(bfa_iocpf, reset, struct bfa_iocpf, enum iocpf_event);
bfa_fsm_state_decl(bfa_iocpf, fwcheck, struct bfa_iocpf, enum iocpf_event);
bfa_fsm_state_decl(bfa_iocpf, mismatch, struct bfa_iocpf, enum iocpf_event);
bfa_fsm_state_decl(bfa_iocpf, semwait, struct bfa_iocpf, enum iocpf_event);
bfa_fsm_state_decl(bfa_iocpf, hwinit, struct bfa_iocpf, enum iocpf_event);
bfa_fsm_state_decl(bfa_iocpf, enabling, struct bfa_iocpf, enum iocpf_event);
bfa_fsm_state_decl(bfa_iocpf, ready, struct bfa_iocpf, enum iocpf_event);
bfa_fsm_state_decl(bfa_iocpf, initfail_sync, struct bfa_iocpf,
enum iocpf_event);
bfa_fsm_state_decl(bfa_iocpf, initfail, struct bfa_iocpf, enum iocpf_event);
bfa_fsm_state_decl(bfa_iocpf, fail_sync, struct bfa_iocpf, enum iocpf_event);
bfa_fsm_state_decl(bfa_iocpf, fail, struct bfa_iocpf, enum iocpf_event);
bfa_fsm_state_decl(bfa_iocpf, disabling, struct bfa_iocpf, enum iocpf_event);
bfa_fsm_state_decl(bfa_iocpf, disabling_sync, struct bfa_iocpf,
enum iocpf_event);
bfa_fsm_state_decl(bfa_iocpf, disabled, struct bfa_iocpf, enum iocpf_event);
static struct bfa_sm_table iocpf_sm_table[] = ;
static void
bfa_ioc_sm_uninit_entry(struct bfa_ioc *ioc)
static void
bfa_ioc_sm_uninit(struct bfa_ioc *ioc, enum ioc_event event)
static void
bfa_ioc_sm_reset_entry(struct bfa_ioc *ioc)
static void
bfa_ioc_sm_reset(struct bfa_ioc *ioc, enum ioc_event event)
static void
bfa_ioc_sm_enabling_entry(struct bfa_ioc *ioc)
static void
bfa_ioc_sm_enabling(struct bfa_ioc *ioc, enum ioc_event event)
static void
bfa_ioc_sm_getattr_entry(struct bfa_ioc *ioc)
static void
bfa_ioc_sm_getattr(struct bfa_ioc *ioc, enum ioc_event event)
static void
bfa_ioc_sm_op_entry(struct bfa_ioc *ioc)
static void
bfa_ioc_sm_op(struct bfa_ioc *ioc, enum ioc_event event)
static void
bfa_ioc_sm_disabling_entry(struct bfa_ioc *ioc)
static void
bfa_ioc_sm_disabling(struct bfa_ioc *ioc, enum ioc_event event)
static void
bfa_ioc_sm_disabled_entry(struct bfa_ioc *ioc)
static void
bfa_ioc_sm_disabled(struct bfa_ioc *ioc, enum ioc_event event)
static void
bfa_ioc_sm_fail_retry_entry(struct bfa_ioc *ioc)
static void
bfa_ioc_sm_fail_retry(struct bfa_ioc *ioc, enum ioc_event event)
static void
bfa_ioc_sm_fail_entry(struct bfa_ioc *ioc)
static void
bfa_ioc_sm_fail(struct bfa_ioc *ioc, enum ioc_event event)
static void
bfa_iocpf_sm_reset_entry(struct bfa_iocpf *iocpf)
static void
bfa_iocpf_sm_reset(struct bfa_iocpf *iocpf, enum iocpf_event event)
static void
bfa_iocpf_sm_fwcheck_entry(struct bfa_iocpf *iocpf)
static void
bfa_iocpf_sm_fwcheck(struct bfa_iocpf *iocpf, enum iocpf_event event)
static void
bfa_iocpf_sm_mismatch_entry(struct bfa_iocpf *iocpf)
static void
bfa_iocpf_sm_mismatch(struct bfa_iocpf *iocpf, enum iocpf_event event)
static void
bfa_iocpf_sm_semwait_entry(struct bfa_iocpf *iocpf)
static void
bfa_iocpf_sm_semwait(struct bfa_iocpf *iocpf, enum iocpf_event event)
static void
bfa_iocpf_sm_hwinit_entry(struct bfa_iocpf *iocpf)
static void
bfa_iocpf_sm_hwinit(struct bfa_iocpf *iocpf, enum iocpf_event event)
static void
bfa_iocpf_sm_enabling_entry(struct bfa_iocpf *iocpf)
static void
bfa_iocpf_sm_enabling(struct bfa_iocpf *iocpf, enum iocpf_event event)
static bool
bfa_nw_ioc_is_operational(struct bfa_ioc *ioc)
static void
bfa_iocpf_sm_ready_entry(struct bfa_iocpf *iocpf)
static void
bfa_iocpf_sm_ready(struct bfa_iocpf *iocpf, enum iocpf_event event)
static void
bfa_iocpf_sm_disabling_entry(struct bfa_iocpf *iocpf)
static void
bfa_iocpf_sm_disabling(struct bfa_iocpf *iocpf, enum iocpf_event event)
static void
bfa_iocpf_sm_disabling_sync_entry(struct bfa_iocpf *iocpf)
static void
bfa_iocpf_sm_disabling_sync(struct bfa_iocpf *iocpf, enum iocpf_event event)
static void
bfa_iocpf_sm_disabled_entry(struct bfa_iocpf *iocpf)
static void
bfa_iocpf_sm_disabled(struct bfa_iocpf *iocpf, enum iocpf_event event)
static void
bfa_iocpf_sm_initfail_sync_entry(struct bfa_iocpf *iocpf)
static void
bfa_iocpf_sm_initfail_sync(struct bfa_iocpf *iocpf, enum iocpf_event event)
static void
bfa_iocpf_sm_initfail_entry(struct bfa_iocpf *iocpf)
static void
bfa_iocpf_sm_initfail(struct bfa_iocpf *iocpf, enum iocpf_event event)
static void
bfa_iocpf_sm_fail_sync_entry(struct bfa_iocpf *iocpf)
static void
bfa_iocpf_sm_fail_sync(struct bfa_iocpf *iocpf, enum iocpf_event event)
static void
bfa_iocpf_sm_fail_entry(struct bfa_iocpf *iocpf)
static void
bfa_iocpf_sm_fail(struct bfa_iocpf *iocpf, enum iocpf_event event)
static void
bfa_ioc_disable_comp(struct bfa_ioc *ioc)
bool
bfa_nw_ioc_sem_get(void __iomem *sem_reg)
void
bfa_nw_ioc_sem_release(void __iomem *sem_reg)
static void
bfa_ioc_hw_sem_get(struct bfa_ioc *ioc)
void
bfa_nw_ioc_hw_sem_release(struct bfa_ioc *ioc)
static void
bfa_ioc_hw_sem_get_cancel(struct bfa_ioc *ioc)
static void
bfa_ioc_lmem_init(struct bfa_ioc *ioc)
static void
bfa_ioc_lpu_start(struct bfa_ioc *ioc)
static void
bfa_ioc_lpu_stop(struct bfa_ioc *ioc)
void
bfa_nw_ioc_fwver_get(struct bfa_ioc *ioc, struct bfi_ioc_image_hdr *fwhdr)
bool
bfa_nw_ioc_fwver_cmp(struct bfa_ioc *ioc, struct bfi_ioc_image_hdr *fwhdr)
static bool
bfa_ioc_fwver_valid(struct bfa_ioc *ioc, u32 boot_env)
static void
bfa_ioc_msgflush(struct bfa_ioc *ioc)
static void
bfa_ioc_hwinit(struct bfa_ioc *ioc, bool force)
void
bfa_nw_ioc_timeout(void *ioc_arg)
static void
bfa_ioc_mbox_send(struct bfa_ioc *ioc, void *ioc_msg, int len)
static void
bfa_ioc_send_enable(struct bfa_ioc *ioc)
static void
bfa_ioc_send_disable(struct bfa_ioc *ioc)
static void
bfa_ioc_send_getattr(struct bfa_ioc *ioc)
void
bfa_nw_ioc_hb_check(void *cbarg)
static void
bfa_ioc_hb_monitor(struct bfa_ioc *ioc)
static void
bfa_ioc_hb_stop(struct bfa_ioc *ioc)
static void
bfa_ioc_download_fw(struct bfa_ioc *ioc, u32 boot_type,
u32 boot_env)
static void
bfa_ioc_reset(struct bfa_ioc *ioc, bool force)
static void
bfa_ioc_getattr_reply(struct bfa_ioc *ioc)
static void
bfa_ioc_mbox_attach(struct bfa_ioc *ioc)
static void
bfa_ioc_mbox_poll(struct bfa_ioc *ioc)
static void
bfa_ioc_mbox_hbfail(struct bfa_ioc *ioc)
static void
bfa_ioc_fail_notify(struct bfa_ioc *ioc)
static void
bfa_ioc_pf_enabled(struct bfa_ioc *ioc)
static void
bfa_ioc_pf_disabled(struct bfa_ioc *ioc)
static void
bfa_ioc_pf_initfailed(struct bfa_ioc *ioc)
static void
bfa_ioc_pf_failed(struct bfa_ioc *ioc)
static void
bfa_ioc_pf_fwmismatch(struct bfa_ioc *ioc)
static enum bfa_status
bfa_ioc_pll_init(struct bfa_ioc *ioc)
static void
bfa_ioc_boot(struct bfa_ioc *ioc, u32 boot_type, u32 boot_env)
void
bfa_nw_ioc_auto_recover(bool auto_recover)
static void
bfa_ioc_msgget(struct bfa_ioc *ioc, void *mbmsg)
static void
bfa_ioc_isr(struct bfa_ioc *ioc, struct bfi_mbmsg *m)
void
bfa_nw_ioc_attach(struct bfa_ioc *ioc, void *bfa, struct bfa_ioc_cbfn *cbfn)
void
bfa_nw_ioc_detach(struct bfa_ioc *ioc)
void
bfa_nw_ioc_pci_init(struct bfa_ioc *ioc, struct bfa_pcidev *pcidev,
enum bfi_mclass mc)
void
bfa_nw_ioc_mem_claim(struct bfa_ioc *ioc,  u8 *dm_kva, u64 dm_pa)
u32
bfa_nw_ioc_meminfo(void)
void
bfa_nw_ioc_enable(struct bfa_ioc *ioc)
void
bfa_nw_ioc_disable(struct bfa_ioc *ioc)
static u32
bfa_ioc_smem_pgnum(struct bfa_ioc *ioc, u32 fmaddr)
void
bfa_nw_ioc_mbox_regisr(struct bfa_ioc *ioc, enum bfi_mclass mc,
bfa_ioc_mbox_mcfunc_t cbfn, void *cbarg)
void
bfa_nw_ioc_mbox_queue(struct bfa_ioc *ioc, struct bfa_mbox_cmd *cmd)
void
bfa_nw_ioc_mbox_isr(struct bfa_ioc *ioc)
void
bfa_nw_ioc_error_isr(struct bfa_ioc *ioc)
void
bfa_nw_ioc_hbfail_register(struct bfa_ioc *ioc,
struct bfa_ioc_hbfail_notify *notify)
#define BFA_MFG_NAME "Brocade"
static void
bfa_ioc_get_adapter_attr(struct bfa_ioc *ioc,
struct bfa_adapter_attr *ad_attr)
static enum bfa_ioc_type
bfa_ioc_get_type(struct bfa_ioc *ioc)
static void
bfa_ioc_get_adapter_serial_num(struct bfa_ioc *ioc, char *serial_num)
static void
bfa_ioc_get_adapter_fw_ver(struct bfa_ioc *ioc, char *fw_ver)
static void
bfa_ioc_get_pci_chip_rev(struct bfa_ioc *ioc, char *chip_rev)
static void
bfa_ioc_get_adapter_optrom_ver(struct bfa_ioc *ioc, char *optrom_ver)
static void
bfa_ioc_get_adapter_manufacturer(struct bfa_ioc *ioc, char *manufacturer)
static void
bfa_ioc_get_adapter_model(struct bfa_ioc *ioc, char *model)
static enum bfa_ioc_state
bfa_ioc_get_state(struct bfa_ioc *ioc)
void
bfa_nw_ioc_get_attr(struct bfa_ioc *ioc, struct bfa_ioc_attr *ioc_attr)
static u64
bfa_ioc_get_pwwn(struct bfa_ioc *ioc)
mac_t
bfa_nw_ioc_get_mac(struct bfa_ioc *ioc)
static void
bfa_ioc_recover(struct bfa_ioc *ioc)
static void
bfa_ioc_check_attr_wwns(struct bfa_ioc *ioc)
static void
bfa_iocpf_enable(struct bfa_ioc *ioc)
static void
bfa_iocpf_disable(struct bfa_ioc *ioc)
static void
bfa_iocpf_fail(struct bfa_ioc *ioc)
static void
bfa_iocpf_initfail(struct bfa_ioc *ioc)
static void
bfa_iocpf_getattrfail(struct bfa_ioc *ioc)
static void
bfa_iocpf_stop(struct bfa_ioc *ioc)
void
bfa_nw_iocpf_timeout(void *ioc_arg)
void
bfa_nw_iocpf_sem_timeout(void *ioc_arg)
