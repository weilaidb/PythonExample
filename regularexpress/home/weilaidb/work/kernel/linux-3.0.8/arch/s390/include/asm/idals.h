#define _S390_IDALS_H
#define IDA_SIZE_LOG 12
#define IDA_SIZE_LOG 11
#define IDA_BLOCK_SIZE (1L<<IDA_SIZE_LOG)
static inline int
idal_is_needed(void *vaddr, unsigned int length)
static inline unsigned int idal_nr_words(void *vaddr, unsigned int length)
static inline unsigned long *idal_create_words(unsigned long *idaws,
void *vaddr, unsigned int length)
static inline int
set_normalized_cda(struct ccw1 * ccw, void *vaddr)
static inline void
clear_normalized_cda(struct ccw1 * ccw)
struct idal_buffer ;
static inline struct idal_buffer *
idal_buffer_alloc(size_t size, int page_order)
static inline void
idal_buffer_free(struct idal_buffer *ib)
static inline int
__idal_buffer_is_needed(struct idal_buffer *ib)
static inline void
idal_buffer_set_cda(struct idal_buffer *ib, struct ccw1 *ccw)
static inline size_t
idal_buffer_to_user(struct idal_buffer *ib, void __user *to, size_t count)
static inline size_t
idal_buffer_from_user(struct idal_buffer *ib, const void __user *from, size_t count)
