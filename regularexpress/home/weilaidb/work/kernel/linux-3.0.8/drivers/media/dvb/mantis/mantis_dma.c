#define RISC_WRITE		(0x01 << 28)
#define RISC_JUMP		(0x07 << 28)
#define RISC_IRQ		(0x01 << 24)
#define RISC_STATUS(status)	((((~status) & 0x0f) << 20) | ((status & 0x0f) << 16))
#define RISC_FLUSH()		(mantis->risc_pos = 0)
#define RISC_INSTR(opcode)	(mantis->risc_cpu[mantis->risc_pos++] = cpu_to_le32(opcode))
#define MANTIS_BUF_SIZE		(64 * 1024)
#define MANTIS_BLOCK_BYTES	(MANTIS_BUF_SIZE >> 4)
#define MANTIS_BLOCK_COUNT	(1 << 4)
#define MANTIS_RISC_SIZE	PAGE_SIZE
int mantis_dma_exit(struct mantis_pci *mantis)
EXPORT_SYMBOL_GPL(mantis_dma_exit);
static inline int mantis_alloc_buffers(struct mantis_pci *mantis)
static inline int mantis_calc_lines(struct mantis_pci *mantis)
int mantis_dma_init(struct mantis_pci *mantis)
EXPORT_SYMBOL_GPL(mantis_dma_init);
static inline void mantis_risc_program(struct mantis_pci *mantis)
void mantis_dma_start(struct mantis_pci *mantis)
void mantis_dma_stop(struct mantis_pci *mantis)
void mantis_dma_xfer(unsigned long data)