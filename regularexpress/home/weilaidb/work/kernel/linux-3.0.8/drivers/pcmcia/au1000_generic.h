#define __ASM_AU1000_PCMCIA_H
#define AU1000_PCMCIA_POLL_PERIOD    (2*HZ)
#define AU1000_PCMCIA_IO_SPEED       (255)
#define AU1000_PCMCIA_MEM_SPEED      (300)
#define AU1X_SOCK0_IO        0xF00000000ULL
#define AU1X_SOCK0_PHYS_ATTR 0xF40000000ULL
#define AU1X_SOCK0_PHYS_MEM  0xF80000000ULL
#if defined(CONFIG_MIPS_PB1000)
#define AU1X_SOCK1_IO        0xF08000000ULL
#define AU1X_SOCK1_PHYS_ATTR 0xF48000000ULL
#define AU1X_SOCK1_PHYS_MEM  0xF88000000ULL
struct pcmcia_state ;
struct pcmcia_configure ;
struct pcmcia_irqs ;
struct au1000_pcmcia_socket ;
struct pcmcia_low_level ;
extern int au1x_board_init(struct device *dev);
