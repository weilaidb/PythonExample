struct pci_controller *pci_vga_hose;
static struct resource alpha_vga = ;
static struct pci_controller * __init
default_vga_hose_select(struct pci_controller *h1, struct pci_controller *h2)
void __init
locate_and_init_vga(void *(*sel_func)(void *, void *))
void __init
find_console_vga_hose(void)
