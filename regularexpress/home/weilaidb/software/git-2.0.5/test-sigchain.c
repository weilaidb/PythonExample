#define X(f) \
static void f(int sig)
X(one)
X(two)
X(three)
#undef X
int main(int argc, char **argv)
