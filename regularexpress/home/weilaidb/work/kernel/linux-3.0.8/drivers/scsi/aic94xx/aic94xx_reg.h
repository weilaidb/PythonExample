#define _AIC94XX_REG_H_
#define AIC9410_DEV_REV_B0            0x8
#define REG_BASE_ADDR                 0xB8000000
#define REG_BASE_ADDR_CSEQCIO         0xB8002000
#define REG_BASE_ADDR_EXSI            0xB8042800
#define MBAR0_SWA_SIZE                0x58
extern  u32    MBAR0_SWB_SIZE;
#define MBAR0_SWC_SIZE                0x8
#define OCM_BASE_ADDR                 0xA0000000
#define OCM_MAX_SIZE                  0x20000
#define ALL_BASE_ADDR                 OCM_BASE_ADDR
#define PCI_IOBAR_OFFSET              4
#define PCI_CONF_MBAR1                0x6C
#define PCI_CONF_MBAR0_SWA            0x70
#define PCI_CONF_MBAR0_SWB            0x74
#define PCI_CONF_MBAR0_SWC            0x78
#define PCI_CONF_MBAR_KEY             0x7C
#define PCI_CONF_FLSH_BAR             0xB8
u8  asd_read_reg_byte(struct asd_ha_struct *asd_ha, u32 reg);
u16 asd_read_reg_word(struct asd_ha_struct *asd_ha, u32 reg);
u32 asd_read_reg_dword(struct asd_ha_struct *asd_ha, u32 reg);
void asd_write_reg_byte(struct asd_ha_struct *asd_ha, u32 reg, u8 val);
void asd_write_reg_word(struct asd_ha_struct *asd_ha, u32 reg, u16 val);
void asd_write_reg_dword(struct asd_ha_struct *asd_ha, u32 reg, u32 val);
void asd_read_reg_string(struct asd_ha_struct *asd_ha, void *dst,
u32 offs, int count);
void asd_write_reg_string(struct asd_ha_struct *asd_ha, void *src,
u32 offs, int count);
#define ASD_READ_OCM(type, ord, S)                                    \
static inline type asd_read_ocm_##ord (struct asd_ha_struct *asd_ha,  \
u32 offs)                    \
ASD_READ_OCM(u8, byte, b);
ASD_READ_OCM(u16,word, w);
ASD_READ_OCM(u32,dword,l);
#define ASD_WRITE_OCM(type, ord, S)                                    \
static inline void asd_write_ocm_##ord (struct asd_ha_struct *asd_ha,  \
u32 offs, type val)          \
ASD_WRITE_OCM(u8, byte, b);
ASD_WRITE_OCM(u16,word, w);
ASD_WRITE_OCM(u32,dword,l);
#define ASD_DDBSITE_READ(type, ord)                                        \
static inline type asd_ddbsite_read_##ord (struct asd_ha_struct *asd_ha,   \
u16 ddb_site_no,                \
u16 offs)                       \
ASD_DDBSITE_READ(u32, dword);
ASD_DDBSITE_READ(u16, word);
static inline u8 asd_ddbsite_read_byte(struct asd_ha_struct *asd_ha,
u16 ddb_site_no,
u16 offs)
#define ASD_DDBSITE_WRITE(type, ord)                                       \
static inline void asd_ddbsite_write_##ord (struct asd_ha_struct *asd_ha,  \
u16 ddb_site_no,                   \
u16 offs, type val)                \
ASD_DDBSITE_WRITE(u32, dword);
ASD_DDBSITE_WRITE(u16, word);
static inline void asd_ddbsite_write_byte(struct asd_ha_struct *asd_ha,
u16 ddb_site_no,
u16 offs, u8 val)
#define ASD_SCBSITE_READ(type, ord)                                        \
static inline type asd_scbsite_read_##ord (struct asd_ha_struct *asd_ha,   \
u16 scb_site_no,                \
u16 offs)                       \
ASD_SCBSITE_READ(u32, dword);
ASD_SCBSITE_READ(u16, word);
static inline u8 asd_scbsite_read_byte(struct asd_ha_struct *asd_ha,
u16 scb_site_no,
u16 offs)
#define ASD_SCBSITE_WRITE(type, ord)                                       \
static inline void asd_scbsite_write_##ord (struct asd_ha_struct *asd_ha,  \
u16 scb_site_no,                   \
u16 offs, type val)                \
ASD_SCBSITE_WRITE(u32, dword);
ASD_SCBSITE_WRITE(u16, word);
static inline void asd_scbsite_write_byte(struct asd_ha_struct *asd_ha,
u16 scb_site_no,
u16 offs, u8 val)
static inline int asd_ddbsite_update_word(struct asd_ha_struct *asd_ha,
u16 ddb_site_no, u16 offs,
u16 oldval, u16 newval)
static inline int asd_ddbsite_update_byte(struct asd_ha_struct *asd_ha,
u16 ddb_site_no, u16 offs,
u8 _oldval, u8 _newval)
static inline void asd_write_reg_addr(struct asd_ha_struct *asd_ha, u32 reg,
dma_addr_t dma_handle)
static inline u32 asd_get_cmdctx_size(struct asd_ha_struct *asd_ha)
static inline u32 asd_get_devctx_size(struct asd_ha_struct *asd_ha)
static inline void asd_disable_ints(struct asd_ha_struct *asd_ha)
static inline void asd_enable_ints(struct asd_ha_struct *asd_ha)
