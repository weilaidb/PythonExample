#define __SCLP_RW_H__
struct mto  __attribute__((packed));
struct go  __attribute__((packed));
struct mdb_header  __attribute__((packed));
struct mdb  __attribute__((packed));
struct msg_buf  __attribute__((packed));
struct write_sccb  __attribute__((packed));
#define NR_EMPTY_MTO_PER_SCCB ((PAGE_SIZE - sizeof(struct sclp_buffer) - \
sizeof(struct write_sccb)) / sizeof(struct mto))
struct sclp_buffer ;
int sclp_rw_init(void);
struct sclp_buffer *sclp_make_buffer(void *, unsigned short, unsigned short);
void *sclp_unmake_buffer(struct sclp_buffer *);
int sclp_buffer_space(struct sclp_buffer *);
int sclp_write(struct sclp_buffer *buffer, const unsigned char *, int);
int sclp_emit_buffer(struct sclp_buffer *,void (*)(struct sclp_buffer *,int));
void sclp_set_columns(struct sclp_buffer *, unsigned short);
void sclp_set_htab(struct sclp_buffer *, unsigned short);
int sclp_chars_in_buffer(struct sclp_buffer *);
void sclp_console_pm_event(enum sclp_pm_event sclp_pm_event);
static inline void sclp_console_pm_event(enum sclp_pm_event sclp_pm_event)
