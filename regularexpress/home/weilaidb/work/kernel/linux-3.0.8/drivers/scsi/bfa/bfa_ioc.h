#define __BFA_IOC_H__
#define BFA_DBG_FWTRC_ENTS	(BFI_IOC_TRC_ENTS)
#define BFA_DBG_FWTRC_LEN					\
(BFA_DBG_FWTRC_ENTS * sizeof(struct bfa_trc_s) +	\
(sizeof(struct bfa_trc_mod_s) -				\
BFA_TRC_MAX * sizeof(struct bfa_trc_s)))
typedef void (*bfa_timer_cbfn_t)(void *);
struct bfa_timer_s ;
struct bfa_timer_mod_s ;
#define BFA_TIMER_FREQ 200
void bfa_timer_beat(struct bfa_timer_mod_s *mod);
void bfa_timer_begin(struct bfa_timer_mod_s *mod, struct bfa_timer_s *timer,
bfa_timer_cbfn_t timercb, void *arg,
unsigned int timeout);
void bfa_timer_stop(struct bfa_timer_s *timer);
struct bfa_sge_s ;
#define bfa_sge_word_swap(__sge) do  while (0)
#define bfa_swap_words(_x)  (	\
((_x) << 32) | ((_x) >> 32))
#define bfa_sge_to_be(_x)
#define bfa_sge_to_le(_x)	bfa_sge_word_swap(_x)
#define bfa_sgaddr_le(_x)	bfa_swap_words(_x)
#define	bfa_sge_to_be(_x)	bfa_sge_word_swap(_x)
#define bfa_sge_to_le(_x)
#define bfa_sgaddr_le(_x)	(_x)
struct bfa_pcidev_s ;
struct bfa_dma_s ;
#define BFA_DMA_ALIGN_SZ	256
#define BFA_ROUNDUP(_l, _s)	(((_l) + ((_s) - 1)) & ~((_s) - 1))
#define BFI_SMEM_CB_SIZE	0x200000U
#define BFI_SMEM_CT_SIZE	0x280000U
#define bfa_dma_addr_set(dma_addr, pa)	\
__bfa_dma_addr_set(&dma_addr, (u64)pa)
static inline void
__bfa_dma_addr_set(union bfi_addr_u *dma_addr, u64 pa)
#define bfa_dma_be_addr_set(dma_addr, pa)	\
__bfa_dma_be_addr_set(&dma_addr, (u64)pa)
static inline void
__bfa_dma_be_addr_set(union bfi_addr_u *dma_addr, u64 pa)
struct bfa_ioc_regs_s ;
#define bfa_mem_read(_raddr, _off)	swab32(readl(((_raddr) + (_off))))
#define bfa_mem_write(_raddr, _off, _val)	\
writel(swab32((_val)), ((_raddr) + (_off)))
struct bfa_mbox_cmd_s ;
typedef void (*bfa_ioc_mbox_mcfunc_t)(void *cbarg, struct bfi_mbmsg_s *m);
struct bfa_ioc_mbox_mod_s ;
typedef void (*bfa_ioc_enable_cbfn_t)(void *bfa, enum bfa_status status);
typedef void (*bfa_ioc_disable_cbfn_t)(void *bfa);
typedef void (*bfa_ioc_hbfail_cbfn_t)(void *bfa);
typedef void (*bfa_ioc_reset_cbfn_t)(void *bfa);
struct bfa_ioc_cbfn_s ;
struct bfa_ioc_hbfail_notify_s ;
#define bfa_ioc_hbfail_init(__notify, __cbfn, __cbarg) do  while (0)
struct bfa_iocpf_s ;
struct bfa_ioc_s ;
struct bfa_ioc_hwif_s ;
#define bfa_ioc_pcifn(__ioc)		((__ioc)->pcidev.pci_func)
#define bfa_ioc_devid(__ioc)		((__ioc)->pcidev.device_id)
#define bfa_ioc_bar0(__ioc)		((__ioc)->pcidev.pci_bar_kva)
#define bfa_ioc_portid(__ioc)		((__ioc)->port_id)
#define bfa_ioc_fetch_stats(__ioc, __stats) \
(((__stats)->drv_stats) = (__ioc)->stats)
#define bfa_ioc_clr_stats(__ioc)	\
memset(&(__ioc)->stats, 0, sizeof((__ioc)->stats))
#define bfa_ioc_maxfrsize(__ioc)	((__ioc)->attr->maxfrsize)
#define bfa_ioc_rx_bbcredit(__ioc)	((__ioc)->attr->rx_bbcredit)
#define bfa_ioc_speed_sup(__ioc)	\
BFI_ADAPTER_GETP(SPEED, (__ioc)->attr->adapter_prop)
#define bfa_ioc_get_nports(__ioc)	\
BFI_ADAPTER_GETP(NPORTS, (__ioc)->attr->adapter_prop)
#define bfa_ioc_stats(_ioc, _stats)	((_ioc)->stats._stats++)
#define BFA_IOC_FWIMG_MINSZ	(16 * 1024)
#define BFA_IOC_FWIMG_TYPE(__ioc)					\
(((__ioc)->ctdev) ?						\
(((__ioc)->fcmode) ? BFI_IMAGE_CT_FC : BFI_IMAGE_CT_CNA) :	\
BFI_IMAGE_CB_FC)
#define BFA_IOC_FW_SMEM_SIZE(__ioc)					\
(((__ioc)->ctdev) ? BFI_SMEM_CT_SIZE : BFI_SMEM_CB_SIZE)
#define BFA_IOC_FLASH_CHUNK_NO(off)		(off / BFI_FLASH_CHUNK_SZ_WORDS)
#define BFA_IOC_FLASH_OFFSET_IN_CHUNK(off)	(off % BFI_FLASH_CHUNK_SZ_WORDS)
#define BFA_IOC_FLASH_CHUNK_ADDR(chunkno)  (chunkno * BFI_FLASH_CHUNK_SZ_WORDS)
void bfa_ioc_mbox_queue(struct bfa_ioc_s *ioc, struct bfa_mbox_cmd_s *cmd);
void bfa_ioc_mbox_register(struct bfa_ioc_s *ioc,
bfa_ioc_mbox_mcfunc_t *mcfuncs);
void bfa_ioc_mbox_isr(struct bfa_ioc_s *ioc);
void bfa_ioc_mbox_send(struct bfa_ioc_s *ioc, void *ioc_msg, int len);
void bfa_ioc_msgget(struct bfa_ioc_s *ioc, void *mbmsg);
void bfa_ioc_mbox_regisr(struct bfa_ioc_s *ioc, enum bfi_mclass mc,
bfa_ioc_mbox_mcfunc_t cbfn, void *cbarg);
#define bfa_ioc_pll_init_asic(__ioc) \
((__ioc)->ioc_hwif->ioc_pll_init((__ioc)->pcidev.pci_bar_kva, \
(__ioc)->fcmode))
bfa_status_t bfa_ioc_pll_init(struct bfa_ioc_s *ioc);
bfa_status_t bfa_ioc_cb_pll_init(void __iomem *rb, bfa_boolean_t fcmode);
bfa_boolean_t bfa_ioc_ct_pll_init_complete(void __iomem *rb);
bfa_status_t bfa_ioc_ct_pll_init(void __iomem *rb, bfa_boolean_t fcmode);
#define	bfa_ioc_isr_mode_set(__ioc, __msix)			\
((__ioc)->ioc_hwif->ioc_isr_mode_set(__ioc, __msix))
#define	bfa_ioc_ownership_reset(__ioc)				\
((__ioc)->ioc_hwif->ioc_ownership_reset(__ioc))
void bfa_ioc_set_ct_hwif(struct bfa_ioc_s *ioc);
void bfa_ioc_set_cb_hwif(struct bfa_ioc_s *ioc);
void bfa_ioc_attach(struct bfa_ioc_s *ioc, void *bfa,
struct bfa_ioc_cbfn_s *cbfn, struct bfa_timer_mod_s *timer_mod);
void bfa_ioc_auto_recover(bfa_boolean_t auto_recover);
void bfa_ioc_detach(struct bfa_ioc_s *ioc);
void bfa_ioc_pci_init(struct bfa_ioc_s *ioc, struct bfa_pcidev_s *pcidev,
enum bfi_mclass mc);
void bfa_ioc_mem_claim(struct bfa_ioc_s *ioc,  u8 *dm_kva, u64 dm_pa);
void bfa_ioc_enable(struct bfa_ioc_s *ioc);
void bfa_ioc_disable(struct bfa_ioc_s *ioc);
bfa_boolean_t bfa_ioc_intx_claim(struct bfa_ioc_s *ioc);
void bfa_ioc_boot(struct bfa_ioc_s *ioc, u32 boot_type,
u32 boot_param);
void bfa_ioc_isr(struct bfa_ioc_s *ioc, struct bfi_mbmsg_s *msg);
void bfa_ioc_error_isr(struct bfa_ioc_s *ioc);
bfa_boolean_t bfa_ioc_is_operational(struct bfa_ioc_s *ioc);
bfa_boolean_t bfa_ioc_is_initialized(struct bfa_ioc_s *ioc);
bfa_boolean_t bfa_ioc_is_disabled(struct bfa_ioc_s *ioc);
bfa_boolean_t bfa_ioc_fw_mismatch(struct bfa_ioc_s *ioc);
bfa_boolean_t bfa_ioc_adapter_is_disabled(struct bfa_ioc_s *ioc);
void bfa_ioc_reset_fwstate(struct bfa_ioc_s *ioc);
enum bfa_ioc_type_e bfa_ioc_get_type(struct bfa_ioc_s *ioc);
void bfa_ioc_get_adapter_serial_num(struct bfa_ioc_s *ioc, char *serial_num);
void bfa_ioc_get_adapter_fw_ver(struct bfa_ioc_s *ioc, char *fw_ver);
void bfa_ioc_get_adapter_optrom_ver(struct bfa_ioc_s *ioc, char *optrom_ver);
void bfa_ioc_get_adapter_model(struct bfa_ioc_s *ioc, char *model);
void bfa_ioc_get_adapter_manufacturer(struct bfa_ioc_s *ioc,
char *manufacturer);
void bfa_ioc_get_pci_chip_rev(struct bfa_ioc_s *ioc, char *chip_rev);
enum bfa_ioc_state bfa_ioc_get_state(struct bfa_ioc_s *ioc);
void bfa_ioc_get_attr(struct bfa_ioc_s *ioc, struct bfa_ioc_attr_s *ioc_attr);
void bfa_ioc_get_adapter_attr(struct bfa_ioc_s *ioc,
struct bfa_adapter_attr_s *ad_attr);
void bfa_ioc_debug_memclaim(struct bfa_ioc_s *ioc, void *dbg_fwsave);
bfa_status_t bfa_ioc_debug_fwsave(struct bfa_ioc_s *ioc, void *trcdata,
int *trclen);
bfa_status_t bfa_ioc_debug_fwtrc(struct bfa_ioc_s *ioc, void *trcdata,
int *trclen);
bfa_status_t bfa_ioc_debug_fwcore(struct bfa_ioc_s *ioc, void *buf,
u32 *offset, int *buflen);
void bfa_ioc_set_fcmode(struct bfa_ioc_s *ioc);
bfa_boolean_t bfa_ioc_get_fcmode(struct bfa_ioc_s *ioc);
bfa_boolean_t bfa_ioc_sem_get(void __iomem *sem_reg);
void bfa_ioc_fwver_get(struct bfa_ioc_s *ioc,
struct bfi_ioc_image_hdr_s *fwhdr);
bfa_boolean_t bfa_ioc_fwver_cmp(struct bfa_ioc_s *ioc,
struct bfi_ioc_image_hdr_s *fwhdr);
bfa_status_t bfa_ioc_fw_stats_get(struct bfa_ioc_s *ioc, void *stats);
bfa_status_t bfa_ioc_fw_stats_clear(struct bfa_ioc_s *ioc);
mac_t bfa_ioc_get_mac(struct bfa_ioc_s *ioc);
mac_t bfa_ioc_get_mfg_mac(struct bfa_ioc_s *ioc);
extern u32 bfi_image_ct_fc_size;
extern u32 bfi_image_ct_cna_size;
extern u32 bfi_image_cb_fc_size;
extern u32 *bfi_image_ct_fc;
extern u32 *bfi_image_ct_cna;
extern u32 *bfi_image_cb_fc;
static inline u32 *
bfi_image_ct_fc_get_chunk(u32 off)
static inline u32 *
bfi_image_ct_cna_get_chunk(u32 off)
static inline u32 *
bfi_image_cb_fc_get_chunk(u32 off)
static inline u32*
bfa_cb_image_get_chunk(int type, u32 off)
static inline u32
bfa_cb_image_get_size(int type)
enum ;
