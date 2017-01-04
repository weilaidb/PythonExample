static void asd_write_byte(struct asd_ha_struct *asd_ha,
unsigned long offs, u8 val)
static void asd_write_word(struct asd_ha_struct *asd_ha,
unsigned long offs, u16 val)
static void asd_write_dword(struct asd_ha_struct *asd_ha,
unsigned long offs, u32 val)
static u8 asd_read_byte(struct asd_ha_struct *asd_ha, unsigned long offs)
static u16 asd_read_word(struct asd_ha_struct *asd_ha,
unsigned long offs)
static u32 asd_read_dword(struct asd_ha_struct *asd_ha,
unsigned long offs)
static inline u32 asd_mem_offs_swa(void)
static inline u32 asd_mem_offs_swc(void)
static inline u32 asd_mem_offs_swb(void)
#define ASD_READ_SW(ww, type, ord)					\
static type asd_read_##ww##_##ord(struct asd_ha_struct *asd_ha,		\
u32 reg)				\
#define ASD_WRITE_SW(ww, type, ord)					\
static void asd_write_##ww##_##ord(struct asd_ha_struct *asd_ha,	\
u32 reg, type val)			\
ASD_READ_SW(swa, u8,  byte);
ASD_READ_SW(swa, u16, word);
ASD_READ_SW(swa, u32, dword);
ASD_READ_SW(swb, u8,  byte);
ASD_READ_SW(swb, u16, word);
ASD_READ_SW(swb, u32, dword);
ASD_READ_SW(swc, u8,  byte);
ASD_READ_SW(swc, u16, word);
ASD_READ_SW(swc, u32, dword);
ASD_WRITE_SW(swa, u8,  byte);
ASD_WRITE_SW(swa, u16, word);
ASD_WRITE_SW(swa, u32, dword);
ASD_WRITE_SW(swb, u8,  byte);
ASD_WRITE_SW(swb, u16, word);
ASD_WRITE_SW(swb, u32, dword);
ASD_WRITE_SW(swc, u8,  byte);
ASD_WRITE_SW(swc, u16, word);
ASD_WRITE_SW(swc, u32, dword);
static void asd_move_swb(struct asd_ha_struct *asd_ha, u32 reg)
static void __asd_write_reg_byte(struct asd_ha_struct *asd_ha, u32 reg, u8 val)
#define ASD_WRITE_REG(type, ord)                                  \
void asd_write_reg_##ord (struct asd_ha_struct *asd_ha, u32 reg, type val)\
ASD_WRITE_REG(u8, byte);
ASD_WRITE_REG(u16,word);
ASD_WRITE_REG(u32,dword);
static u8 __asd_read_reg_byte(struct asd_ha_struct *asd_ha, u32 reg)
#define ASD_READ_REG(type, ord)                                   \
type asd_read_reg_##ord (struct asd_ha_struct *asd_ha, u32 reg)   \
ASD_READ_REG(u8, byte);
ASD_READ_REG(u16,word);
ASD_READ_REG(u32,dword);
void asd_read_reg_string(struct asd_ha_struct *asd_ha, void *dst,
u32 offs, int count)
void asd_write_reg_string(struct asd_ha_struct *asd_ha, void *src,
u32 offs, int count)
