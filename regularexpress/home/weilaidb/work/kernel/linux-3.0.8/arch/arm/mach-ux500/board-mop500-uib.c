#define pr_fmt(fmt)	"mop500-uib: " fmt
enum mop500_uib ;
struct uib ;
static struct __initdata uib mop500_uibs[] = ;
static struct uib *mop500_uib;
static int __init mop500_uib_setup(char *str)
__setup("uib=", mop500_uib_setup);
void mop500_uib_i2c_add(int busnum, struct i2c_board_info *info,
unsigned n)
static void __init __mop500_uib_init(struct uib *uib, const char *why)
static int __init mop500_uib_init(void)
module_init(mop500_uib_init);
