void cvmx_pko_initialize_global(void)
int cvmx_pko_initialize_local(void)
void cvmx_pko_enable(void)
void cvmx_pko_disable(void)
static void __cvmx_pko_reset(void)
void cvmx_pko_shutdown(void)
cvmx_pko_status_t cvmx_pko_config_port(uint64_t port, uint64_t base_queue,
uint64_t num_queues,
const uint64_t priority[])
void cvmx_pko_show_queue_map()
int cvmx_pko_rate_limit_packets(int port, int packets_s, int burst)
int cvmx_pko_rate_limit_bits(int port, uint64_t bits_s, int burst)
