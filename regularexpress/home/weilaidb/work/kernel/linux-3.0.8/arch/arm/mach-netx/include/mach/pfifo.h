#define ASM_ARCH_PFIFO_H
static inline int pfifo_push(int no, unsigned int pointer)
static inline unsigned int pfifo_pop(int no)
static inline int pfifo_fill_level(int no)
static inline int pfifo_full(int no)
static inline int pfifo_empty(int no)
int pfifo_request(unsigned int pfifo_mask);
void pfifo_free(unsigned int pfifo_mask);
