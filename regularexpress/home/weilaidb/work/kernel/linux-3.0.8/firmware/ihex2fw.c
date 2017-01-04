#define _GNU_SOURCE
struct ihex_binrec ;
static uint8_t nybble(const uint8_t n)
static uint8_t hex(const uint8_t *data, uint8_t *crc)
static int process_ihex(uint8_t *data, ssize_t size);
static void file_record(struct ihex_binrec *record);
static int output_records(int outfd);
static int sort_records = 0;
static int wide_records = 0;
static int include_jump = 0;
static int usage(void)
int main(int argc, char **argv)
static int process_ihex(uint8_t *data, ssize_t size)
static struct ihex_binrec *records;
static void file_record(struct ihex_binrec *record)
static int output_records(int outfd)
