BFA_TRC_FILE(CNA, IOC);
#define BFA_IOC_TOV		3000
#define BFA_IOC_HWSEM_TOV	500
#define BFA_IOC_HB_TOV		500
#define BFA_IOC_HWINIT_MAX	5
#define BFA_IOC_TOV_RECOVER	 BFA_IOC_HB_TOV
#define bfa_ioc_timer_start(__ioc)					\
bfa_timer_begin((__ioc)->timer_mod, &(__ioc)->ioc_timer,	\
bfa_ioc_timeout, (__ioc), BFA_IOC_TOV)
#define bfa_ioc_timer_stop(__ioc)   bfa_timer_stop(&(__ioc)->ioc_timer)
#define bfa_hb_timer_start(__ioc)					\
bfa_timer_begin((__ioc)->timer_mod, &(__ioc)->hb_timer,		\
bfa_ioc_hb_check, (__ioc), BFA_IOC_HB_TOV)
#define bfa_hb_timer_stop(__ioc)	bfa_timer_stop(&(__ioc)->hb_timer)
#define BFA_DBG_FWTRC_OFF(_fn)	(BFI_IOC_TRC_OFF + BFA_DBG_FWTRC_LEN * (_fn))
#define bfa_ioc_firmware_lock(__ioc)			\
((__ioc)->ioc_hwif->ioc_firmware_lock(__ioc))
#define bfa_ioc_firmware_unlock(__ioc)			\
((__ioc)->ioc_hwif->ioc_firmware_unlock(__ioc))
#define bfa_ioc_reg_init(__ioc) ((__ioc)->ioc_hwif->ioc_reg_init(__ioc))
#define bfa_ioc_map_port(__ioc) ((__ioc)->ioc_hwif->ioc_map_port(__ioc))
#define bfa_ioc_notify_fail(__ioc)              \
((__ioc)->ioc_hwif->ioc_notify_fail(__ioc))
#define bfa_ioc_sync_start(__ioc)               \
((__ioc)->ioc_hwif->ioc_sync_start(__ioc))
#define bfa_ioc_sync_join(__ioc)                \
((__ioc)->ioc_hwif->ioc_sync_join(__ioc))
#define bfa_ioc_sync_leave(__ioc)               \
((__ioc)->ioc_hwif->ioc_sync_leave(__ioc))
#define bfa_ioc_sync_ack(__ioc)                 \
((__ioc)->ioc_hwif->ioc_sync_ack(__ioc))
#define bfa_ioc_sync_complete(__ioc)            \
((__ioc)->ioc_hwif->ioc_sync_complete(__ioc))
#define bfa_ioc_mbox_cmd_pending(__ioc)		\
(!list_empty(&((__ioc)->mbox_mod.cmd_q)) || \
readl((__ioc)->ioc_regs.hfn_mbox_cmd))
bfa_boolean_t bfa_auto_recover = BFA_TRUE;
static void bfa_ioc_hw_sem_get(struct bfa_ioc_s *ioc);
static void bfa_ioc_hwinit(struct bfa_ioc_s *ioc, bfa_boolean_t force);
static void bfa_ioc_timeout(void *ioc);
static void bfa_ioc_send_enable(struct bfa_ioc_s *ioc);
static void bfa_ioc_send_disable(struct bfa_ioc_s *ioc);
static void bfa_ioc_send_getattr(struct bfa_ioc_s *ioc);
static void bfa_ioc_hb_monitor(struct bfa_ioc_s *ioc);
static void bfa_ioc_mbox_poll(struct bfa_ioc_s *ioc);
static void bfa_ioc_mbox_hbfail(struct bfa_ioc_s *ioc);
static void bfa_ioc_recover(struct bfa_ioc_s *ioc);
static void bfa_ioc_check_attr_wwns(struct bfa_ioc_s *ioc);
static void bfa_ioc_disable_comp(struct bfa_ioc_s *ioc);
static void bfa_ioc_lpu_stop(struct bfa_ioc_s *ioc);
static void bfa_ioc_debug_save_ftrc(struct bfa_ioc_s *ioc);
static void bfa_ioc_fail_notify(struct bfa_ioc_s *ioc);
static void bfa_ioc_pf_fwmismatch(struct bfa_ioc_s *ioc);
enum ioc_event ;
bfa_fsm_state_decl(bfa_ioc, uninit, struct bfa_ioc_s, enum ioc_event);
bfa_fsm_state_decl(bfa_ioc, reset, struct bfa_ioc_s, enum ioc_event);
bfa_fsm_state_decl(bfa_ioc, enabling, struct bfa_ioc_s, enum ioc_event);
bfa_fsm_state_decl(bfa_ioc, getattr, struct bfa_ioc_s, enum ioc_event);
bfa_fsm_state_decl(bfa_ioc, op, struct bfa_ioc_s, enum ioc_event);
bfa_fsm_state_decl(bfa_ioc, fail_retry, struct bfa_ioc_s, enum ioc_event);
bfa_fsm_state_decl(bfa_ioc, fail, struct bfa_ioc_s, enum ioc_event);
bfa_fsm_state_decl(bfa_ioc, disabling, struct bfa_ioc_s, enum ioc_event);
bfa_fsm_state_decl(bfa_ioc, disabled, struct bfa_ioc_s, enum ioc_event);
static struct bfa_sm_table_s ioc_sm_table[] = ;
#define bfa_iocpf_timer_start(__ioc)					\
bfa_timer_begin((__ioc)->timer_mod, &(__ioc)->ioc_timer,	\
bfa_iocpf_timeout, (__ioc), BFA_IOC_TOV)
#define bfa_iocpf_timer_stop(__ioc)	bfa_timer_stop(&(__ioc)->ioc_timer)
#define bfa_iocpf_recovery_timer_start(__ioc)				\
bfa_timer_begin((__ioc)->timer_mod, &(__ioc)->ioc_timer,	\
bfa_iocpf_timeout, (__ioc), BFA_IOC_TOV_RECOVER)
#define bfa_sem_timer_start(__ioc)					\
bfa_timer_begin((__ioc)->timer_mod, &(__ioc)->sem_timer,	\
bfa_iocpf_sem_timeout, (__ioc), BFA_IOC_HWSEM_TOV)
#define bfa_sem_timer_stop(__ioc)	bfa_timer_stop(&(__ioc)->sem_timer)
static void bfa_iocpf_timeout(void *ioc_arg);
static void bfa_iocpf_sem_timeout(void *ioc_arg);
enum iocpf_event ;
enum bfa_iocpf_state ;
bfa_fsm_state_decl(bfa_iocpf, reset, struct bfa_iocpf_s, enum iocpf_event);
bfa_fsm_state_decl(bfa_iocpf, fwcheck, struct bfa_iocpf_s, enum iocpf_event);
bfa_fsm_state_decl(bfa_iocpf, mismatch, struct bfa_iocpf_s, enum iocpf_event);
bfa_fsm_state_decl(bfa_iocpf, semwait, struct bfa_iocpf_s, enum iocpf_event);
bfa_fsm_state_decl(bfa_iocpf, hwinit, struct bfa_iocpf_s, enum iocpf_event);
bfa_fsm_state_decl(bfa_iocpf, enabling, struct bfa_iocpf_s, enum iocpf_event);
bfa_fsm_state_decl(bfa_iocpf, ready, struct bfa_iocpf_s, enum iocpf_event);
bfa_fsm_state_decl(bfa_iocpf, initfail_sync, struct bfa_iocpf_s,
enum iocpf_event);
bfa_fsm_state_decl(bfa_iocpf, initfail, struct bfa_iocpf_s, enum iocpf_event);
bfa_fsm_state_decl(bfa_iocpf, fail_sync, struct bfa_iocpf_s, enum iocpf_event);
bfa_fsm_state_decl(bfa_iocpf, fail, struct bfa_iocpf_s, enum iocpf_event);
bfa_fsm_state_decl(bfa_iocpf, disabling, struct bfa_iocpf_s, enum iocpf_event);
bfa_fsm_state_decl(bfa_iocpf, disabling_sync, struct bfa_iocpf_s,
enum iocpf_event);
bfa_fsm_state_decl(bfa_iocpf, disabled, struct bfa_iocpf_s, enum iocpf_event);
static struct bfa_sm_table_s iocpf_sm_table[] = ;
static void
bfa_ioc_sm_uninit_entry(struct bfa_ioc_s *ioc)
static void
bfa_ioc_sm_uninit(struct bfa_ioc_s *ioc, enum ioc_event event)
static void
bfa_ioc_sm_reset_entry(struct bfa_ioc_s *ioc)
static void
bfa_ioc_sm_reset(struct bfa_ioc_s *ioc, enum ioc_event event)
static void
bfa_ioc_sm_enabling_entry(struct bfa_ioc_s *ioc)
static void
bfa_ioc_sm_enabling(struct bfa_ioc_s *ioc, enum ioc_event event)
static void
bfa_ioc_sm_getattr_entry(struct bfa_ioc_s *ioc)
static void
bfa_ioc_sm_getattr(struct bfa_ioc_s *ioc, enum ioc_event event)
static void
bfa_ioc_sm_op_entry(struct bfa_ioc_s *ioc)
static void
bfa_ioc_sm_op(struct bfa_ioc_s *ioc, enum ioc_event event)
static void
bfa_ioc_sm_disabling_entry(struct bfa_ioc_s *ioc)
static void
bfa_ioc_sm_disabling(struct bfa_ioc_s *ioc, enum ioc_event event)
static void
bfa_ioc_sm_disabled_entry(struct bfa_ioc_s *ioc)
static void
bfa_ioc_sm_disabled(struct bfa_ioc_s *ioc, enum ioc_event event)
static void
bfa_ioc_sm_fail_retry_entry(struct bfa_ioc_s *ioc)
static void
bfa_ioc_sm_fail_retry(struct bfa_ioc_s *ioc, enum ioc_event event)
static void
bfa_ioc_sm_fail_entry(struct bfa_ioc_s *ioc)
static void
bfa_ioc_sm_fail(struct bfa_ioc_s *ioc, enum ioc_event event)
static void
bfa_iocpf_sm_reset_entry(struct bfa_iocpf_s *iocpf)
static void
bfa_iocpf_sm_reset(struct bfa_iocpf_s *iocpf, enum iocpf_event event)
static void
bfa_iocpf_sm_fwcheck_entry(struct bfa_iocpf_s *iocpf)
static void
bfa_iocpf_sm_fwcheck(struct bfa_iocpf_s *iocpf, enum iocpf_event event)
static void
bfa_iocpf_sm_mismatch_entry(struct bfa_iocpf_s *iocpf)
static void
bfa_iocpf_sm_mismatch(struct bfa_iocpf_s *iocpf, enum iocpf_event event)
static void
bfa_iocpf_sm_semwait_entry(struct bfa_iocpf_s *iocpf)
static void
bfa_iocpf_sm_semwait(struct bfa_iocpf_s *iocpf, enum iocpf_event event)
static void
bfa_iocpf_sm_hwinit_entry(struct bfa_iocpf_s *iocpf)
static void
bfa_iocpf_sm_hwinit(struct bfa_iocpf_s *iocpf, enum iocpf_event event)
static void
bfa_iocpf_sm_enabling_entry(struct bfa_iocpf_s *iocpf)
static void
bfa_iocpf_sm_enabling(struct bfa_iocpf_s *iocpf, enum iocpf_event event)
static void
bfa_iocpf_sm_ready_entry(struct bfa_iocpf_s *iocpf)
static void
bfa_iocpf_sm_ready(struct bfa_iocpf_s *iocpf, enum iocpf_event event)
static void
bfa_iocpf_sm_disabling_entry(struct bfa_iocpf_s *iocpf)
static void
bfa_iocpf_sm_disabling(struct bfa_iocpf_s *iocpf, enum iocpf_event event)
static void
bfa_iocpf_sm_disabling_sync_entry(struct bfa_iocpf_s *iocpf)
static void
bfa_iocpf_sm_disabling_sync(struct bfa_iocpf_s *iocpf, enum iocpf_event event)
static void
bfa_iocpf_sm_disabled_entry(struct bfa_iocpf_s *iocpf)
static void
bfa_iocpf_sm_disabled(struct bfa_iocpf_s *iocpf, enum iocpf_event event)
static void
bfa_iocpf_sm_initfail_sync_entry(struct bfa_iocpf_s *iocpf)
static void
bfa_iocpf_sm_initfail_sync(struct bfa_iocpf_s *iocpf, enum iocpf_event event)
static void
bfa_iocpf_sm_initfail_entry(struct bfa_iocpf_s *iocpf)
static void
bfa_iocpf_sm_initfail(struct bfa_iocpf_s *iocpf, enum iocpf_event event)
static void
bfa_iocpf_sm_fail_sync_entry(struct bfa_iocpf_s *iocpf)
static void
bfa_iocpf_sm_fail_sync(struct bfa_iocpf_s *iocpf, enum iocpf_event event)
static void
bfa_iocpf_sm_fail_entry(struct bfa_iocpf_s *iocpf)
static void
bfa_iocpf_sm_fail(struct bfa_iocpf_s *iocpf, enum iocpf_event event)
static void
bfa_ioc_disable_comp(struct bfa_ioc_s *ioc)
bfa_boolean_t
bfa_ioc_sem_get(void __iomem *sem_reg)
static void
bfa_ioc_hw_sem_get(struct bfa_ioc_s *ioc)
static void
bfa_ioc_lmem_init(struct bfa_ioc_s *ioc)
static void
bfa_ioc_lpu_start(struct bfa_ioc_s *ioc)
static void
bfa_ioc_lpu_stop(struct bfa_ioc_s *ioc)
void
bfa_ioc_fwver_get(struct bfa_ioc_s *ioc, struct bfi_ioc_image_hdr_s *fwhdr)
bfa_boolean_t
bfa_ioc_fwver_cmp(struct bfa_ioc_s *ioc, struct bfi_ioc_image_hdr_s *fwhdr)
static bfa_boolean_t
bfa_ioc_fwver_valid(struct bfa_ioc_s *ioc, u32 boot_env)
static void
bfa_ioc_msgflush(struct bfa_ioc_s *ioc)
static void
bfa_ioc_hwinit(struct bfa_ioc_s *ioc, bfa_boolean_t force)
static void
bfa_ioc_timeout(void *ioc_arg)
void
bfa_ioc_mbox_send(struct bfa_ioc_s *ioc, void *ioc_msg, int len)
static void
bfa_ioc_send_enable(struct bfa_ioc_s *ioc)
static void
bfa_ioc_send_disable(struct bfa_ioc_s *ioc)
static void
bfa_ioc_send_getattr(struct bfa_ioc_s *ioc)
static void
bfa_ioc_hb_check(void *cbarg)
static void
bfa_ioc_hb_monitor(struct bfa_ioc_s *ioc)
static void
bfa_ioc_download_fw(struct bfa_ioc_s *ioc, u32 boot_type,
u32 boot_env)
static void
bfa_ioc_getattr_reply(struct bfa_ioc_s *ioc)
static void
bfa_ioc_mbox_attach(struct bfa_ioc_s *ioc)
static void
bfa_ioc_mbox_poll(struct bfa_ioc_s *ioc)
static void
bfa_ioc_mbox_hbfail(struct bfa_ioc_s *ioc)
static bfa_status_t
bfa_ioc_smem_read(struct bfa_ioc_s *ioc, void *tbuf, u32 soff, u32 sz)
static bfa_status_t
bfa_ioc_smem_clr(struct bfa_ioc_s *ioc, u32 soff, u32 sz)
static void
bfa_ioc_fail_notify(struct bfa_ioc_s *ioc)
static void
bfa_ioc_pf_fwmismatch(struct bfa_ioc_s *ioc)
bfa_status_t
bfa_ioc_pll_init(struct bfa_ioc_s *ioc)
void
bfa_ioc_boot(struct bfa_ioc_s *ioc, u32 boot_type, u32 boot_env)
void
bfa_ioc_auto_recover(bfa_boolean_t auto_recover)
bfa_boolean_t
bfa_ioc_is_operational(struct bfa_ioc_s *ioc)
bfa_boolean_t
bfa_ioc_is_initialized(struct bfa_ioc_s *ioc)
void
bfa_ioc_msgget(struct bfa_ioc_s *ioc, void *mbmsg)
void
bfa_ioc_isr(struct bfa_ioc_s *ioc, struct bfi_mbmsg_s *m)
void
bfa_ioc_attach(struct bfa_ioc_s *ioc, void *bfa, struct bfa_ioc_cbfn_s *cbfn,
struct bfa_timer_mod_s *timer_mod)
void
bfa_ioc_detach(struct bfa_ioc_s *ioc)
void
bfa_ioc_pci_init(struct bfa_ioc_s *ioc, struct bfa_pcidev_s *pcidev,
enum bfi_mclass mc)
void
bfa_ioc_mem_claim(struct bfa_ioc_s *ioc,  u8 *dm_kva, u64 dm_pa)
void
bfa_ioc_enable(struct bfa_ioc_s *ioc)
void
bfa_ioc_disable(struct bfa_ioc_s *ioc)
void
bfa_ioc_debug_memclaim(struct bfa_ioc_s *ioc, void *dbg_fwsave)
void
bfa_ioc_mbox_register(struct bfa_ioc_s *ioc, bfa_ioc_mbox_mcfunc_t *mcfuncs)
void
bfa_ioc_mbox_regisr(struct bfa_ioc_s *ioc, enum bfi_mclass mc,
bfa_ioc_mbox_mcfunc_t cbfn, void *cbarg)
void
bfa_ioc_mbox_queue(struct bfa_ioc_s *ioc, struct bfa_mbox_cmd_s *cmd)
void
bfa_ioc_mbox_isr(struct bfa_ioc_s *ioc)
void
bfa_ioc_error_isr(struct bfa_ioc_s *ioc)
void
bfa_ioc_set_fcmode(struct bfa_ioc_s *ioc)
bfa_boolean_t
bfa_ioc_is_disabled(struct bfa_ioc_s *ioc)
bfa_boolean_t
bfa_ioc_fw_mismatch(struct bfa_ioc_s *ioc)
#define bfa_ioc_state_disabled(__sm)		\
(((__sm) == BFI_IOC_UNINIT) ||		\
((__sm) == BFI_IOC_INITING) ||		\
((__sm) == BFI_IOC_HWINIT) ||		\
((__sm) == BFI_IOC_DISABLED) ||	\
((__sm) == BFI_IOC_FAIL) ||		\
((__sm) == BFI_IOC_CFG_DISABLED))
bfa_boolean_t
bfa_ioc_adapter_is_disabled(struct bfa_ioc_s *ioc)
void
bfa_ioc_reset_fwstate(struct bfa_ioc_s *ioc)
#define BFA_MFG_NAME "Brocade"
void
bfa_ioc_get_adapter_attr(struct bfa_ioc_s *ioc,
struct bfa_adapter_attr_s *ad_attr)
enum bfa_ioc_type_e
bfa_ioc_get_type(struct bfa_ioc_s *ioc)
void
bfa_ioc_get_adapter_serial_num(struct bfa_ioc_s *ioc, char *serial_num)
void
bfa_ioc_get_adapter_fw_ver(struct bfa_ioc_s *ioc, char *fw_ver)
void
bfa_ioc_get_pci_chip_rev(struct bfa_ioc_s *ioc, char *chip_rev)
void
bfa_ioc_get_adapter_optrom_ver(struct bfa_ioc_s *ioc, char *optrom_ver)
void
bfa_ioc_get_adapter_manufacturer(struct bfa_ioc_s *ioc, char *manufacturer)
void
bfa_ioc_get_adapter_model(struct bfa_ioc_s *ioc, char *model)
enum bfa_ioc_state
bfa_ioc_get_state(struct bfa_ioc_s *ioc)
void
bfa_ioc_get_attr(struct bfa_ioc_s *ioc, struct bfa_ioc_attr_s *ioc_attr)
mac_t
bfa_ioc_get_mac(struct bfa_ioc_s *ioc)
mac_t
bfa_ioc_get_mfg_mac(struct bfa_ioc_s *ioc)
bfa_boolean_t
bfa_ioc_get_fcmode(struct bfa_ioc_s *ioc)
bfa_status_t
bfa_ioc_debug_fwsave(struct bfa_ioc_s *ioc, void *trcdata, int *trclen)
bfa_status_t
bfa_ioc_debug_fwtrc(struct bfa_ioc_s *ioc, void *trcdata, int *trclen)
static void
bfa_ioc_send_fwsync(struct bfa_ioc_s *ioc)
static void
bfa_ioc_fwsync(struct bfa_ioc_s *ioc)
bfa_status_t
bfa_ioc_debug_fwcore(struct bfa_ioc_s *ioc, void *buf,
u32 *offset, int *buflen)
bfa_status_t
bfa_ioc_fw_stats_get(struct bfa_ioc_s *ioc, void *stats)
bfa_status_t
bfa_ioc_fw_stats_clear(struct bfa_ioc_s *ioc)
static void
bfa_ioc_debug_save_ftrc(struct bfa_ioc_s *ioc)
static void
bfa_ioc_recover(struct bfa_ioc_s *ioc)
static void
bfa_ioc_check_attr_wwns(struct bfa_ioc_s *ioc)
static void
bfa_iocpf_timeout(void *ioc_arg)
static void
bfa_iocpf_sem_timeout(void *ioc_arg)
void
bfa_timer_beat(struct bfa_timer_mod_s *mod)
void
bfa_timer_begin(struct bfa_timer_mod_s *mod, struct bfa_timer_s *timer,
void (*timercb) (void *), void *arg, unsigned int timeout)
void
bfa_timer_stop(struct bfa_timer_s *timer)
