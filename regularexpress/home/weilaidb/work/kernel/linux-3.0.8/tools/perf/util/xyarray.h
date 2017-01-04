#define _PERF_XYARRAY_H_ 1
struct xyarray ;
struct xyarray *xyarray__new(int xlen, int ylen, size_t entry_size);
void xyarray__delete(struct xyarray *xy);
static inline void *xyarray__entry(struct xyarray *xy, int x, int y)
