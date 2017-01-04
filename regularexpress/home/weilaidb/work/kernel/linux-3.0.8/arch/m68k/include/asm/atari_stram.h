#define _M68K_ATARI_STRAM_H
void *atari_stram_alloc(long size, const char *owner);
void atari_stram_free(void *);
void atari_stram_init(void);
void atari_stram_reserve_pages(void *start_mem);
void atari_stram_mem_init_hook (void);
