extern const char display_string[];
static unsigned int display_count;
static unsigned int max_display_count;
void mips_display_message(const char *str)
static void scroll_display_message(unsigned long data);
static DEFINE_TIMER(mips_scroll_timer, scroll_display_message, HZ, 0);
static void scroll_display_message(unsigned long data)
void mips_scroll_message(void)
