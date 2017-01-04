#define ishardspace(c)      ((c) == ' ')
unsigned short xs, ys, xe, ye;
struct vc_data *spk_sel_cons;
static int sel_start = -1;
static int sel_end;
static int sel_buffer_lth;
static char *sel_buffer;
static unsigned char sel_pos(int n)
void speakup_clear_selection(void)
static int atedge(const int p, int size_row)
static unsigned short limit(const unsigned short v, const unsigned short u)
int speakup_set_selection(struct tty_struct *tty)
int speakup_paste_selection(struct tty_struct *tty)
