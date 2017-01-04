#define _RAR_REGISTER_H
#define	RAR_TYPE_VIDEO	0
#define	RAR_TYPE_AUDIO	1
#define	RAR_TYPE_IMAGE	2
#define	RAR_TYPE_DATA	3
struct rar_device;
#if defined(CONFIG_RAR_REGISTER)
int register_rar(int num,
int (*callback)(unsigned long data), unsigned long data);
void unregister_rar(int num);
int rar_get_address(int rar_index, dma_addr_t *start, dma_addr_t *end);
int rar_lock(int rar_index);
extern void unregister_rar(int num)
extern int rar_lock(int rar_index)
extern inline int register_rar(int num,
int (*callback)(unsigned long data), unsigned long data)
extern int rar_get_address(int rar_index, dma_addr_t *start, dma_addr_t *end)
