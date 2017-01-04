static struct plat_sci_port scif2_platform_data = ;
static struct platform_device scif2_device = ;
static struct plat_sci_port scif3_platform_data = ;
static struct platform_device scif3_device = ;
static struct plat_sci_port scif4_platform_data = ;
static struct platform_device scif4_device = ;
static struct sh_timer_config tmu0_platform_data = ;
static struct resource tmu0_resources[] = ;
static struct platform_device tmu0_device = ;
static struct sh_timer_config tmu1_platform_data = ;
static struct resource tmu1_resources[] = ;
static struct platform_device tmu1_device = ;
static struct resource spi0_resources[] = ;
static const struct sh_dmae_slave_config sh7757_dmae0_slaves[] = ;
static const struct sh_dmae_slave_config sh7757_dmae1_slaves[] = ;
static const struct sh_dmae_slave_config sh7757_dmae2_slaves[] = ;
static const struct sh_dmae_slave_config sh7757_dmae3_slaves[] = ;
static const struct sh_dmae_channel sh7757_dmae_channels[] = ;
static const unsigned int ts_shift[] = TS_SHIFT;
static struct sh_dmae_pdata dma0_platform_data = ;
static struct sh_dmae_pdata dma1_platform_data = ;
static struct sh_dmae_pdata dma2_platform_data = ;
static struct sh_dmae_pdata dma3_platform_data = ;
static struct resource sh7757_dmae0_resources[] = ;
static struct resource sh7757_dmae1_resources[] = ;
static struct resource sh7757_dmae2_resources[] = ;
static struct resource sh7757_dmae3_resources[] = ;
static struct platform_device dma0_device = ;
static struct platform_device dma1_device = ;
static struct platform_device dma2_device = ;
static struct platform_device dma3_device = ;
static struct platform_device spi0_device = ;
static struct resource usb_ehci_resources[] = ;
static struct platform_device usb_ehci_device = ;
static struct resource usb_ohci_resources[] = ;
static struct platform_device usb_ohci_device = ;
static struct platform_device *sh7757_devices[] __initdata = ;
static int __init sh7757_devices_setup(void)
arch_initcall(sh7757_devices_setup);
static struct platform_device *sh7757_early_devices[] __initdata = ;
void __init plat_early_device_setup(void)
enum ;
static struct intc_vect vectors[] __initdata = ;
static struct intc_group groups[] __initdata = ;
static struct intc_mask_reg mask_registers[] __initdata = ;
#define INTPRI		0xffd00010
#define INT2PRI0	0xffd40000
#define INT2PRI1	0xffd40004
#define INT2PRI2	0xffd40008
#define INT2PRI3	0xffd4000c
#define INT2PRI4	0xffd40010
#define INT2PRI5	0xffd40014
#define INT2PRI6	0xffd40018
#define INT2PRI7	0xffd4001c
#define INT2PRI8	0xffd400a0
#define INT2PRI9	0xffd400a4
#define INT2PRI10	0xffd400a8
#define INT2PRI11	0xffd400ac
#define INT2PRI12	0xffd400b0
#define INT2PRI13	0xffd400b4
#define INT2PRI14	0xffd400b8
#define INT2PRI15	0xffd400bc
#define INT2PRI16	0xffd10000
#define INT2PRI17	0xffd10004
#define INT2PRI18	0xffd10008
#define INT2PRI19	0xffd1000c
#define INT2PRI20	0xffd10010
#define INT2PRI21	0xffd10014
#define INT2PRI22	0xffd10018
#define INT2PRI23	0xffd1001c
#define INT2PRI24	0xffd100a0
#define INT2PRI25	0xffd100a4
#define INT2PRI26	0xffd100a8
#define INT2PRI27	0xffd100ac
#define INT2PRI28	0xffd100b0
#define INT2PRI29	0xffd100b4
#define INT2PRI30	0xffd100b8
#define INT2PRI31	0xffd100bc
#define INT2PRI32	0xffd20000
#define INT2PRI33	0xffd20004
#define INT2PRI34	0xffd20008
#define INT2PRI35	0xffd2000c
#define INT2PRI36	0xffd20010
#define INT2PRI37	0xffd20014
#define INT2PRI38	0xffd20018
#define INT2PRI39	0xffd2001c
#define INT2PRI40	0xffd200a0
#define INT2PRI41	0xffd200a4
#define INT2PRI42	0xffd200a8
#define INT2PRI43	0xffd200ac
#define INT2PRI44	0xffd200b0
#define INT2PRI45	0xffd200b4
#define INT2PRI46	0xffd200b8
#define INT2PRI47	0xffd200bc
static struct intc_prio_reg prio_registers[] __initdata = ;
static struct intc_sense_reg sense_registers_irq8to15[] __initdata = ;
static DECLARE_INTC_DESC(intc_desc, "sh7757", vectors, groups,
mask_registers, prio_registers,
sense_registers_irq8to15);
static struct intc_vect vectors_irq0123[] __initdata = ;
static struct intc_vect vectors_irq4567[] __initdata = ;
static struct intc_sense_reg sense_registers[] __initdata = ;
static struct intc_mask_reg ack_registers[] __initdata = ;
static DECLARE_INTC_DESC_ACK(intc_desc_irq0123, "sh7757-irq0123",
vectors_irq0123, NULL, mask_registers,
prio_registers, sense_registers, ack_registers);
static DECLARE_INTC_DESC_ACK(intc_desc_irq4567, "sh7757-irq4567",
vectors_irq4567, NULL, mask_registers,
prio_registers, sense_registers, ack_registers);
static struct intc_vect vectors_irl0123[] __initdata = ;
static struct intc_vect vectors_irl4567[] __initdata = ;
static DECLARE_INTC_DESC(intc_desc_irl0123, "sh7757-irl0123", vectors_irl0123,
NULL, mask_registers, NULL, NULL);
static DECLARE_INTC_DESC(intc_desc_irl4567, "sh7757-irl4567", vectors_irl4567,
NULL, mask_registers, NULL, NULL);
#define INTC_ICR0	0xffd00000
#define INTC_INTMSK0	0xffd00044
#define INTC_INTMSK1	0xffd00048
#define INTC_INTMSK2	0xffd40080
#define INTC_INTMSKCLR1	0xffd00068
#define INTC_INTMSKCLR2	0xffd40084
void __init plat_irq_setup(void)
void __init plat_irq_setup_pins(int mode)
void __init plat_mem_setup(void)
