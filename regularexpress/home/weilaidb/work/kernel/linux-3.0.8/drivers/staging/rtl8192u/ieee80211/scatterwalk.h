#define _CRYPTO_SCATTERWALK_H
struct scatter_walk ;
static inline struct scatterlist *sg_next(struct scatterlist *sg)
static inline int scatterwalk_samebuf(struct scatter_walk *walk_in,
struct scatter_walk *walk_out,
void *src_p, void *dst_p)
void *scatterwalk_whichbuf(struct scatter_walk *walk, unsigned int nbytes, void *scratch);
void scatterwalk_start(struct scatter_walk *walk, struct scatterlist *sg);
int scatterwalk_copychunks(void *buf, struct scatter_walk *walk, size_t nbytes, int out);
void scatterwalk_map(struct scatter_walk *walk, int out);
void scatterwalk_done(struct scatter_walk *walk, int out, int more);
