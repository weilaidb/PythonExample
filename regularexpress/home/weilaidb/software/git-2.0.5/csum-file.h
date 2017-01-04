#define CSUM_FILE_H
struct progress;
struct sha1file ;
struct sha1file_checkpoint ;
extern void sha1file_checkpoint(struct sha1file *, struct sha1file_checkpoint *);
extern int sha1file_truncate(struct sha1file *, struct sha1file_checkpoint *);
#define CSUM_CLOSE	1
#define CSUM_FSYNC	2
extern struct sha1file *sha1fd(int fd, const char *name);
extern struct sha1file *sha1fd_check(const char *name);
extern struct sha1file *sha1fd_throughput(int fd, const char *name, struct progress *tp);
extern int sha1close(struct sha1file *, unsigned char *, unsigned int);
extern void sha1write(struct sha1file *, const void *, unsigned int);
extern void sha1flush(struct sha1file *f);
extern void crc32_begin(struct sha1file *);
extern uint32_t crc32_end(struct sha1file *);
