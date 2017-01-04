#define LINUX_ISAPNP_H
#define ISAPNP_VENDOR(a,b,c)	(((((a)-'A'+1)&0x3f)<<2)|\
((((b)-'A'+1)&0x18)>>3)|((((b)-'A'+1)&7)<<13)|\
((((c)-'A'+1)&0x1f)<<8))
#define ISAPNP_DEVICE(x)	((((x)&0xf000)>>8)|\
(((x)&0x0f00)>>8)|\
(((x)&0x00f0)<<8)|\
(((x)&0x000f)<<8))
#define ISAPNP_FUNCTION(x)	ISAPNP_DEVICE(x)
#define DEVICE_COUNT_COMPATIBLE 4
#define ISAPNP_CARD_DEVS	8
#define ISAPNP_CARD_ID(_va, _vb, _vc, _device) \
.card_vendor = ISAPNP_VENDOR(_va, _vb, _vc), .card_device = ISAPNP_DEVICE(_device)
#define ISAPNP_CARD_END \
.card_vendor = 0, .card_device = 0
#define ISAPNP_DEVICE_ID(_va, _vb, _vc, _function) \
#define ISAPNP_CARD_TABLE(name) \
MODULE_GENERIC_TABLE(isapnp_card, name)
struct isapnp_card_id ;
#define ISAPNP_DEVICE_SINGLE(_cva, _cvb, _cvc, _cdevice, _dva, _dvb, _dvc, _dfunction) \
.card_vendor = ISAPNP_VENDOR(_cva, _cvb, _cvc), .card_device =  ISAPNP_DEVICE(_cdevice), \
.vendor = ISAPNP_VENDOR(_dva, _dvb, _dvc), .function = ISAPNP_FUNCTION(_dfunction)
#define ISAPNP_DEVICE_SINGLE_END \
.card_vendor = 0, .card_device = 0
#if defined(CONFIG_ISAPNP) || (defined(CONFIG_ISAPNP_MODULE) && defined(MODULE))
#define __ISAPNP__
int isapnp_present(void);
int isapnp_cfg_begin(int csn, int device);
int isapnp_cfg_end(void);
unsigned char isapnp_read_byte(unsigned char idx);
void isapnp_write_byte(unsigned char idx, unsigned char val);
int isapnp_proc_init(void);
int isapnp_proc_done(void);
static inline int isapnp_proc_init(void)
static inline int isapnp_proc_done(void)
struct pnp_card *pnp_find_card(unsigned short vendor,
unsigned short device,
struct pnp_card *from);
struct pnp_dev *pnp_find_dev(struct pnp_card *card,
unsigned short vendor,
unsigned short function,
struct pnp_dev *from);
static inline int isapnp_present(void)
static inline int isapnp_cfg_begin(int csn, int device)
static inline int isapnp_cfg_end(void)
static inline unsigned char isapnp_read_byte(unsigned char idx)
static inline void isapnp_write_byte(unsigned char idx, unsigned char val)
static inline struct pnp_card *pnp_find_card(unsigned short vendor,
unsigned short device,
struct pnp_card *from)
static inline struct pnp_dev *pnp_find_dev(struct pnp_card *card,
unsigned short vendor,
unsigned short function,
struct pnp_dev *from)
