#define __BFA_IOC_H__
#define BFA_IOC_TOV		3000
#define BFA_IOC_HWSEM_TOV	500
#define BFA_IOC_HB_TOV		500
#define BFA_IOC_HWINIT_MAX	5
struct bfa_pcidev ;
struct bfa_dma ;
#define BFA_DMA_ALIGN_SZ	256
#define BFI_SMEM_CB_SIZE	0x200000U
#define BFI_SMEM_CT_SIZE	0x280000U
#define bfa_dma_be_addr_set(dma_addr, pa)	\
__bfa_dma_be_addr_set(&dma_addr, (u64)pa)
static inline void
__bfa_dma_be_addr_set(union bfi_addr_u *dma_addr, u64 pa)
struct bfa_ioc_regs ;
struct bfa_mbox_cmd ;
typedef void (*bfa_ioc_mbox_mcfunc_t)(void *cbarg, struct bfi_mbmsg *m);
struct bfa_ioc_mbox_mod ;
typedef void (*bfa_ioc_enable_cbfn_t)(void *bfa, enum bfa_status status);
typedef void (*bfa_ioc_disable_cbfn_t)(void *bfa);
typedef void (*bfa_ioc_hbfail_cbfn_t)(void *bfa);
typedef void (*bfa_ioc_reset_cbfn_t)(void *bfa);
struct bfa_ioc_cbfn ;
struct bfa_ioc_hbfail_notify ;
#define bfa_ioc_hbfail_init(__notify, __cbfn, __cbarg) do  while (0)
struct bfa_iocpf ;
struct bfa_ioc ;
struct bfa_ioc_hwif ;
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
(((__ioc)->ctdev) ? 						\
(((__ioc)->fcmode) ? BFI_IMAGE_CT_FC : BFI_IMAGE_CT_CNA) :	\
BFI_IMAGE_CB_FC)
#define BFA_IOC_FW_SMEM_SIZE(__ioc)					\
(((__ioc)->ctdev) ? BFI_SMEM_CT_SIZE : BFI_SMEM_CB_SIZE)
#define BFA_IOC_FLASH_CHUNK_NO(off)		(off / BFI_FLASH_CHUNK_SZ_WORDS)
#define BFA_IOC_FLASH_OFFSET_IN_CHUNK(off)	(off % BFI_FLASH_CHUNK_SZ_WORDS)
#define BFA_IOC_FLASH_CHUNK_ADDR(chunkno)  (chunkno * BFI_FLASH_CHUNK_SZ_WORDS)
void bfa_nw_ioc_mbox_queue(struct bfa_ioc *ioc, struct bfa_mbox_cmd *cmd);
void bfa_nw_ioc_mbox_isr(struct bfa_ioc *ioc);
void bfa_nw_ioc_mbox_regisr(struct bfa_ioc *ioc, enum bfi_mclass mc,
bfa_ioc_mbox_mcfunc_t cbfn, void *cbarg);
#define bfa_ioc_pll_init_asic(__ioc) \
((__ioc)->ioc_hwif->ioc_pll_init((__ioc)->pcidev.pci_bar_kva, \
(__ioc)->fcmode))
#define	bfa_ioc_isr_mode_set(__ioc, __msix)			\
((__ioc)->ioc_hwif->ioc_isr_mode_set(__ioc, __msix))
#define	bfa_ioc_ownership_reset(__ioc)				\
((__ioc)->ioc_hwif->ioc_ownership_reset(__ioc))
void bfa_nw_ioc_set_ct_hwif(struct bfa_ioc *ioc);
void bfa_nw_ioc_attach(struct bfa_ioc *ioc, void *bfa,
struct bfa_ioc_cbfn *cbfn);
void bfa_nw_ioc_auto_recover(bool auto_recover);
void bfa_nw_ioc_detach(struct bfa_ioc *ioc);
void bfa_nw_ioc_pci_init(struct bfa_ioc *ioc, struct bfa_pcidev *pcidev,
enum bfi_mclass mc);
u32 bfa_nw_ioc_meminfo(void);
void bfa_nw_ioc_mem_claim(struct bfa_ioc *ioc,  u8 *dm_kva, u64 dm_pa);
void bfa_nw_ioc_enable(struct bfa_ioc *ioc);
void bfa_nw_ioc_disable(struct bfa_ioc *ioc);
void bfa_nw_ioc_error_isr(struct bfa_ioc *ioc);
void bfa_nw_ioc_get_attr(struct bfa_ioc *ioc, struct bfa_ioc_attr *ioc_attr);
void bfa_nw_ioc_hbfail_register(struct bfa_ioc *ioc,
struct bfa_ioc_hbfail_notify *notify);
bool bfa_nw_ioc_sem_get(void __iomem *sem_reg);
void bfa_nw_ioc_sem_release(void __iomem *sem_reg);
void bfa_nw_ioc_hw_sem_release(struct bfa_ioc *ioc);
void bfa_nw_ioc_fwver_get(struct bfa_ioc *ioc,
struct bfi_ioc_image_hdr *fwhdr);
bool bfa_nw_ioc_fwver_cmp(struct bfa_ioc *ioc,
struct bfi_ioc_image_hdr *fwhdr);
mac_t bfa_nw_ioc_get_mac(struct bfa_ioc *ioc);
void bfa_nw_ioc_timeout(void *ioc);
void bfa_nw_ioc_hb_check(void *ioc);
void bfa_nw_iocpf_timeout(void *ioc);
void bfa_nw_iocpf_sem_timeout(void *ioc);
u32 *bfa_cb_image_get_chunk(int type, u32 off);
u32 bfa_cb_image_get_size(int type);
