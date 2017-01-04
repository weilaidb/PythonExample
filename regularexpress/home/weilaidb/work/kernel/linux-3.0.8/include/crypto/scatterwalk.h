#define _CRYPTO_SCATTERWALK_H
static inline enum km_type crypto_kmap_type(int out)
static inline void *crypto_kmap(struct page *page, int out)
static inline void crypto_kunmap(void *vaddr, int out)
static inline void crypto_yield(u32 flags)
static inline void scatterwalk_sg_chain(struct scatterlist *sg1, int num,
struct scatterlist *sg2)
static inline struct scatterlist *scatterwalk_sg_next(struct scatterlist *sg)
static inline void scatterwalk_crypto_chain(struct scatterlist *head,
struct scatterlist *sg,
int chain, int num)
static inline unsigned long scatterwalk_samebuf(struct scatter_walk *walk_in,
struct scatter_walk *walk_out)
static inline unsigned int scatterwalk_pagelen(struct scatter_walk *walk)
static inline unsigned int scatterwalk_clamp(struct scatter_walk *walk,
unsigned int nbytes)
static inline void scatterwalk_advance(struct scatter_walk *walk,
unsigned int nbytes)
static inline unsigned int scatterwalk_aligned(struct scatter_walk *walk,
unsigned int alignmask)
static inline struct page *scatterwalk_page(struct scatter_walk *walk)
static inline void scatterwalk_unmap(void *vaddr, int out)
void scatterwalk_start(struct scatter_walk *walk, struct scatterlist *sg);
void scatterwalk_copychunks(void *buf, struct scatter_walk *walk,
size_t nbytes, int out);
void *scatterwalk_map(struct scatter_walk *walk, int out);
void scatterwalk_done(struct scatter_walk *walk, int out, int more);
void scatterwalk_map_and_copy(void *buf, struct scatterlist *sg,
unsigned int start, unsigned int nbytes, int out);
