enum km_type crypto_km_types[] = ;
void *scatterwalk_whichbuf(struct scatter_walk *walk, unsigned int nbytes, void *scratch)
static void memcpy_dir(void *buf, void *sgdata, size_t nbytes, int out)
void scatterwalk_start(struct scatter_walk *walk, struct scatterlist *sg)
void scatterwalk_map(struct scatter_walk *walk, int out)
static void scatterwalk_pagedone(struct scatter_walk *walk, int out,
unsigned int more)
void scatterwalk_done(struct scatter_walk *walk, int out, int more)
int scatterwalk_copychunks(void *buf, struct scatter_walk *walk,
size_t nbytes, int out)
