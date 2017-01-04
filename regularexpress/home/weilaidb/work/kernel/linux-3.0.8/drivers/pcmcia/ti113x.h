#define _LINUX_TI113X_H
#define TI113X_SYSTEM_CONTROL		0x0080
#define  TI113X_SCR_SMIROUTE		0x04000000
#define  TI113X_SCR_SMISTATUS		0x02000000
#define  TI113X_SCR_SMIENB		0x01000000
#define  TI113X_SCR_VCCPROT		0x00200000
#define  TI113X_SCR_REDUCEZV		0x00100000
#define  TI113X_SCR_CDREQEN		0x00080000
#define  TI113X_SCR_CDMACHAN		0x00070000
#define  TI113X_SCR_SOCACTIVE		0x00002000
#define  TI113X_SCR_PWRSTREAM		0x00000800
#define  TI113X_SCR_DELAYUP		0x00000400
#define  TI113X_SCR_DELAYDOWN		0x00000200
#define  TI113X_SCR_INTERROGATE		0x00000100
#define  TI113X_SCR_CLKRUN_SEL		0x00000080
#define  TI113X_SCR_PWRSAVINGS		0x00000040
#define  TI113X_SCR_SUBSYSRW		0x00000020
#define  TI113X_SCR_CB_DPAR		0x00000010
#define  TI113X_SCR_CDMA_EN		0x00000008
#define  TI113X_SCR_ASYNC_IRQ		0x00000004
#define  TI113X_SCR_KEEPCLK		0x00000002
#define  TI113X_SCR_CLKRUN_ENA		0x00000001
#define  TI122X_SCR_SER_STEP		0xc0000000
#define  TI122X_SCR_INTRTIE		0x20000000
#define  TIXX21_SCR_TIEALL		0x10000000
#define  TI122X_SCR_CBRSVD		0x00400000
#define  TI122X_SCR_MRBURSTDN		0x00008000
#define  TI122X_SCR_MRBURSTUP		0x00004000
#define  TI122X_SCR_RIMUX		0x00000001
#define TI1250_MULTIMEDIA_CTL		0x0084
#define  TI1250_MMC_ZVOUTEN		0x80
#define  TI1250_MMC_PORTSEL		0x40
#define  TI1250_MMC_ZVEN1		0x02
#define  TI1250_MMC_ZVEN0		0x01
#define TI1250_GENERAL_STATUS		0x0085
#define TI1250_GPIO0_CONTROL		0x0088
#define TI1250_GPIO1_CONTROL		0x0089
#define TI1250_GPIO2_CONTROL		0x008a
#define TI1250_GPIO3_CONTROL		0x008b
#define TI1250_GPIO_MODE_MASK		0xc0
#define TI122X_MFUNC			0x008c
#define TI122X_MFUNC0_MASK		0x0000000f
#define TI122X_MFUNC1_MASK		0x000000f0
#define TI122X_MFUNC2_MASK		0x00000f00
#define TI122X_MFUNC3_MASK		0x0000f000
#define TI122X_MFUNC4_MASK		0x000f0000
#define TI122X_MFUNC5_MASK		0x00f00000
#define TI122X_MFUNC6_MASK		0x0f000000
#define TI122X_MFUNC0_INTA		0x00000002
#define TI125X_MFUNC0_INTB		0x00000001
#define TI122X_MFUNC1_INTB		0x00000020
#define TI122X_MFUNC3_IRQSER		0x00001000
#define TI113X_RETRY_STATUS		0x0090
#define  TI113X_RSR_PCIRETRY		0x80
#define  TI113X_RSR_CBRETRY		0x40
#define  TI113X_RSR_TEXP_CBB		0x20
#define  TI113X_RSR_MEXP_CBB		0x10
#define  TI113X_RSR_TEXP_CBA		0x08
#define  TI113X_RSR_MEXP_CBA		0x04
#define  TI113X_RSR_TEXP_PCI		0x02
#define  TI113X_RSR_MEXP_PCI		0x01
#define TI113X_CARD_CONTROL		0x0091
#define  TI113X_CCR_RIENB		0x80
#define  TI113X_CCR_ZVENABLE		0x40
#define  TI113X_CCR_PCI_IRQ_ENA		0x20
#define  TI113X_CCR_PCI_IREQ		0x10
#define  TI113X_CCR_PCI_CSC		0x08
#define  TI113X_CCR_SPKROUTEN		0x02
#define  TI113X_CCR_IFG			0x01
#define  TI1220_CCR_PORT_SEL		0x20
#define  TI122X_CCR_AUD2MUX		0x04
#define TI113X_DEVICE_CONTROL		0x0092
#define  TI113X_DCR_5V_FORCE		0x40
#define  TI113X_DCR_3V_FORCE		0x20
#define  TI113X_DCR_IMODE_MASK		0x06
#define  TI113X_DCR_IMODE_ISA		0x02
#define  TI113X_DCR_IMODE_SERIAL	0x04
#define  TI12XX_DCR_IMODE_PCI_ONLY	0x00
#define  TI12XX_DCR_IMODE_ALL_SERIAL	0x06
#define TI113X_BUFFER_CONTROL		0x0093
#define  TI113X_BCR_CB_READ_DEPTH	0x08
#define  TI113X_BCR_CB_WRITE_DEPTH	0x04
#define  TI113X_BCR_PCI_READ_DEPTH	0x02
#define  TI113X_BCR_PCI_WRITE_DEPTH	0x01
#define TI1250_DIAGNOSTIC		0x0093
#define  TI1250_DIAG_TRUE_VALUE		0x80
#define  TI1250_DIAG_PCI_IREQ		0x40
#define  TI1250_DIAG_PCI_CSC		0x20
#define  TI1250_DIAG_ASYNC_CSC		0x01
#define TI113X_DMA_0			0x0094
#define TI113X_DMA_1			0x0098
#define TI113X_IO_OFFSET(map)		(0x36+((map)<<1))
#define ENE_TEST_C9			0xc9
#define ENE_TEST_C9_TLTENABLE		0x02
#define ENE_TEST_C9_PFENABLE_F0		0x04
#define ENE_TEST_C9_PFENABLE_F1		0x08
#define ENE_TEST_C9_PFENABLE		(ENE_TEST_C9_PFENABLE_F0 | ENE_TEST_C9_PFENABLE_F1)
#define ENE_TEST_C9_WPDISALBLE_F0	0x40
#define ENE_TEST_C9_WPDISALBLE_F1	0x80
#define ENE_TEST_C9_WPDISALBLE		(ENE_TEST_C9_WPDISALBLE_F0 | ENE_TEST_C9_WPDISALBLE_F1)
#define ti_sysctl(socket)	((socket)->private[0])
#define ti_cardctl(socket)	((socket)->private[1])
#define ti_devctl(socket)	((socket)->private[2])
#define ti_diag(socket)		((socket)->private[3])
#define ti_mfunc(socket)	((socket)->private[4])
#define ene_test_c9(socket)	((socket)->private[5])
static void ti_save_state(struct yenta_socket *socket)
static void ti_restore_state(struct yenta_socket *socket)
static void ti_zoom_video(struct pcmcia_socket *sock, int onoff)
static void ti1250_zoom_video(struct pcmcia_socket *sock, int onoff)
static void ti_set_zv(struct yenta_socket *socket)
static int ti_init(struct yenta_socket *socket)
static int ti_override(struct yenta_socket *socket)
static void ti113x_use_isa_irq(struct yenta_socket *socket)
static int ti113x_override(struct yenta_socket *socket)
static void ti12xx_irqroute_func0(struct yenta_socket *socket)
static int ti12xx_align_irqs(struct yenta_socket *socket, int *old_irq)
static int ti12xx_tie_interrupts(struct yenta_socket *socket, int *old_irq)
static void ti12xx_untie_interrupts(struct yenta_socket *socket, int old_irq)
static void ti12xx_irqroute_func1(struct yenta_socket *socket)
static int ti12xx_2nd_slot_empty(struct yenta_socket *socket)
static int ti12xx_power_hook(struct pcmcia_socket *sock, int operation)
static int ti12xx_override(struct yenta_socket *socket)
static int ti1250_override(struct yenta_socket *socket)
#define DEVID(_vend,_dev,_subvend,_subdev,mask,bits)
static struct pci_device_id ene_tune_tbl[] = ;
static void ene_tune_bridge(struct pcmcia_socket *sock, struct pci_bus *bus)
static int ene_override(struct yenta_socket *socket)
#  define ene_override ti1250_override
