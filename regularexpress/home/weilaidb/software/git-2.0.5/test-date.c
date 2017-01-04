static const char *usage_msg = "\n"
"  test-date show [time_t]...\n"
"  test-date parse [date]...\n"
"  test-date approxidate [date]...\n";
static void show_dates(char **argv, struct timeval *now)
static void parse_dates(char **argv, struct timeval *now)
static void parse_approxidate(char **argv, struct timeval *now)
int main(int argc, char **argv)
