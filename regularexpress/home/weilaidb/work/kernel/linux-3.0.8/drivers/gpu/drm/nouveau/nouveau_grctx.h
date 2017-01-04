#define __NOUVEAU_GRCTX_H__
struct nouveau_grctx ;
static inline void
cp_out(struct nouveau_grctx *ctx, uint32_t inst)
static inline void
cp_lsr(struct nouveau_grctx *ctx, uint32_t val)
static inline void
cp_ctx(struct nouveau_grctx *ctx, uint32_t reg, uint32_t length)
static inline void
cp_name(struct nouveau_grctx *ctx, int name)
static inline void
_cp_bra(struct nouveau_grctx *ctx, u32 mod, int flag, int state, int name)
#define cp_bra(c, f, s, n) _cp_bra((c), 0, CP_FLAG_##f, CP_FLAG_##f##_##s, n)
#define cp_cal(c, f, s, n) _cp_bra((c), 1, CP_FLAG_##f, CP_FLAG_##f##_##s, n)
#define cp_ret(c, f, s) _cp_bra((c), 2, CP_FLAG_##f, CP_FLAG_##f##_##s, 0)
static inline void
_cp_wait(struct nouveau_grctx *ctx, int flag, int state)
#define cp_wait(c, f, s) _cp_wait((c), CP_FLAG_##f, CP_FLAG_##f##_##s)
static inline void
_cp_set(struct nouveau_grctx *ctx, int flag, int state)
#define cp_set(c, f, s) _cp_set((c), CP_FLAG_##f, CP_FLAG_##f##_##s)
static inline void
cp_pos(struct nouveau_grctx *ctx, int offset)
static inline void
gr_def(struct nouveau_grctx *ctx, uint32_t reg, uint32_t val)
