void cvm_oct_poll_controller(struct net_device *dev);
void cvm_oct_rx_initialize(void);
void cvm_oct_rx_shutdown(void);
static inline void cvm_oct_rx_refill_pool(int fill_threshold)
