#define __UM_SLIP_COMMON_H
#define BUF_SIZE 1500
#define ENC_BUF_SIZE (2 * BUF_SIZE + 2)
#define SLIP_END             0300
#define SLIP_ESC             0333
#define SLIP_ESC_END         0334
#define SLIP_ESC_ESC         0335
static inline int slip_unesc(unsigned char c, unsigned char *buf, int *pos,
int *esc)
static inline int slip_esc(unsigned char *s, unsigned char *d, int len)
struct slip_proto ;
static inline void slip_proto_init(struct slip_proto * slip)
extern int slip_proto_read(int fd, void *buf, int len,
struct slip_proto *slip);
extern int slip_proto_write(int fd, void *buf, int len,
struct slip_proto *slip);
