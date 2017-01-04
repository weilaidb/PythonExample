static int rc;
static void report_error(const char *class, int ch)
static int is_in(const char *s, int ch)
#define TEST_CLASS(t,s)
#define DIGIT "0123456789"
#define LOWER "abcdefghijklmnopqrstuvwxyz"
#define UPPER "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
int main(int argc, char **argv)
{
TEST_CLASS(isdigit, DIGIT);
TEST_CLASS(isspace, " \n\r\t");
TEST_CLASS(isalpha, LOWER UPPER);
TEST_CLASS(isalnum, LOWER UPPER DIGIT);
TEST_CLASS(is_glob_special, "*?[\\");
TEST_CLASS(is_regex_special, "$()*+.?[\\^
