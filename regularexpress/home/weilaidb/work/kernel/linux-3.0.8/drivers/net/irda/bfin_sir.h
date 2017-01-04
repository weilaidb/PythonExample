#undef DRIVER_NAME
struct dma_rx_buf ;
struct bfin_sir_port ;
struct bfin_sir_port_res ;
struct bfin_sir_self ;
#define DRIVER_NAME "bfin_sir"
#define port_membase(port)     (((struct bfin_sir_port *)(port))->membase)
#define get_lsr_cache(port)    (((struct bfin_sir_port *)(port))->lsr)
#define put_lsr_cache(port, v) (((struct bfin_sir_port *)(port))->lsr = (v))
static const unsigned short per[][4] = ;
