#define _XV_MALLOC_INT_H_
#define XV_ALIGN_SHIFT 3
#define XV_ALIGN_SHIFT	2
#define XV_ALIGN	(1 << XV_ALIGN_SHIFT)
#define XV_ALIGN_MASK	(XV_ALIGN - 1)
#define XV_MIN_ALLOC_SIZE	32
#define XV_MAX_ALLOC_SIZE	(PAGE_SIZE - XV_ALIGN)
#if PAGE_SHIFT == 16
#define FL_DELTA_SHIFT 4
#define FL_DELTA_SHIFT (PAGE_SHIFT - 9)
#define FL_DELTA	(1 << FL_DELTA_SHIFT)
#define FL_DELTA_MASK	(FL_DELTA - 1)
#define NUM_FREE_LISTS	((XV_MAX_ALLOC_SIZE - XV_MIN_ALLOC_SIZE) \
/ FL_DELTA + 1)
#define MAX_FLI		DIV_ROUND_UP(NUM_FREE_LISTS, BITS_PER_LONG)
enum blockflags ;
#define FLAGS_MASK	XV_ALIGN_MASK
#define PREV_MASK	(~FLAGS_MASK)
struct freelist_entry ;
struct link_free ;
struct block_header ;
struct xv_pool ;
