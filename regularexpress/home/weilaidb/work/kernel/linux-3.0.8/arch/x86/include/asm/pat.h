#define _ASM_X86_PAT_H
extern int pat_enabled;
static const int pat_enabled;
extern void pat_init(void);
extern int reserve_memtype(u64 start, u64 end,
unsigned long req_type, unsigned long *ret_type);
extern int free_memtype(u64 start, u64 end);
extern int kernel_map_sync_memtype(u64 base, unsigned long size,
unsigned long flag);
int io_reserve_memtype(resource_size_t start, resource_size_t end,
unsigned long *type);
void io_free_memtype(resource_size_t start, resource_size_t end);
