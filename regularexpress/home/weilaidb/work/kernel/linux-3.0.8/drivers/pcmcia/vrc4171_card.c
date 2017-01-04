MODULE_DESCRIPTION("NEC VRC4171 Card Controllers driver for Socket Services");
MODULE_AUTHOR("Yoichi Yuasa <yuasa@linux-mips.org>");
MODULE_LICENSE("GPL");
#define CARD_MAX_SLOTS		2
#define CARD_SLOTA		0
#define CARD_SLOTB		1
#define CARD_SLOTB_OFFSET	0x40
#define CARD_MEM_START		0x10000000
#define CARD_MEM_END		0x13ffffff
#define CARD_MAX_MEM_OFFSET	0x3ffffff
#define CARD_MAX_MEM_SPEED	1000
#define CARD_CONTROLLER_INDEX	0x03e0
#define CARD_CONTROLLER_DATA	0x03e1
#define VPP_GET_VCC		0x01
#define POWER_ENABLE		0x10
#define CARD_VOLTAGE_SENSE	0x1f
#define VCC_3VORXV_CAPABLE	0x00
#define VCC_XV_ONLY		0x01
#define VCC_3V_CAPABLE	0x02
#define VCC_5V_ONLY		0x03
#define CARD_VOLTAGE_SELECT	0x2f
#define VCC_3V		0x01
#define VCC_5V		0x00
#define VCC_XV		0x02
#define VCC_STATUS_3V		0x02
#define VCC_STATUS_5V		0x01
#define VCC_STATUS_XV		0x03
#define GLOBAL_CONTROL		0x1e
#define EXWRBK		0x04
#define IRQPM_EN		0x08
#define CLRPMIRQ		0x10
#define INTERRUPT_STATUS	0x05fa
#define IRQ_A			0x02
#define IRQ_B			0x04
#define CONFIGURATION1		0x05fe
#define SLOTB_CONFIG		0xc000
#define SLOTB_NONE		0x0000
#define SLOTB_PCCARD		0x4000
#define SLOTB_CF		0x8000
#define SLOTB_FLASHROM		0xc000
#define CARD_CONTROLLER_START	CARD_CONTROLLER_INDEX
#define CARD_CONTROLLER_END	CARD_CONTROLLER_DATA
#define IO_MAX_MAPS	2
#define MEM_MAX_MAPS	5
typedef enum  vrc4171_slot_t;
typedef enum  vrc4171_slotb_t;
typedef struct vrc4171_socket  vrc4171_socket_t;
static vrc4171_socket_t vrc4171_sockets[CARD_MAX_SLOTS];
static vrc4171_slotb_t vrc4171_slotb = SLOTB_IS_NONE;
static char vrc4171_card_name[] = "NEC VRC4171 Card Controller";
static unsigned int vrc4171_irq;
static uint16_t vrc4171_irq_mask = 0xdeb8;
static struct resource vrc4171_card_resource[3] = ;
static struct platform_device vrc4171_card_device = ;
static inline uint16_t vrc4171_get_irq_status(void)
static inline void vrc4171_set_multifunction_pin(vrc4171_slotb_t config)
static inline uint8_t exca_read_byte(int slot, uint8_t index)
static inline uint16_t exca_read_word(int slot, uint8_t index)
static inline uint8_t exca_write_byte(int slot, uint8_t index, uint8_t data)
static inline uint16_t exca_write_word(int slot, uint8_t index, uint16_t data)
static inline int search_nonuse_irq(void)
static int pccard_init(struct pcmcia_socket *sock)
static int pccard_get_status(struct pcmcia_socket *sock, u_int *value)
static inline uint8_t set_Vcc_value(u_char Vcc)
static int pccard_set_socket(struct pcmcia_socket *sock, socket_state_t *state)
static int pccard_set_io_map(struct pcmcia_socket *sock, struct pccard_io_map *io)
static int pccard_set_mem_map(struct pcmcia_socket *sock, struct pccard_mem_map *mem)
static struct pccard_operations vrc4171_pccard_operations = ;
static inline unsigned int get_events(int slot)
static irqreturn_t pccard_interrupt(int irq, void *dev_id)
static inline void reserve_using_irq(int slot)
static int __devinit vrc4171_add_sockets(void)
static void vrc4171_remove_sockets(void)
static int __devinit vrc4171_card_setup(char *options)
__setup("vrc4171_card=", vrc4171_card_setup);
static struct platform_driver vrc4171_card_driver = ;
static int __devinit vrc4171_card_init(void)
static void __devexit vrc4171_card_exit(void)
module_init(vrc4171_card_init);
module_exit(vrc4171_card_exit);
