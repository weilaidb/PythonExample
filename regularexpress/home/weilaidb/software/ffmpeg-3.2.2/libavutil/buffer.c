*av_buffer_create(void *opaque, uint8_t *data),
void *opaque, int flags)
av_buffer_default_free
*av_buffer_alloc
*av_buffer_allocz
*av_buffer_ref
buffer_replace
av_buffer_unref
av_buffer_is_writable
*av_buffer_get_opaque
av_buffer_get_ref_count
av_buffer_make_writable
av_buffer_realloc
*av_buffer_pool_init2(void *opaque, int size),
void (*pool_free)(void *opaque))
*av_buffer_pool_init(int size))
buffer_pool_free
av_buffer_pool_uninit
#if USE_ATOMICS
*get_pool
add_to_pool
pool_release_buffer
*pool_alloc_buffer
*av_buffer_pool_get
