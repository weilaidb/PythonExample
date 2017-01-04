static struct plat_sci_port scif0_platform_data = ;
static struct platform_device scif0_device = ;
static struct plat_sci_port scif1_platform_data = ;
static struct platform_device scif1_device = ;
static struct plat_sci_port scif2_platform_data = ;
static struct platform_device scif2_device = ;
static struct plat_sci_port scif3_platform_data = ;
static struct platform_device scif3_device = ;
static struct plat_sci_port scif4_platform_data = ;
static struct platform_device scif4_device = ;
static struct plat_sci_port scif5_platform_data = ;
static struct platform_device scif5_device = ;
static struct sh_timer_config tmu0_platform_data = ;
static struct resource tmu0_resources[] = ;
static struct platform_device tmu0_device = ;
static struct sh_timer_config tmu1_platform_data = ;
static struct resource tmu1_resources[] = ;
static struct platform_device tmu1_device = ;
static struct sh_timer_config tmu2_platform_data = ;
static struct resource tmu2_resources[] = ;
static struct platform_device tmu2_device = ;
static struct sh_timer_config tmu3_platform_data = ;
static struct resource tmu3_resources[] = ;
static struct platform_device tmu3_device = ;
static struct sh_timer_config tmu4_platform_data = ;
static struct resource tmu4_resources[] = ;
static struct platform_device tmu4_device = ;
static struct sh_timer_config tmu5_platform_data = ;
static struct resource tmu5_resources[] = ;
static struct platform_device tmu5_device = ;
static struct sh_timer_config tmu6_platform_data = ;
static struct resource tmu6_resources[] = ;
static struct platform_device tmu6_device = ;
static struct sh_timer_config tmu7_platform_data = ;
static struct resource tmu7_resources[] = ;
static struct platform_device tmu7_device = ;
static struct sh_timer_config tmu8_platform_data = ;
static struct resource tmu8_resources[] = ;
static struct platform_device tmu8_device = ;
static struct sh_timer_config tmu9_platform_data = ;
static struct resource tmu9_resources[] = ;
static struct platform_device tmu9_device = ;
static struct sh_timer_config tmu10_platform_data = ;
static struct resource tmu10_resources[] = ;
static struct platform_device tmu10_device = ;
static struct sh_timer_config tmu11_platform_data = ;
static struct resource tmu11_resources[] = ;
static struct platform_device tmu11_device = ;
static const struct sh_dmae_channel dmac0_channels[] = ;
static const unsigned int ts_shift[] = TS_SHIFT;
static struct sh_dmae_pdata dma0_platform_data = ;
static struct resource dmac0_resources[] = ;
static struct platform_device dma0_device = ;
#define USB_EHCI_START 0xffe70000
#define USB_OHCI_START 0xffe70400
static struct resource usb_ehci_resources[] = ;
static struct platform_device usb_ehci_device = ;
static struct resource usb_ohci_resources[] = ;
static struct platform_device usb_ohci_device = ;
static struct platform_device *sh7786_early_devices[] __initdata = ;
static struct platform_device *sh7786_devices[] __initdata = ;
#define USBCTL0		0xffe70858
#define CLOCK_MODE_MASK 0xffffff7f
#define EXT_CLOCK_MODE  0x00000080
void __init sh7786_usb_use_exclock(void)
#define USBINITREG1	0xffe70094
#define USBINITREG2	0xffe7009c
#define USBINITVAL1	0x00ff0040
#define USBINITVAL2	0x00000001
#define USBPCTL1	0xffe70804
#define USBST		0xffe70808
#define PHY_ENB		0x00000001
#define PLL_ENB		0x00000002
#define PHY_RST		0x00000004
#define ACT_PLL_STATUS	0xc0000000
static void __init sh7786_usb_setup(void)
enum ;
static struct intc_vect sh7786_vectors[] __initdata = ;
#define CnINTMSK0	0xfe410030
#define CnINTMSK1	0xfe410040
#define CnINTMSKCLR0	0xfe410050
#define CnINTMSKCLR1	0xfe410060
#define CnINT2MSKR0	0xfe410a20
#define CnINT2MSKR1	0xfe410a24
#define CnINT2MSKR2	0xfe410a28
#define CnINT2MSKR3	0xfe410a2c
#define CnINT2MSKCR0	0xfe410a30
#define CnINT2MSKCR1	0xfe410a34
#define CnINT2MSKCR2	0xfe410a38
#define CnINT2MSKCR3	0xfe410a3c
#define INTMSK2		0xfe410068
#define INTMSKCLR2	0xfe41006c
#define INTDISTCR0	0xfe4100b0
#define INTDISTCR1	0xfe4100b4
#define INT2DISTCR0	0xfe410900
#define INT2DISTCR1	0xfe410904
#define INT2DISTCR2	0xfe410908
#define INT2DISTCR3	0xfe41090c
static struct intc_mask_reg sh7786_mask_registers[] __initdata = ;
static struct intc_prio_reg sh7786_prio_registers[] __initdata = ;
static struct intc_subgroup sh7786_subgroups[] __initdata = ;
static struct intc_desc sh7786_intc_desc __initdata = ;
static struct intc_vect vectors_irq0123[] __initdata = ;
static struct intc_vect vectors_irq4567[] __initdata = ;
static struct intc_sense_reg sh7786_sense_registers[] __initdata = ;
static struct intc_mask_reg sh7786_ack_registers[] __initdata = ;
static DECLARE_INTC_DESC_ACK(intc_desc_irq0123, "sh7786-irq0123",
vectors_irq0123, NULL, sh7786_mask_registers,
sh7786_prio_registers, sh7786_sense_registers,
sh7786_ack_registers);
static DECLARE_INTC_DESC_ACK(intc_desc_irq4567, "sh7786-irq4567",
vectors_irq4567, NULL, sh7786_mask_registers,
sh7786_prio_registers, sh7786_sense_registers,
sh7786_ack_registers);
static struct intc_vect vectors_irl0123[] __initdata = ;
static struct intc_vect vectors_irl4567[] __initdata = ;
static DECLARE_INTC_DESC(intc_desc_irl0123, "sh7786-irl0123", vectors_irl0123,
NULL, sh7786_mask_registers, NULL, NULL);
static DECLARE_INTC_DESC(intc_desc_irl4567, "sh7786-irl4567", vectors_irl4567,
NULL, sh7786_mask_registers, NULL, NULL);
#define INTC_ICR0	0xfe410000
#define INTC_INTMSK0	CnINTMSK0
#define INTC_INTMSK1	CnINTMSK1
#define INTC_INTMSK2	INTMSK2
#define INTC_INTMSKCLR1	CnINTMSKCLR1
#define INTC_INTMSKCLR2	INTMSKCLR2
void __init plat_irq_setup(void)
void __init plat_irq_setup_pins(int mode)
void __init plat_mem_setup(void)
static int __init sh7786_devices_setup(void)
arch_initcall(sh7786_devices_setup);
void __init plat_early_device_setup(void)
