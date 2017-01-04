void tty_buffer_free_all(struct tty_struct *tty)
static struct tty_buffer *tty_buffer_alloc(struct tty_struct *tty, size_t size)
static void tty_buffer_free(struct tty_struct *tty, struct tty_buffer *b)
static void __tty_buffer_flush(struct tty_struct *tty)
void tty_buffer_flush(struct tty_struct *tty)
static struct tty_buffer *tty_buffer_find(struct tty_struct *tty, size_t size)
int tty_buffer_request_room(struct tty_struct *tty, size_t size)
EXPORT_SYMBOL_GPL(tty_buffer_request_room);
int tty_insert_flip_string_fixed_flag(struct tty_struct *tty,
const unsigned char *chars, char flag, size_t size)
EXPORT_SYMBOL(tty_insert_flip_string_fixed_flag);
int tty_insert_flip_string_flags(struct tty_struct *tty,
const unsigned char *chars, const char *flags, size_t size)
EXPORT_SYMBOL(tty_insert_flip_string_flags);
void tty_schedule_flip(struct tty_struct *tty)
EXPORT_SYMBOL(tty_schedule_flip);
int tty_prepare_flip_string(struct tty_struct *tty, unsigned char **chars,
size_t size)
EXPORT_SYMBOL_GPL(tty_prepare_flip_string);
int tty_prepare_flip_string_flags(struct tty_struct *tty,
unsigned char **chars, char **flags, size_t size)
EXPORT_SYMBOL_GPL(tty_prepare_flip_string_flags);
static void flush_to_ldisc(struct work_struct *work)
void tty_flush_to_ldisc(struct tty_struct *tty)
void tty_flip_buffer_push(struct tty_struct *tty)
EXPORT_SYMBOL(tty_flip_buffer_push);
void tty_buffer_init(struct tty_struct *tty)
