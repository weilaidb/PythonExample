static const size_t	pool_max[HCD_BUFFER_POOLS] = ;
int hcd_buffer_create(struct usb_hcd *hcd)
void hcd_buffer_destroy(struct usb_hcd *hcd)
void *hcd_buffer_alloc(
struct usb_bus		*bus,
size_t			size,
gfp_t			mem_flags,
dma_addr_t		*dma
)
void hcd_buffer_free(
struct usb_bus		*bus,
size_t			size,
void			*addr,
dma_addr_t		dma
)
