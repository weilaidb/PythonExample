#define __ASM_ARCH_DEVICES_H
extern void __init ks8695_add_device_wan(void);
extern void __init ks8695_add_device_lan(void);
extern void __init ks8695_add_device_hpna(void);
extern short ks8695_leds_cpu;
extern short ks8695_leds_timer;
extern void __init ks8695_init_leds(u8 cpu_led, u8 timer_led);
#define KS8695_MODE_PCI		0
#define KS8695_MODE_MINIPCI	1
#define KS8695_MODE_CARDBUS	2
struct ks8695_pci_cfg ;
extern __init void ks8695_init_pci(struct ks8695_pci_cfg *);
