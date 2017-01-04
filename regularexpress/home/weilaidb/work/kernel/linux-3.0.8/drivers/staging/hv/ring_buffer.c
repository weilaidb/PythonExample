#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define BYTES_AVAIL_TO_WRITE(r, w, z) ((w) >= (r)) ? ((z) - ((w) - (r))) : ((r) - (w))
static inline void
hv_get_ringbuffer_availbytes(struct hv_ring_buffer_info *rbi,
u32 *read, u32 *write)
static inline u32
hv_get_next_write_location(struct hv_ring_buffer_info *ring_info)
static inline void
hv_set_next_write_location(struct hv_ring_buffer_info *ring_info,
u32 next_write_location)
static inline u32
hv_get_next_read_location(struct hv_ring_buffer_info *ring_info)
static inline u32
hv_get_next_readlocation_withoffset(struct hv_ring_buffer_info *ring_info,
u32 offset)
static inline void
hv_set_next_read_location(struct hv_ring_buffer_info *ring_info,
u32 next_read_location)
static inline void *
hv_get_ring_buffer(struct hv_ring_buffer_info *ring_info)
static inline u32
hv_get_ring_buffersize(struct hv_ring_buffer_info *ring_info)
static inline u64
hv_get_ring_bufferindices(struct hv_ring_buffer_info *ring_info)
void hv_dump_ring_info(struct hv_ring_buffer_info *ring_info, char *prefix)
static u32 hv_copyfrom_ringbuffer(
struct hv_ring_buffer_info	*ring_info,
void				*dest,
u32				destlen,
u32				start_read_offset)
static u32 hv_copyto_ringbuffer(
struct hv_ring_buffer_info	*ring_info,
u32				start_write_offset,
void				*src,
u32				srclen)
void hv_ringbuffer_get_debuginfo(struct hv_ring_buffer_info *ring_info,
struct hv_ring_buffer_debug_info *debug_info)
u32 hv_get_ringbuffer_interrupt_mask(struct hv_ring_buffer_info *rbi)
int hv_ringbuffer_init(struct hv_ring_buffer_info *ring_info,
void *buffer, u32 buflen)
void hv_ringbuffer_cleanup(struct hv_ring_buffer_info *ring_info)
int hv_ringbuffer_write(struct hv_ring_buffer_info *outring_info,
struct scatterlist *sglist, u32 sgcount)
int hv_ringbuffer_peek(struct hv_ring_buffer_info *Inring_info,
void *Buffer, u32 buflen)
int hv_ringbuffer_read(struct hv_ring_buffer_info *inring_info, void *buffer,
u32 buflen, u32 offset)
