#define K_HANDLERS\
k_self,		k_fn,		k_spec,		k_ignore,\
k_dead,		k_ignore,	k_ignore,	k_ignore,\
k_ignore,	k_ignore,	k_ignore,	k_ignore,\
k_ignore,	k_ignore,	k_ignore,	k_ignore
typedef void (k_handler_fn)(struct kbd_data *, unsigned char);
static k_handler_fn K_HANDLERS;
static k_handler_fn *k_handler[16] = ;
static const int kbd_max_vals[] = ;
static const int KBD_NR_TYPES = ARRAY_SIZE(kbd_max_vals);
static unsigned char ret_diacr[NR_DEAD] = ;
struct kbd_data *
kbd_alloc(void)
void
kbd_free(struct kbd_data *kbd)
void
kbd_ascebc(struct kbd_data *kbd, unsigned char *ascebc)
static unsigned int
handle_diacr(struct kbd_data *kbd, unsigned int ch)
static void
k_dead(struct kbd_data *kbd, unsigned char value)
static void
k_self(struct kbd_data *kbd, unsigned char value)
static void
k_ignore(struct kbd_data *kbd, unsigned char value)
static void
k_fn(struct kbd_data *kbd, unsigned char value)
static void
k_spec(struct kbd_data *kbd, unsigned char value)
static void
to_utf8(struct tty_struct *tty, ushort c)
void
kbd_keycode(struct kbd_data *kbd, unsigned int keycode)
static int
do_kdsk_ioctl(struct kbd_data *kbd, struct kbentry __user *user_kbe,
int cmd, int perm)
static int
do_kdgkb_ioctl(struct kbd_data *kbd, struct kbsentry __user *u_kbs,
int cmd, int perm)
int kbd_ioctl(struct kbd_data *kbd, unsigned int cmd, unsigned long arg)
EXPORT_SYMBOL(kbd_ioctl);
EXPORT_SYMBOL(kbd_ascebc);
EXPORT_SYMBOL(kbd_free);
EXPORT_SYMBOL(kbd_alloc);
EXPORT_SYMBOL(kbd_keycode);
