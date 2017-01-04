#define MIDIBUF_H
struct MidiBuffer ;
extern int line6_midibuf_bytes_used(struct MidiBuffer *mb);
extern int line6_midibuf_bytes_free(struct MidiBuffer *mb);
extern void line6_midibuf_destroy(struct MidiBuffer *mb);
extern int line6_midibuf_ignore(struct MidiBuffer *mb, int length);
extern int line6_midibuf_init(struct MidiBuffer *mb, int size, int split);
extern int line6_midibuf_read(struct MidiBuffer *mb, unsigned char *data,
int length);
extern void line6_midibuf_reset(struct MidiBuffer *mb);
extern int line6_midibuf_skip_message(struct MidiBuffer *mb,
unsigned short mask);
extern void line6_midibuf_status(struct MidiBuffer *mb);
extern int line6_midibuf_write(struct MidiBuffer *mb, unsigned char *data,
int length);
