#define APP_VERSION	"1.1.0"
#define APP_RELDATE	"December 1, 2003"
#define APP_NAME	"ifenslave"
static char *version =
APP_NAME ".c:v" APP_VERSION " (" APP_RELDATE ")\n"
"o Donald Becker (becker@cesdis.gsfc.nasa.gov).\n"
"o Detach support added on 2000/10/02 by Willy Tarreau (willy at meta-x.org).\n"
"o 2.4 kernel support added on 2001/02/16 by Chad N. Tindel\n"
"  (ctindel at ieee dot org).\n";
static const char *usage_msg =
"Usage: ifenslave [-f] <master-if> <slave-if> [<slave-if>...]\n"
"       ifenslave -d   <master-if> <slave-if> [<slave-if>...]\n"
"       ifenslave -c   <master-if> <slave-if>\n"
"       ifenslave --help\n";
static const char *help_msg =
"\n"
"       To create a bond device, simply follow these three steps :\n"
"       - ensure that the required drivers are properly loaded :\n"
"         # modprobe bonding ; modprobe <3c59x|eepro100|pcnet32|tulip|...>\n"
"       - assign an IP address to the bond device :\n"
"         # ifconfig bond0 <addr> netmask <mask> broadcast <bcast>\n"
"       - attach all the interfaces you need to the bond device :\n"
"         # ifenslave [] bond0 eth0 [eth1 [eth2]...]\n"
"         If bond0 didn't have a MAC address, it will take eth0's. Then, all\n"
"         interfaces attached AFTER this assignment will get the same MAC addr.\n"
"         (except for ALB/TLB modes)\n"
"\n"
"       To set the bond device down and automatically release all the slaves :\n"
"         # ifconfig bond0 down\n"
"\n"
"       To detach a dead interface without setting the bond device down :\n"
"         # ifenslave  bond0 eth0 [eth1 [eth2]...]\n"
"\n"
"       To change active slave :\n"
"         # ifenslave  bond0 eth0\n"
"\n"
"       To show master interface info\n"
"         # ifenslave bond0\n"
"\n"
"       To show all interfaces info\n"
"       # ifenslave \n"
"\n"
"       To be more verbose\n"
"       # ifenslave  ...\n"
"\n"
"       # ifenslave    Show usage\n"
"       # ifenslave  Show version\n"
"       # ifenslave     This message\n"
"\n";
typedef unsigned long long u64;
typedef __uint32_t u32;
typedef __uint16_t u16;
typedef __uint8_t u8;
struct option longopts[] = ;
unsigned int
opt_a = 0,
opt_c = 0,
opt_d = 0,
opt_f = 0,
opt_h = 0,
opt_u = 0,
opt_v = 0,
opt_V = 0;
int skfd = -1;
int abi_ver = 0;
int hwaddr_set = 0;
int saved_errno;
struct ifreq master_mtu, master_flags, master_hwaddr;
struct ifreq slave_mtu, slave_flags, slave_hwaddr;
struct dev_ifr ;
struct dev_ifr master_ifra[] = ;
struct dev_ifr slave_ifra[] = ;
static void if_print(char *ifname);
static int get_drv_info(char *master_ifname);
static int get_if_settings(char *ifname, struct dev_ifr ifra[]);
static int get_slave_flags(char *slave_ifname);
static int set_master_hwaddr(char *master_ifname, struct sockaddr *hwaddr);
static int set_slave_hwaddr(char *slave_ifname, struct sockaddr *hwaddr);
static int set_slave_mtu(char *slave_ifname, int mtu);
static int set_if_flags(char *ifname, short flags);
static int set_if_up(char *ifname, short flags);
static int set_if_down(char *ifname, short flags);
static int clear_if_addr(char *ifname);
static int set_if_addr(char *master_ifname, char *slave_ifname);
static int change_active(char *master_ifname, char *slave_ifname);
static int enslave(char *master_ifname, char *slave_ifname);
static int release(char *master_ifname, char *slave_ifname);
#define v_print(fmt, args...)	\
if (opt_v)		\
fprintf(stderr, fmt, ## args )
int main(int argc, char *argv[])
static short mif_flags;
static int if_getconfig(char *ifname)
static void if_print(char *ifname)
static int get_drv_info(char *master_ifname)
static int change_active(char *master_ifname, char *slave_ifname)
static int enslave(char *master_ifname, char *slave_ifname)
static int release(char *master_ifname, char *slave_ifname)
static int get_if_settings(char *ifname, struct dev_ifr ifra[])
static int get_slave_flags(char *slave_ifname)
static int set_master_hwaddr(char *master_ifname, struct sockaddr *hwaddr)
static int set_slave_hwaddr(char *slave_ifname, struct sockaddr *hwaddr)
static int set_slave_mtu(char *slave_ifname, int mtu)
static int set_if_flags(char *ifname, short flags)
static int set_if_up(char *ifname, short flags)
static int set_if_down(char *ifname, short flags)
static int clear_if_addr(char *ifname)
static int set_if_addr(char *master_ifname, char *slave_ifname)
