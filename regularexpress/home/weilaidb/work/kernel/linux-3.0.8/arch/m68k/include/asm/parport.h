#define _ASM_M68K_PARPORT_H 1
#define insl(port,buf,len)   isa_insb(port,buf,(len)<<2)
#define outsl(port,buf,len)  isa_outsb(port,buf,(len)<<2)
static int __devinit parport_pc_find_isa_ports (int autoirq, int autodma);
static int __devinit parport_pc_find_nonpci_ports (int autoirq, int autodma)
