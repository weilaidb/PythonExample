#define __SATA_PROMISE_H__
enum pdc_packet_bits ;
static inline unsigned int pdc_pkt_header(struct ata_taskfile *tf,
dma_addr_t sg_table,
unsigned int devno, u8 *buf)
static inline unsigned int pdc_pkt_footer(struct ata_taskfile *tf, u8 *buf,
unsigned int i)
static inline unsigned int pdc_prep_lba28(struct ata_taskfile *tf, u8 *buf, unsigned int i)
static inline unsigned int pdc_prep_lba48(struct ata_taskfile *tf, u8 *buf, unsigned int i)
