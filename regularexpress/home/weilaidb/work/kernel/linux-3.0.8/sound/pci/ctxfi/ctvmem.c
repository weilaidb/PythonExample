#define CT_PTES_PER_PAGE (CT_PAGE_SIZE / sizeof(void *))
#define CT_ADDRS_PER_PAGE (CT_PTES_PER_PAGE * CT_PAGE_SIZE)
static struct ct_vm_block *
get_vm_block(struct ct_vm *vm, unsigned int size)
static void put_vm_block(struct ct_vm *vm, struct ct_vm_block *block)
static struct ct_vm_block *
ct_vm_map(struct ct_vm *vm, struct snd_pcm_substream *substream, int size)
static void ct_vm_unmap(struct ct_vm *vm, struct ct_vm_block *block)
static dma_addr_t
ct_get_ptp_phys(struct ct_vm *vm, int index)
int ct_vm_create(struct ct_vm **rvm, struct pci_dev *pci)
void ct_vm_destroy(struct ct_vm *vm)
