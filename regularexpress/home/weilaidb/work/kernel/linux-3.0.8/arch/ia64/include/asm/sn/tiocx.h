#define _ASM_IA64_SN_TIO_TIOCX_H
struct cx_id_s ;
struct cx_dev ;
struct cx_device_id ;
struct cx_drv ;
#define TIOCX_DMA_ADDR(a) (u64)((u64)(a) & 0xffffcfffffffffUL)
#define TIOCX_TO_TIOCX_DMA_ADDR(a) (u64)(((u64)(a) & 0xfffffffff) |  \
((((u64)(a)) & 0xffffc000000000UL) <<2))
#define TIO_CE_ASIC_PARTNUM 0xce00
#define TIOCX_CORELET 3
#define TIO_ICE_FRZ_CFG               TIO_MMR_ADDR_MOD(0x00000000b0008100UL)
#define TIO_ICE_PMI_TX_CFG            TIO_MMR_ADDR_MOD(0x00000000b000b100UL)
#define TIO_ICE_PMI_TX_DYN_CREDIT_STAT_CB3 TIO_MMR_ADDR_MOD(0x00000000b000be18UL)
#define TIO_ICE_PMI_TX_DYN_CREDIT_STAT_CB3_CREDIT_CNT_MASK 0x000000000000000fUL
#define to_cx_dev(n) container_of(n, struct cx_dev, dev)
#define to_cx_driver(drv) container_of(drv, struct cx_drv, driver)
extern struct sn_irq_info *tiocx_irq_alloc(nasid_t, int, int, nasid_t, int);
extern void tiocx_irq_free(struct sn_irq_info *);
extern int cx_device_unregister(struct cx_dev *);
extern int cx_device_register(nasid_t, int, int, struct hubdev_info *, int);
extern int cx_driver_unregister(struct cx_drv *);
extern int cx_driver_register(struct cx_drv *);
extern u64 tiocx_dma_addr(u64 addr);
extern u64 tiocx_swin_base(int nasid);
extern void tiocx_mmr_store(int nasid, u64 offset, u64 value);
extern u64 tiocx_mmr_load(int nasid, u64 offset);
