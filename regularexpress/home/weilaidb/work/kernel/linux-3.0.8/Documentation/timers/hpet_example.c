extern void hpet_open_close(int, const char **);
extern void hpet_info(int, const char **);
extern void hpet_poll(int, const char **);
extern void hpet_fasync(int, const char **);
extern void hpet_read(int, const char **);
struct hpet_command  hpet_command[] = ;
int
main(int argc, const char ** argv)
void
hpet_open_close(int argc, const char **argv)
void
hpet_info(int argc, const char **argv)
void
hpet_poll(int argc, const char **argv)
static int hpet_sigio_count;
static void
hpet_sigio(int val)
void
hpet_fasync(int argc, const char **argv)
