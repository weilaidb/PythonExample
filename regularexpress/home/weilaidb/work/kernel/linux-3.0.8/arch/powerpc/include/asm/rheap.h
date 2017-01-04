#define __ASM_PPC_RHEAP_H__
typedef struct _rh_block  rh_block_t;
typedef struct _rh_info  rh_info_t;
#define RHIF_STATIC_INFO	0x1
#define RHIF_STATIC_BLOCK	0x2
typedef struct _rh_stats  rh_stats_t;
#define RHGS_FREE	0
#define RHGS_TAKEN	1
extern rh_info_t *rh_create(unsigned int alignment);
extern void rh_destroy(rh_info_t * info);
extern void rh_init(rh_info_t * info, unsigned int alignment, int max_blocks,
rh_block_t * block);
extern int rh_attach_region(rh_info_t * info, unsigned long start, int size);
extern unsigned long rh_detach_region(rh_info_t * info, unsigned long start, int size);
extern unsigned long rh_alloc_align(rh_info_t * info, int size, int alignment,
const char *owner);
extern unsigned long rh_alloc(rh_info_t * info, int size, const char *owner);
extern unsigned long rh_alloc_fixed(rh_info_t * info, unsigned long start, int size,
const char *owner);
extern int rh_free(rh_info_t * info, unsigned long start);
extern int rh_get_stats(rh_info_t * info, int what, int max_stats,
rh_stats_t * stats);
extern void rh_dump(rh_info_t * info);
extern int rh_set_owner(rh_info_t * info, unsigned long start, const char *owner);
