#define _AIC94XX_HWI_H_
#define ASD_MAX_PHYS       8
#define ASD_PCBA_SN_SIZE   12
struct asd_ha_addrspace ;
struct bios_struct ;
struct unit_element_struct ;
struct flash_struct ;
struct asd_phy_desc ;
struct asd_dma_tok ;
struct hw_profile ;
struct asd_ascb ;
#define ASD_DL_SIZE_BITS   0x8
#define ASD_DL_SIZE        (1<<(2+ASD_DL_SIZE_BITS))
#define ASD_DEF_DL_TOGGLE  0x01
struct asd_seq_data ;
struct asd_port ;
struct asd_ha_struct ;
#define ASD_BUSADDR_LO(__dma_handle) ((u32)(__dma_handle))
#define ASD_BUSADDR_HI(__dma_handle) (((sizeof(dma_addr_t))==8)     \
? ((u32)((__dma_handle) >> 32)) \
: ((u32)0))
#define dev_to_asd_ha(__dev)  pci_get_drvdata(to_pci_dev(__dev))
#define SCB_SITE_VALID(__site_no) (((__site_no) & 0xF0FF) != 0x00FF   \
&& ((__site_no) & 0xF0FF) > 0x001F)
#define for_each_sequencer(__lseq_mask, __mc, __lseq)                        \
for ((__mc)=(__lseq_mask),(__lseq)=0;(__mc)!=0;(__lseq++),(__mc)>>=1)\
if (((__mc) & 1))
#define for_each_phy(__lseq_mask, __mc, __lseq)                              \
for ((__mc)=(__lseq_mask),(__lseq)=0;(__mc)!=0;(__lseq++),(__mc)>>=1)\
if (((__mc) & 1))
#define PHY_ENABLED(_HA, _I) ((_HA)->hw_prof.enabled_phys & (1<<(_I)))
static inline struct asd_dma_tok *asd_dmatok_alloc(gfp_t flags)
static inline void asd_dmatok_free(struct asd_dma_tok *token)
static inline struct asd_dma_tok *asd_alloc_coherent(struct asd_ha_struct *
asd_ha, size_t size,
gfp_t flags)
static inline void asd_free_coherent(struct asd_ha_struct *asd_ha,
struct asd_dma_tok *token)
static inline void asd_init_ascb(struct asd_ha_struct *asd_ha,
struct asd_ascb *ascb)
static inline void asd_tc_index_release(struct asd_seq_data *seq, int index)
static inline int asd_tc_index_get(struct asd_seq_data *seq, void *ptr)
static inline void *asd_tc_index_find(struct asd_seq_data *seq, int index)
static inline void asd_ascb_free(struct asd_ascb *ascb)
static inline void asd_ascb_free_list(struct asd_ascb *ascb_list)
int  asd_init_hw(struct asd_ha_struct *asd_ha);
irqreturn_t asd_hw_isr(int irq, void *dev_id);
struct asd_ascb *asd_ascb_alloc_list(struct asd_ha_struct
*asd_ha, int *num,
gfp_t gfp_mask);
int  asd_post_ascb_list(struct asd_ha_struct *asd_ha, struct asd_ascb *ascb,
int num);
int  asd_post_escb_list(struct asd_ha_struct *asd_ha, struct asd_ascb *ascb,
int num);
int  asd_init_post_escbs(struct asd_ha_struct *asd_ha);
void asd_build_control_phy(struct asd_ascb *ascb, int phy_id, u8 subfunc);
void asd_control_led(struct asd_ha_struct *asd_ha, int phy_id, int op);
void asd_turn_led(struct asd_ha_struct *asd_ha, int phy_id, int op);
int  asd_enable_phys(struct asd_ha_struct *asd_ha, const u8 phy_mask);
void asd_ascb_timedout(unsigned long data);
int  asd_chip_hardrst(struct asd_ha_struct *asd_ha);
