#undef DEBUG
void of_parse_dma_window(struct device_node *dn, const void *dma_window_prop,
unsigned long *busno, unsigned long *phys, unsigned long *size)
