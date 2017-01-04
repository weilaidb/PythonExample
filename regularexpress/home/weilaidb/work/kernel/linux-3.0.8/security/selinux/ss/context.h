#define _SS_CONTEXT_H_
struct context ;
static inline void mls_context_init(struct context *c)
static inline int mls_context_cpy(struct context *dst, struct context *src)
static inline int mls_context_cpy_low(struct context *dst, struct context *src)
static inline int mls_context_cmp(struct context *c1, struct context *c2)
static inline void mls_context_destroy(struct context *c)
static inline void context_init(struct context *c)
static inline int context_cpy(struct context *dst, struct context *src)
static inline void context_destroy(struct context *c)
static inline int context_cmp(struct context *c1, struct context *c2)
