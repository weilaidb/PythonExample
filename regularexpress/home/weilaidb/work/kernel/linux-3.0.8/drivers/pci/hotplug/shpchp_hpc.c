#define SLOT_33MHZ		0x0000001f
#define SLOT_66MHZ_PCIX		0x00001f00
#define SLOT_100MHZ_PCIX	0x001f0000
#define SLOT_133MHZ_PCIX	0x1f000000
#define SLOT_66MHZ		0x0000001f
#define SLOT_66MHZ_PCIX_266	0x00000f00
#define SLOT_100MHZ_PCIX_266	0x0000f000
#define SLOT_133MHZ_PCIX_266	0x000f0000
#define SLOT_66MHZ_PCIX_533	0x00f00000
#define SLOT_100MHZ_PCIX_533	0x0f000000
#define SLOT_133MHZ_PCIX_533	0xf0000000
#define SLOT_NUM		0x0000001F
#define	FIRST_DEV_NUM		0x00001F00
#define PSN			0x07FF0000
#define	UPDOWN			0x20000000
#define	MRLSENSOR		0x40000000
#define ATTN_BUTTON		0x80000000
#define CMD_INTR_PENDING	(1 << 0)
#define SLOT_INTR_PENDING(i)	(1 << (i + 1))
#define GLOBAL_INTR_MASK	(1 << 0)
#define GLOBAL_SERR_MASK	(1 << 1)
#define COMMAND_INTR_MASK	(1 << 2)
#define ARBITER_SERR_MASK	(1 << 3)
#define COMMAND_DETECTED	(1 << 16)
#define ARBITER_DETECTED	(1 << 17)
#define SERR_INTR_RSVDZ_MASK	0xfffc0000
#define SLOT_REG(i)		(SLOT1 + (4 * i))
#define SLOT_STATE_SHIFT	(0)
#define SLOT_STATE_MASK		(3 << 0)
#define SLOT_STATE_PWRONLY	(1)
#define SLOT_STATE_ENABLED	(2)
#define SLOT_STATE_DISABLED	(3)
#define PWR_LED_STATE_SHIFT	(2)
#define PWR_LED_STATE_MASK	(3 << 2)
#define ATN_LED_STATE_SHIFT	(4)
#define ATN_LED_STATE_MASK	(3 << 4)
#define ATN_LED_STATE_ON	(1)
#define ATN_LED_STATE_BLINK	(2)
#define ATN_LED_STATE_OFF	(3)
#define POWER_FAULT		(1 << 6)
#define ATN_BUTTON		(1 << 7)
#define MRL_SENSOR		(1 << 8)
#define MHZ66_CAP		(1 << 9)
#define PRSNT_SHIFT		(10)
#define PRSNT_MASK		(3 << 10)
#define PCIX_CAP_SHIFT		(12)
#define PCIX_CAP_MASK_PI1	(3 << 12)
#define PCIX_CAP_MASK_PI2	(7 << 12)
#define PRSNT_CHANGE_DETECTED	(1 << 16)
#define ISO_PFAULT_DETECTED	(1 << 17)
#define BUTTON_PRESS_DETECTED	(1 << 18)
#define MRL_CHANGE_DETECTED	(1 << 19)
#define CON_PFAULT_DETECTED	(1 << 20)
#define PRSNT_CHANGE_INTR_MASK	(1 << 24)
#define ISO_PFAULT_INTR_MASK	(1 << 25)
#define BUTTON_PRESS_INTR_MASK	(1 << 26)
#define MRL_CHANGE_INTR_MASK	(1 << 27)
#define CON_PFAULT_INTR_MASK	(1 << 28)
#define MRL_CHANGE_SERR_MASK	(1 << 29)
#define CON_PFAULT_SERR_MASK	(1 << 30)
#define SLOT_REG_RSVDZ_MASK	((1 << 15) | (7 << 21))
#define SET_SLOT_PWR		0x01
#define SET_SLOT_ENABLE		0x02
#define SET_SLOT_DISABLE	0x03
#define SET_PWR_ON		0x04
#define SET_PWR_BLINK		0x08
#define SET_PWR_OFF		0x0c
#define SET_ATTN_ON		0x10
#define SET_ATTN_BLINK		0x20
#define SET_ATTN_OFF		0x30
#define SETA_PCI_33MHZ		0x40
#define SETA_PCI_66MHZ		0x41
#define SETA_PCIX_66MHZ		0x42
#define SETA_PCIX_100MHZ	0x43
#define SETA_PCIX_133MHZ	0x44
#define SETA_RESERVED1		0x45
#define SETA_RESERVED2		0x46
#define SETA_RESERVED3		0x47
#define SET_PWR_ONLY_ALL	0x48
#define SET_ENABLE_ALL		0x49
#define	SETB_PCI_33MHZ		0x50
#define SETB_PCI_66MHZ		0x51
#define SETB_PCIX_66MHZ_PM	0x52
#define SETB_PCIX_100MHZ_PM	0x53
#define SETB_PCIX_133MHZ_PM	0x54
#define SETB_PCIX_66MHZ_EM	0x55
#define SETB_PCIX_100MHZ_EM	0x56
#define SETB_PCIX_133MHZ_EM	0x57
#define SETB_PCIX_66MHZ_266	0x58
#define SETB_PCIX_100MHZ_266	0x59
#define SETB_PCIX_133MHZ_266	0x5a
#define SETB_PCIX_66MHZ_533	0x5b
#define SETB_PCIX_100MHZ_533	0x5c
#define SETB_PCIX_133MHZ_533	0x5d
#define SETB_RESERVED1		0x5e
#define SETB_RESERVED2		0x5f
#define SWITCH_OPEN		0x1
#define INVALID_CMD		0x2
#define INVALID_SPEED_MODE	0x4
#define DWORD_SELECT		0x2
#define DWORD_DATA		0x4
#define SLOT_EVENT_LATCH	0x2
#define SLOT_SERR_INT_MASK	0x3
static irqreturn_t shpc_isr(int irq, void *dev_id);
static void start_int_poll_timer(struct controller *ctrl, int sec);
static int hpc_check_cmd_status(struct controller *ctrl);
static inline u8 shpc_readb(struct controller *ctrl, int reg)
static inline void shpc_writeb(struct controller *ctrl, int reg, u8 val)
static inline u16 shpc_readw(struct controller *ctrl, int reg)
static inline void shpc_writew(struct controller *ctrl, int reg, u16 val)
static inline u32 shpc_readl(struct controller *ctrl, int reg)
static inline void shpc_writel(struct controller *ctrl, int reg, u32 val)
static inline int shpc_indirect_read(struct controller *ctrl, int index,
u32 *value)
static void int_poll_timeout(unsigned long data)
static void start_int_poll_timer(struct controller *ctrl, int sec)
static inline int is_ctrl_busy(struct controller *ctrl)
static inline int shpc_poll_ctrl_busy(struct controller *ctrl)
static inline int shpc_wait_cmd(struct controller *ctrl)
static int shpc_write_cmd(struct slot *slot, u8 t_slot, u8 cmd)
static int hpc_check_cmd_status(struct controller *ctrl)
static int hpc_get_attention_status(struct slot *slot, u8 *status)
static int hpc_get_power_status(struct slot * slot, u8 *status)
static int hpc_get_latch_status(struct slot *slot, u8 *status)
static int hpc_get_adapter_status(struct slot *slot, u8 *status)
static int hpc_get_prog_int(struct slot *slot, u8 *prog_int)
static int hpc_get_adapter_speed(struct slot *slot, enum pci_bus_speed *value)
static int hpc_get_mode1_ECC_cap(struct slot *slot, u8 *mode)
static int hpc_query_power_fault(struct slot * slot)
static int hpc_set_attention_status(struct slot *slot, u8 value)
static void hpc_set_green_led_on(struct slot *slot)
static void hpc_set_green_led_off(struct slot *slot)
static void hpc_set_green_led_blink(struct slot *slot)
static void hpc_release_ctlr(struct controller *ctrl)
static int hpc_power_on_slot(struct slot * slot)
static int hpc_slot_enable(struct slot * slot)
static int hpc_slot_disable(struct slot * slot)
static int shpc_get_cur_bus_speed(struct controller *ctrl)
static int hpc_set_bus_speed_mode(struct slot * slot, enum pci_bus_speed value)
static irqreturn_t shpc_isr(int irq, void *dev_id)
static int shpc_get_max_bus_speed(struct controller *ctrl)
static struct hpc_ops shpchp_hpc_ops = ;
int shpc_init(struct controller *ctrl, struct pci_dev *pdev)
