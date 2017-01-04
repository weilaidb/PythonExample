u_char
NETjet_ReadIC(struct IsdnCardState *cs, u_char offset)
void
NETjet_WriteIC(struct IsdnCardState *cs, u_char offset, u_char value)
void
NETjet_ReadICfifo(struct IsdnCardState *cs, u_char *data, int size)
void
NETjet_WriteICfifo(struct IsdnCardState *cs, u_char *data, int size)
static void fill_mem(struct BCState *bcs, u_int *pos, u_int cnt, int chan, u_char fill)
static void
mode_tiger(struct BCState *bcs, int mode, int bc)
static void printframe(struct IsdnCardState *cs, u_char *buf, int count, char *s)
#define MAKE_RAW_BYTE for (j=0; j<8; j++)
static int make_raw_data(struct BCState *bcs)
#define MAKE_RAW_BYTE_56K for (j=0; j<8; j++)
static int make_raw_data_56k(struct BCState *bcs)
static void got_frame(struct BCState *bcs, int count)
static void read_raw(struct BCState *bcs, u_int *buf, int cnt)
void read_tiger(struct IsdnCardState *cs)
static void write_raw(struct BCState *bcs, u_int *buf, int cnt);
void netjet_fill_dma(struct BCState *bcs)
static void write_raw(struct BCState *bcs, u_int *buf, int cnt)
void write_tiger(struct IsdnCardState *cs)
static void
tiger_l2l1(struct PStack *st, int pr, void *arg)
static void
close_tigerstate(struct BCState *bcs)
static int
open_tigerstate(struct IsdnCardState *cs, struct BCState *bcs)
static int
setstack_tiger(struct PStack *st, struct BCState *bcs)
void
inittiger(struct IsdnCardState *cs)
static void
releasetiger(struct IsdnCardState *cs)
void
release_io_netjet(struct IsdnCardState *cs)
