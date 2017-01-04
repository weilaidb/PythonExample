#define _CPPI_DMA_H_
struct cppi_tx_stateram ;
struct cppi_rx_stateram ;
#define CPPI_SOP_SET	((u32)(1 << 31))
#define CPPI_EOP_SET	((u32)(1 << 30))
#define CPPI_OWN_SET	((u32)(1 << 29))
#define CPPI_EOQ_MASK	((u32)(1 << 28))
#define CPPI_ZERO_SET	((u32)(1 << 23))
#define CPPI_RXABT_MASK	((u32)(1 << 19))
#define CPPI_RECV_PKTLEN_MASK 0xFFFF
#define CPPI_BUFFER_LEN_MASK 0xFFFF
#define CPPI_TEAR_READY ((u32)(1 << 31))
#define	CPPI_DESCRIPTOR_ALIGN	16
struct cppi_descriptor  __attribute__ ((aligned(CPPI_DESCRIPTOR_ALIGN)));
struct cppi;
struct cppi_channel ;
struct cppi ;
extern irqreturn_t cppi_interrupt(int, void *);
