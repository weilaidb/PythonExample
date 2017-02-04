#define AVUTIL_BUFFER_H
typedef struct AVBuffer AVBuffer;
typedef struct AVBufferRef  AVBufferRef;
*av_buffer_alloc;
*av_buffer_allocz;
#define AV_BUFFER_FLAG_READONLY (1 << 0)
*av_buffer_create(void *opaque, uint8_t *data),
void *opaque, int flags);
av_buffer_default_free;
*av_buffer_ref;
av_buffer_unref;
av_buffer_is_writable;
*av_buffer_get_opaque;
av_buffer_get_ref_count;
av_buffer_make_writable;
av_buffer_realloc;
typedef struct AVBufferPool AVBufferPool;
*av_buffer_pool_init(int size));
*av_buffer_pool_init2(void *opaque, int size),
void (*pool_free)(void *opaque));
av_buffer_pool_uninit;
*av_buffer_pool_get;
