#define PATH_LEN_V1 256
typedef __u32 time32_t;
struct cow_header_v1  __attribute__((packed));
#define PATH_LEN_V3 4096
#define PATH_LEN_V2 PATH_LEN_V3
struct cow_header_v2  __attribute__((packed));
struct cow_header_v3  __attribute__((packed));
struct cow_header_v3_broken ;
#define COW_BITMAP 0
union cow_header ;
#define COW_MAGIC 0x4f4f4f4d
#define COW_VERSION 3
#define DIV_ROUND(x, len) (((x) + (len) - 1) / (len))
#define ROUND_UP(x, align) DIV_ROUND(x, align) * (align)
void cow_sizes(int version, __u64 size, int sectorsize, int align,
int bitmap_offset, unsigned long *bitmap_len_out,
int *data_offset_out)
static int absolutize(char *to, int size, char *from)
int write_cow_header(char *cow_file, int fd, char *backing_file,
int sectorsize, int alignment, unsigned long long *size)
int file_reader(__u64 offset, char *buf, int len, void *arg)
int read_cow_header(int (*reader)(__u64, char *, int, void *), void *arg,
__u32 *version_out, char **backing_file_out,
time_t *mtime_out, unsigned long long *size_out,
int *sectorsize_out, __u32 *align_out,
int *bitmap_offset_out)
int init_cow_file(int fd, char *cow_file, char *backing_file, int sectorsize,
int alignment, int *bitmap_offset_out,
unsigned long *bitmap_len_out, int *data_offset_out)
