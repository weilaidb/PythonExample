#define SROM_OFFSET(sih) ((sih->ccrev > 31) ? \
(((sih->cccaps & CC_CAP_SROM) == 0) ? NULL : \
((u8 *)curmap + PCI_16KB0_CCREGS_OFFSET + CC_SROM_OTP)) : \
((u8 *)curmap + PCI_BAR0_SPROM_OFFSET))
#if defined(BCMDBG)
#define WRITE_ENABLE_DELAY	500
#define WRITE_WORD_DELAY	20
typedef struct varbuf  varbuf_t;
extern char *_vars;
extern uint _varsz;
static int initvars_srom_si(si_t *sih, void *curmap, char **vars, uint *count);
static void _initvars_srom_pci(u8 sromrev, u16 *srom, uint off, varbuf_t *b);
static int initvars_srom_pci(si_t *sih, void *curmap, char **vars, uint *count);
static int initvars_flash_si(si_t *sih, char **vars, uint *count);
static int sprom_read_pci(si_t *sih, u16 *sprom,
uint wordoff, u16 *buf, uint nwords, bool check_crc);
#if defined(BCMNVRAMR)
static int otp_read_pci(si_t *sih, u16 *buf, uint bufsz);
static u16 srom_cc_cmd(si_t *sih, void *ccregs, u32 cmd,
uint wordoff, u16 data);
static int initvars_table(char *start, char *end,
char **vars, uint *count);
static int initvars_flash(si_t *sih, char **vp,
uint len);
static void varbuf_init(varbuf_t *b, char *buf, uint size)
static int varbuf_append(varbuf_t *b, const char *fmt, ...)
int srom_var_init(si_t *sih, uint bustype, void *curmap,
char **vars, uint *count)
static u16
srom_cc_cmd(si_t *sih, void *ccregs, u32 cmd,
uint wordoff, u16 data)
static inline void ltoh16_buf(u16 *buf, unsigned int size)
static inline void htol16_buf(u16 *buf, unsigned int size)
static int
sprom_read_pci(si_t *sih, u16 *sprom, uint wordoff,
u16 *buf, uint nwords, bool check_crc)
#if defined(BCMNVRAMR)
static int otp_read_pci(si_t *sih, u16 *buf, uint bufsz)
static int initvars_table(char *start, char *end,
char **vars, uint *count)
static int initvars_flash(si_t *sih, char **base, uint len)
static int initvars_flash_si(si_t *sih, char **vars, uint *count)
static uint mask_shift(u16 mask)
static uint mask_width(u16 mask)
static void _initvars_srom_pci(u8 sromrev, u16 *srom, uint off, varbuf_t *b)
static int initvars_srom_pci(si_t *sih, void *curmap, char **vars, uint *count)
static int initvars_srom_si(si_t *sih, void *curmap, char **vars, uint *varsz)
