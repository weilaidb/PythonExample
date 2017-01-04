static int dial(int card, unsigned long channel, setup_parm setup);
static int hangup(int card, unsigned long channel);
static int answer(int card, unsigned long channel);
static int clreaz(int card, unsigned long channel);
static int seteaz(int card, unsigned long channel, char *);
static int setl2(int card, unsigned long arg);
static int setl3(int card, unsigned long arg);
static int acceptb(int card, unsigned long channel);
static char *commands[] = ;
static char *l3protos[] = ;
static char *l2protos[] = ;
int get_card_from_id(int driver)
int command(isdn_ctrl *cmd)
int startproc(int card)
static int dial(int card, unsigned long channel, setup_parm setup)
static int answer(int card, unsigned long channel)
static int hangup(int card, unsigned long channel)
static int setl2(int card, unsigned long arg)
static int setl3(int card, unsigned long channel)
static int acceptb(int card, unsigned long channel)
static int clreaz(int card, unsigned long arg)
static int seteaz(int card, unsigned long arg, char *num)
int reset(int card)
void flushreadfifo (int card)
