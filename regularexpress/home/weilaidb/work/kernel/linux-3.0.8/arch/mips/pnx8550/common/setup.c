extern void __init board_setup(void);
extern void pnx8550_machine_restart(char *);
extern void pnx8550_machine_halt(void);
extern struct resource ioport_resource;
extern struct resource iomem_resource;
extern char *prom_getcmdline(void);
struct resource standard_io_resources[] = ;
#define STANDARD_IO_RESOURCES ARRAY_SIZE(standard_io_resources)
extern struct resource pci_io_resource;
extern struct resource pci_mem_resource;
unsigned long get_system_mem_size(void)
int pnx8550_console_port = -1;
void __init plat_mem_setup(void)
