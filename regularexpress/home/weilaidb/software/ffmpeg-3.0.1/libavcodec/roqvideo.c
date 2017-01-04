static inline void block_copy(unsigned char *out, unsigned char *in,
int outstride, int instride, int sz)
void ff_apply_vector_2x2(RoqContext *ri, int x, int y, roq_cell *cell)
void ff_apply_vector_4x4(RoqContext *ri, int x, int y, roq_cell *cell)
static inline void apply_motion_generic(RoqContext *ri, int x, int y, int deltax,
int deltay, int sz)
void ff_apply_motion_4x4(RoqContext *ri, int x, int y,
int deltax, int deltay)
void ff_apply_motion_8x8(RoqContext *ri, int x, int y,
int deltax, int deltay)
