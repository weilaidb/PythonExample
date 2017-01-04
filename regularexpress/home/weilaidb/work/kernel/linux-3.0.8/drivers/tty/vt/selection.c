#define isspace(c)	((c) == ' ')
extern void poke_blanked_console(void);
struct vc_data *sel_cons;
static int use_unicode;
static volatile int sel_start = -1;
static int sel_end;
static int sel_buffer_lth;
static char *sel_buffer;
static inline void highlight(const int s, const int e)
static inline void highlight_pointer(const int where)
static u16
sel_pos(int n)
void
clear_selection(void)
static u32 inwordLut[8]=;
static inline int inword(const u16 c)
int sel_loadlut(char __user *p)
static inline int atedge(const int p, int size_row)
static inline unsigned short limit(const unsigned short v, const unsigned short u)
static int store_utf8(u16 c, char *p)
int set_selection(const struct tiocl_selection __user *sel, struct tty_struct *tty)
int paste_selection(struct tty_struct *tty)
