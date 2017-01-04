#define _POWERPC_SYSDEV_MSI_BITMAP_H
struct msi_bitmap ;
int msi_bitmap_alloc_hwirqs(struct msi_bitmap *bmp, int num);
void msi_bitmap_free_hwirqs(struct msi_bitmap *bmp, unsigned int offset,
unsigned int num);
void msi_bitmap_reserve_hwirq(struct msi_bitmap *bmp, unsigned int hwirq);
int msi_bitmap_reserve_dt_hwirqs(struct msi_bitmap *bmp);
int msi_bitmap_alloc(struct msi_bitmap *bmp, unsigned int irq_count,
struct device_node *of_node);
void msi_bitmap_free(struct msi_bitmap *bmp);
