#define CTVMEM_H
#define CT_PTP_NUM	1
#define CT_PAGE_SIZE	4096
#define CT_PAGE_SHIFT	12
#define CT_PAGE_MASK	(~(PAGE_SIZE - 1))
#define CT_PAGE_ALIGN(addr)	ALIGN(addr, CT_PAGE_SIZE)
struct ct_vm_block ;
struct snd_pcm_substream;
struct ct_vm ;
int ct_vm_create(struct ct_vm **rvm, struct pci_dev *pci);
void ct_vm_destroy(struct ct_vm *vm);
