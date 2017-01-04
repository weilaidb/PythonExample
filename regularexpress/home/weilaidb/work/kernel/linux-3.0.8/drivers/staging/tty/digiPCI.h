#define	PCIMAX  32
#define	PCI_VENDOR_DIGI		0x114F
#define	PCI_DEVICE_EPC		0x0002
#define	PCI_DEVICE_RIGHTSWITCH 0x0003
#define	PCI_DEVICE_XEM		0x0004
#define	PCI_DEVICE_XR		0x0005
#define	PCI_DEVICE_CX		0x0006
#define	PCI_DEVICE_XRJ		0x0009
#define	PCI_DEVICE_EPCJ		0x000a
#define PCI_BIOS_SIZE		0x00020000
#define PCI_RAM_SIZE		0x00400000
#define PCI_MEM_SIZE		0x00200000
#define PCI_IO_OFFSET 		0x00200000
#define MEMOUTB(basemem, pnum, setmemval)  *(caddr_t)((basemem) + ( PCI_IO_OFFSET | pnum << 4 | pnum )) = (setmemval)
#define MEMINB(basemem, pnum)  *(caddr_t)((basemem) + (PCI_IO_OFFSET | pnum << 4 | pnum ))
