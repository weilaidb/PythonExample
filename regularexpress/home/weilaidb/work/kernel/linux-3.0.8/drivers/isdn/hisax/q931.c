void
iecpy(u_char * dest, u_char * iestart, int ieoffset)
static
struct MessageType  mtlist[] = ;
#define MTSIZE ARRAY_SIZE(mtlist)
static
struct MessageType mt_n0[] =
;
#define MT_N0_LEN ARRAY_SIZE(mt_n0)
static
struct MessageType mt_n1[] =
;
#define MT_N1_LEN ARRAY_SIZE(mt_n1)
static int
prbits(char *dest, u_char b, int start, int len)
static
u_char *
skipext(u_char * p)
static
struct CauseValue  cvlist[] = ;
#define CVSIZE ARRAY_SIZE(cvlist)
static
int
prcause(char *dest, u_char * p)
static
struct MessageType cause_1tr6[] =
;
static int cause_1tr6_len = ARRAY_SIZE(cause_1tr6);
static int
prcause_1tr6(char *dest, u_char * p)
static int
prchident(char *dest, u_char * p)
static int
prcalled(char *dest, u_char * p)
static int
prcalling(char *dest, u_char * p)
static
int
prbearer(char *dest, u_char * p)
static
int
prbearer_ni1(char *dest, u_char * p)
static int
general(char *dest, u_char * p)
static int
general_ni1(char *dest, u_char * p)
static int
prcharge(char *dest, u_char * p)
static int
prtext(char *dest, u_char * p)
static int
prfeatureind(char *dest, u_char * p)
static
struct DTag  dtaglist[] = ;
#define DTAGSIZE ARRAY_SIZE(dtaglist)
static int
disptext_ni1(char *dest, u_char * p)
static int
display(char *dest, u_char * p)
static int
prfacility(char *dest, u_char * p)
static
struct InformationElement  ielist[] = ;
#define IESIZE ARRAY_SIZE(ielist)
static
struct InformationElement ielist_ni1[] = ;
#define IESIZE_NI1 ARRAY_SIZE(ielist_ni1)
static
struct InformationElement ielist_ni1_cs5[] = ;
#define IESIZE_NI1_CS5 ARRAY_SIZE(ielist_ni1_cs5)
static
struct InformationElement ielist_ni1_cs6[] = ;
#define IESIZE_NI1_CS6 ARRAY_SIZE(ielist_ni1_cs6)
static struct InformationElement we_0[] =
;
#define WE_0_LEN ARRAY_SIZE(we_0)
static struct InformationElement we_6[] =
;
#define WE_6_LEN ARRAY_SIZE(we_6)
int
QuickHex(char *txt, u_char * p, int cnt)
void
LogFrame(struct IsdnCardState *cs, u_char * buf, int size)
void
dlogframe(struct IsdnCardState *cs, struct sk_buff *skb, int dir)
