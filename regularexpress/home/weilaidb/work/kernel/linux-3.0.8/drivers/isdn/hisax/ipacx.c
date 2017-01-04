#define DBUSY_TIMER_VALUE 80
#define TIMER3_VALUE      7000
#define MAX_DFRAME_LEN_L1 300
#define B_FIFO_SIZE       64
#define D_FIFO_SIZE       32
#define _MASK_IMASK     0x2E
#define _MASKB_IMASK    0x0B
#define _MASKD_IMASK    0x03
static void ph_command(struct IsdnCardState *cs, unsigned int command);
static inline void cic_int(struct IsdnCardState *cs);
static void dch_l2l1(struct PStack *st, int pr, void *arg);
static void dbusy_timer_handler(struct IsdnCardState *cs);
static void dch_empty_fifo(struct IsdnCardState *cs, int count);
static void dch_fill_fifo(struct IsdnCardState *cs);
static inline void dch_int(struct IsdnCardState *cs);
static void dch_setstack(struct PStack *st, struct IsdnCardState *cs);
static void dch_init(struct IsdnCardState *cs);
static void bch_l2l1(struct PStack *st, int pr, void *arg);
static void bch_empty_fifo(struct BCState *bcs, int count);
static void bch_fill_fifo(struct BCState *bcs);
static void bch_int(struct IsdnCardState *cs, u_char hscx);
static void bch_mode(struct BCState *bcs, int mode, int bc);
static void bch_close_state(struct BCState *bcs);
static int bch_open_state(struct IsdnCardState *cs, struct BCState *bcs);
static int bch_setstack(struct PStack *st, struct BCState *bcs);
static void bch_init(struct IsdnCardState *cs, int hscx);
static void clear_pending_ints(struct IsdnCardState *cs);
static void
ph_command(struct IsdnCardState *cs, unsigned int command)
static inline void
cic_int(struct IsdnCardState *cs)
static void
dch_l2l1(struct PStack *st, int pr, void *arg)
static void
dbusy_timer_handler(struct IsdnCardState *cs)
static void
dch_empty_fifo(struct IsdnCardState *cs, int count)
static void
dch_fill_fifo(struct IsdnCardState *cs)
static inline void
dch_int(struct IsdnCardState *cs)
static void
dch_setstack(struct PStack *st, struct IsdnCardState *cs)
static void
dch_init(struct IsdnCardState *cs)
static void
bch_l2l1(struct PStack *st, int pr, void *arg)
static void
bch_empty_fifo(struct BCState *bcs, int count)
static void
bch_fill_fifo(struct BCState *bcs)
static void
bch_int(struct IsdnCardState *cs, u_char hscx)
static void
bch_mode(struct BCState *bcs, int mode, int bc)
static void
bch_close_state(struct BCState *bcs)
static int
bch_open_state(struct IsdnCardState *cs, struct BCState *bcs)
static int
bch_setstack(struct PStack *st, struct BCState *bcs)
static void
bch_init(struct IsdnCardState *cs, int hscx)
void
interrupt_ipacx(struct IsdnCardState *cs)
static void
clear_pending_ints(struct IsdnCardState *cs)
void
init_ipacx(struct IsdnCardState *cs, int part)
