static inline void memcpy_dir(void *buf, void *sgdata, size_t nbytes, int out)
void scatterwalk_start(struct scatter_walk *walk, struct scatterlist *sg)
EXPORT_SYMBOL_GPL(scatterwalk_start);
void *scatterwalk_map(struct scatter_walk *walk, int out)
EXPORT_SYMBOL_GPL(scatterwalk_map);
static void scatterwalk_pagedone(struct scatter_walk *walk, int out,
unsigned int more)
void scatterwalk_done(struct scatter_walk *walk, int out, int more)
EXPORT_SYMBOL_GPL(scatterwalk_done);
void scatterwalk_copychunks(void *buf, struct scatter_walk *walk,
size_t nbytes, int out)
EXPORT_SYMBOL_GPL(scatterwalk_copychunks);
void scatterwalk_map_and_copy(void *buf, struct scatterlist *sg,
unsigned int start, unsigned int nbytes, int out)
EXPORT_SYMBOL_GPL(scatterwalk_map_and_copy);
