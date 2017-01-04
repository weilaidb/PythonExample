#define MAX_DELAY msecs_to_jiffies(500)
#define MINECHOCHAR SPACE
MODULE_AUTHOR("Kirk Reiser <kirk@braille.uwo.ca>");
MODULE_AUTHOR("Daniel Drake <dsd@gentoo.org>");
MODULE_DESCRIPTION("Speakup console speech");
MODULE_LICENSE("GPL");
MODULE_VERSION(SPEAKUP_VERSION);
char *synth_name;
module_param_named(synth, synth_name, charp, S_IRUGO);
module_param_named(quiet, quiet_boot, bool, S_IRUGO);
MODULE_PARM_DESC(synth, "Synth to start if speakup is built in.");
MODULE_PARM_DESC(quiet, "Do not announce when the synthesizer is found.");
special_func special_handler;
short pitch_shift, synth_flags;
static char buf[256];
int attrib_bleep, bleeps, bleep_time = 10;
int no_intr, spell_delay;
int key_echo, say_word_ctl;
int say_ctrl, bell_pos;
short punc_mask;
int punc_level, reading_punc;
char str_caps_start[MAXVARLEN + 1] = "\0", str_caps_stop[MAXVARLEN + 1] = "\0";
const struct st_bits_data punc_info[] = ;
static char mark_cut_flag;
#define MAX_KEY 160
u_char *our_keys[MAX_KEY], *shift_table;
u_char key_buf[600];
const u_char key_defaults[] = ;
static int cursor_track = 1, prev_cursor_track = 1;
enum ;
#define read_all_mode CT_Max
static struct tty_struct *tty;
static void spkup_write(const char *in_buf, int count);
static char *phonetic[] = ;
char *characters[256];
char *default_chars[256] = ;
u_short spk_chartab[256];
static u_short default_chartab[256] = ;
struct task_struct *speakup_task;
struct bleep unprocessed_sound;
static int spk_keydown;
static u_char spk_lastkey, spk_close_press, keymap_flags;
static u_char last_keycode, this_speakup_key;
static u_long last_spk_jiffy;
struct st_spk_t *speakup_console[MAX_NR_CONSOLES];
DEFINE_MUTEX(spk_mutex);
static int keyboard_notifier_call(struct notifier_block *,
unsigned long code, void *param);
struct notifier_block keyboard_notifier_block = ;
static int vt_notifier_call(struct notifier_block *,
unsigned long code, void *param);
struct notifier_block vt_notifier_block = ;
static unsigned char get_attributes(u16 *pos)
static void speakup_date(struct vc_data *vc)
static void bleep(u_short val)
static void speakup_shut_up(struct vc_data *vc)
static void speech_kill(struct vc_data *vc)
static void speakup_off(struct vc_data *vc)
static void speakup_parked(struct vc_data *vc)
static void speakup_cut(struct vc_data *vc)
static void speakup_paste(struct vc_data *vc)
static void say_attributes(struct vc_data *vc)
enum ;
static void announce_edge(struct vc_data *vc, int msg_id)
static void speak_char(u_char ch)
static u16 get_char(struct vc_data *vc, u16 * pos, u_char * attribs)
static void say_char(struct vc_data *vc)
static void say_phonetic_char(struct vc_data *vc)
static void say_prev_char(struct vc_data *vc)
static void say_next_char(struct vc_data *vc)
static u_long get_word(struct vc_data *vc)
static void say_word(struct vc_data *vc)
static void say_prev_word(struct vc_data *vc)
static void say_next_word(struct vc_data *vc)
static void spell_word(struct vc_data *vc)
static int get_line(struct vc_data *vc)
static void say_line(struct vc_data *vc)
static void say_prev_line(struct vc_data *vc)
static void say_next_line(struct vc_data *vc)
static int say_from_to(struct vc_data *vc, u_long from, u_long to,
int read_punc)
static void say_line_from_to(struct vc_data *vc, u_long from, u_long to,
int read_punc)
static int currsentence;
static int numsentences[2];
static char *sentbufend[2];
static char *sentmarks[2][10];
static int currbuf;
static int bn;
static char sentbuf[2][256];
static int say_sentence_num(int num, int prev)
static int get_sentence_buf(struct vc_data *vc, int read_punc)
static void say_screen_from_to(struct vc_data *vc, u_long from, u_long to)
static void say_screen(struct vc_data *vc)
static void speakup_win_say(struct vc_data *vc)
static void top_edge(struct vc_data *vc)
static void bottom_edge(struct vc_data *vc)
static void left_edge(struct vc_data *vc)
static void right_edge(struct vc_data *vc)
static void say_first_char(struct vc_data *vc)
static void say_last_char(struct vc_data *vc)
static void say_position(struct vc_data *vc)
static void say_char_num(struct vc_data *vc)
static void say_from_top(struct vc_data *vc)
static void say_to_bottom(struct vc_data *vc)
static void say_from_left(struct vc_data *vc)
static void say_to_right(struct vc_data *vc)
static void spkup_write(const char *in_buf, int count)
static const int NUM_CTL_LABELS = (MSG_CTL_END - MSG_CTL_START + 1);
static void read_all_doc(struct vc_data *vc);
static void cursor_done(u_long data);
static DEFINE_TIMER(cursor_timer, cursor_done, 0, 0);
static void do_handle_shift(struct vc_data *vc, u_char value, char up_flag)
static void do_handle_latin(struct vc_data *vc, u_char value, char up_flag)
int set_key_info(const u_char *key_info, u_char *k_buffer)
static struct var_t spk_vars[] = ;
static void toggle_cursoring(struct vc_data *vc)
void reset_default_chars(void)
void reset_default_chartab(void)
static const struct st_bits_data *pb_edit;
static int edit_bits(struct vc_data *vc, u_char type, u_char ch, u_short key)
int speakup_allocate(struct vc_data *vc)
void speakup_deallocate(struct vc_data *vc)
static u_char is_cursor;
static u_long old_cursor_pos, old_cursor_x, old_cursor_y;
static int cursor_con;
static void reset_highlight_buffers(struct vc_data *);
static int read_all_key;
static void start_read_all_timer(struct vc_data *vc, int command);
enum ;
static void kbd_fakekey2(struct vc_data *vc, int command)
static void read_all_doc(struct vc_data *vc)
static void stop_read_all(struct vc_data *vc)
static void start_read_all_timer(struct vc_data *vc, int command)
static void handle_cursor_read_all(struct vc_data *vc, int command)
static int pre_handle_cursor(struct vc_data *vc, u_char value, char up_flag)
static void do_handle_cursor(struct vc_data *vc, u_char value, char up_flag)
static void update_color_buffer(struct vc_data *vc, const char *ic, int len)
static void reset_highlight_buffers(struct vc_data *vc)
static int count_highlight_color(struct vc_data *vc)
static int get_highlight_color(struct vc_data *vc)
static int speak_highlight(struct vc_data *vc)
static void cursor_done(u_long data)
static void speakup_bs(struct vc_data *vc)
static void speakup_con_write(struct vc_data *vc, const char *str, int len)
void speakup_con_update(struct vc_data *vc)
static void do_handle_spec(struct vc_data *vc, u_char value, char up_flag)
static int inc_dec_var(u_char value)
static void speakup_win_set(struct vc_data *vc)
static void speakup_win_clear(struct vc_data *vc)
static void speakup_win_enable(struct vc_data *vc)
static void speakup_bits(struct vc_data *vc)
static int handle_goto(struct vc_data *vc, u_char type, u_char ch, u_short key)
static void speakup_goto(struct vc_data *vc)
static void speakup_help(struct vc_data *vc)
static void do_nothing(struct vc_data *vc)
static u_char key_speakup, spk_key_locked;
static void speakup_lock(struct vc_data *vc)
typedef void (*spkup_hand) (struct vc_data *);
spkup_hand spkup_handler[] = ;
static void do_spkup(struct vc_data *vc, u_char value)
static const char *pad_chars = "0123456789+-*/\015,.?()";
int
speakup_key(struct vc_data *vc, int shift_state, int keycode, u_short keysym,
int up_flag)
static int keyboard_notifier_call(struct notifier_block *nb,
unsigned long code, void *_param)
static int vt_notifier_call(struct notifier_block *nb,
unsigned long code, void *_param)
static void __exit speakup_exit(void)
static int __init speakup_init(void)
module_init(speakup_init);
module_exit(speakup_exit);
