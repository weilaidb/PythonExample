#define _ASM_X86_OLPC_H
struct olpc_platform_t ;
#define OLPC_F_PRESENT		0x01
#define OLPC_F_DCON		0x02
extern struct olpc_platform_t olpc_platform_info;
static inline uint32_t olpc_board(uint8_t id)
static inline uint32_t olpc_board_pre(uint8_t id)
static inline int machine_is_olpc(void)
static inline int olpc_has_dcon(void)
static inline int olpc_board_at_least(uint32_t rev)
static inline int machine_is_olpc(void)
static inline int olpc_has_dcon(void)
extern int pci_olpc_init(void);
extern int olpc_ec_cmd(unsigned char cmd, unsigned char *inbuf, size_t inlen,
unsigned char *outbuf, size_t outlen);
extern int olpc_ec_mask_set(uint8_t bits);
extern int olpc_ec_mask_unset(uint8_t bits);
#define EC_FIRMWARE_REV		0x08
#define EC_WLAN_ENTER_RESET	0x35
#define EC_WLAN_LEAVE_RESET	0x25
#define EC_SCI_SRC_EMPTY	0x00
#define EC_SCI_SRC_GAME		0x01
#define EC_SCI_SRC_BATTERY	0x02
#define EC_SCI_SRC_BATSOC	0x04
#define EC_SCI_SRC_BATERR	0x08
#define EC_SCI_SRC_EBOOK	0x10
#define EC_SCI_SRC_WLAN		0x20
#define EC_SCI_SRC_ACPWR	0x40
#define EC_SCI_SRC_ALL		0x7F
#define OLPC_GPIO_MIC_AC	1
#define OLPC_GPIO_DCON_STAT0	5
#define OLPC_GPIO_DCON_STAT1	6
#define OLPC_GPIO_DCON_IRQ	7
#define OLPC_GPIO_THRM_ALRM	geode_gpio(10)
#define OLPC_GPIO_DCON_LOAD    11
#define OLPC_GPIO_DCON_BLANK   12
#define OLPC_GPIO_SMB_CLK      14
#define OLPC_GPIO_SMB_DATA     15
#define OLPC_GPIO_WORKAUX	geode_gpio(24)
#define OLPC_GPIO_LID		geode_gpio(26)
#define OLPC_GPIO_ECSCI		geode_gpio(27)
