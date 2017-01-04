static int zip_date;
static int zip_time;
static unsigned char *zip_dir;
static unsigned int zip_dir_size;
static unsigned int zip_offset;
static unsigned int zip_dir_offset;
static unsigned int zip_dir_entries;
#define ZIP_DIRECTORY_MIN_SIZE	(1024 * 1024)
#define ZIP_STREAM	(1 <<  3)
#define ZIP_UTF8	(1 << 11)
struct zip_local_header ;
struct zip_data_desc ;
struct zip_dir_header ;
struct zip_dir_trailer ;
struct zip_extra_mtime ;
#define ZIP_LOCAL_HEADER_SIZE	offsetof(struct zip_local_header, _end)
#define ZIP_DATA_DESC_SIZE	offsetof(struct zip_data_desc, _end)
#define ZIP_DIR_HEADER_SIZE	offsetof(struct zip_dir_header, _end)
#define ZIP_DIR_TRAILER_SIZE	offsetof(struct zip_dir_trailer, _end)
#define ZIP_EXTRA_MTIME_SIZE	offsetof(struct zip_extra_mtime, _end)
#define ZIP_EXTRA_MTIME_PAYLOAD_SIZE \
(ZIP_EXTRA_MTIME_SIZE - offsetof(struct zip_extra_mtime, flags))
static void copy_le16(unsigned char *dest, unsigned int n)
static void copy_le32(unsigned char *dest, unsigned int n)
static void *zlib_deflate_raw(void *data, unsigned long size,
int compression_level,
unsigned long *compressed_size)
static void write_zip_data_desc(unsigned long size,
unsigned long compressed_size,
unsigned long crc)
static void set_zip_dir_data_desc(struct zip_dir_header *header,
unsigned long size,
unsigned long compressed_size,
unsigned long crc)
static void set_zip_header_data_desc(struct zip_local_header *header,
unsigned long size,
unsigned long compressed_size,
unsigned long crc)
static int has_only_ascii(const char *s)
#define STREAM_BUFFER_SIZE (1024 * 16)
static int write_zip_entry(struct archiver_args *args,
const unsigned char *sha1,
const char *path, size_t pathlen,
unsigned int mode)
static void write_zip_trailer(const unsigned char *sha1)
static void dos_time(time_t *time, int *dos_date, int *dos_time)
static int write_zip_archive(const struct archiver *ar,
struct archiver_args *args)
static struct archiver zip_archiver = ;
void init_zip_archiver(void)
