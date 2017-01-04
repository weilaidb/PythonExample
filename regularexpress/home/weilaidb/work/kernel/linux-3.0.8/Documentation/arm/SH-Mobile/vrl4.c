#define _BSD_SOURCE
struct hdr ;
#define DECLARE_HDR(h)					\
struct hdr (h) =
#define ALIGN_BITS	9
#define ALIGN		(1 << ALIGN_BITS)
#define START_BASE	0xe55b0000
#define	MAX_BOOT_PROG_LEN (16 * 512)
#define ROUND_UP(x)	((x + ALIGN - 1) & ~(ALIGN - 1))
ssize_t do_read(int fd, void *buf, size_t count)
ssize_t do_write(int fd, const void *buf, size_t count)
ssize_t write_zero(int fd, size_t len)
int main(void)
