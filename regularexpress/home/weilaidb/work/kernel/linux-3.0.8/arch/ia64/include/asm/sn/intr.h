#define _ASM_IA64_SN_INTR_H
#define SGI_UART_VECTOR		0xe9
#define SGI_XPC_ACTIVATE	0x30
#define SGI_II_ERROR		0x31
#define SGI_XBOW_ERROR		0x32
#define SGI_PCIASIC_ERROR	0x33
#define SGI_ACPI_SCI_INT	0x34
#define SGI_TIOCA_ERROR		0x35
#define SGI_TIO_ERROR		0x36
#define SGI_TIOCX_ERROR		0x37
#define SGI_MMTIMER_VECTOR	0x38
#define SGI_XPC_NOTIFY		0xe7
#define IA64_SN2_FIRST_DEVICE_VECTOR	0x3c
#define IA64_SN2_LAST_DEVICE_VECTOR	0xe6
#define SN2_IRQ_RESERVED	0x1
#define SN2_IRQ_CONNECTED	0x2
#define SN2_IRQ_SHARED		0x4
struct sn_irq_info ;
extern void sn_send_IPI_phys(int, long, int, int);
extern u64 sn_intr_alloc(nasid_t, int,
struct sn_irq_info *,
int, nasid_t, int);
extern void sn_intr_free(nasid_t, int, struct sn_irq_info *);
extern struct sn_irq_info *sn_retarget_vector(struct sn_irq_info *, nasid_t, int);
extern void sn_set_err_irq_affinity(unsigned int);
extern struct list_head **sn_irq_lh;
#define CPU_VECTOR_TO_IRQ(cpuid,vector) (vector)
