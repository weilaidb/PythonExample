#define PACK_H
#define PACK_SIGNATURE 0x5041434b
#define PACK_VERSION 2
#define pack_version_ok(v) ((v) == htonl(2) || (v) == htonl(3))
struct pack_header ;
#define PACK_IDX_SIGNATURE 0xff744f63
struct pack_idx_option ;
extern void reset_pack_idx_option(struct pack_idx_option *);
struct pack_idx_header ;
struct pack_idx_entry ;
struct progress;
typedef int (*verify_fn)(const unsigned char*, enum object_type, unsigned long, void*, int*);
extern const char *write_idx_file(const char *index_name, struct pack_idx_entry **objects, int nr_objects, const struct pack_idx_option *, const unsigned char *sha1);
extern int check_pack_crc(struct packed_git *p, struct pack_window **w_curs, off_t offset, off_t len, unsigned int nr);
extern int verify_pack_index(struct packed_git *);
extern int verify_pack(struct packed_git *, verify_fn fn, struct progress *, uint32_t);
extern off_t write_pack_header(struct sha1file *f, uint32_t);
extern void fixup_pack_header_footer(int, unsigned char *, const char *, uint32_t, unsigned char *, off_t);
extern char *index_pack_lockfile(int fd);
extern int encode_in_pack_object_header(enum object_type, uintmax_t, unsigned char *);
#define PH_ERROR_EOF		(-1)
#define PH_ERROR_PACK_SIGNATURE	(-2)
#define PH_ERROR_PROTOCOL	(-3)
extern int read_pack_header(int fd, struct pack_header *);
extern struct sha1file *create_tmp_packfile(char **pack_tmp_name);
extern void finish_tmp_packfile(struct strbuf *name_buffer, const char *pack_tmp_name, struct pack_idx_entry **written_list, uint32_t nr_written, struct pack_idx_option *pack_idx_opts, unsigned char sha1[]);
