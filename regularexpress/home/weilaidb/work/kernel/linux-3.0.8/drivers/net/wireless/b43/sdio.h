#define B43_SDIO_H_
struct b43_wldev;
struct b43_sdio ;
int b43_sdio_request_irq(struct b43_wldev *dev,
void (*handler)(struct b43_wldev *dev));
void b43_sdio_free_irq(struct b43_wldev *dev);
int b43_sdio_init(void);
void b43_sdio_exit(void);
int b43_sdio_request_irq(struct b43_wldev *dev,
void (*handler)(struct b43_wldev *dev))
void b43_sdio_free_irq(struct b43_wldev *dev)
static inline int b43_sdio_init(void)
static inline void b43_sdio_exit(void)
