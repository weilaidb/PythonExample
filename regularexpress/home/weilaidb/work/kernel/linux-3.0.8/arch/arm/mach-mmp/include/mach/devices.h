#define __MACH_DEVICE_H
#define MAX_RESOURCE_DMA	2
struct pxa_device_desc ;
#define PXA168_DEVICE(_name, _drv, _id, _irq, _start, _size, _dma...)	\
struct pxa_device_desc pxa168_device_##_name __initdata = ;
#define PXA910_DEVICE(_name, _drv, _id, _irq, _start, _size, _dma...)	\
struct pxa_device_desc pxa910_device_##_name __initdata = ;
#define MMP2_DEVICE(_name, _drv, _id, _irq, _start, _size, _dma...)	\
struct pxa_device_desc mmp2_device_##_name __initdata =
extern int pxa_register_device(struct pxa_device_desc *, void *, size_t);
