MODULE_LICENSE("GPL");
MODULE_AUTHOR("James Morris <jmorris@intercode.com.au>");
MODULE_DESCRIPTION("Basic SNMP Application Layer Gateway");
MODULE_ALIAS("ip_nat_snmp_basic");
#define SNMP_PORT 161
#define SNMP_TRAP_PORT 162
#define NOCT1(n) (*(u8 *)(n))
static int debug;
static DEFINE_SPINLOCK(snmp_lock);
struct oct1_map
;
#define ASN1_UNI	0
#define ASN1_APL	1
#define ASN1_CTX	2
#define ASN1_PRV	3
#define ASN1_EOC	0
#define ASN1_BOL	1
#define ASN1_INT	2
#define ASN1_BTS	3
#define ASN1_OTS	4
#define ASN1_NUL	5
#define ASN1_OJI	6
#define ASN1_OJD	7
#define ASN1_EXT	8
#define ASN1_SEQ	16
#define ASN1_SET	17
#define ASN1_NUMSTR	18
#define ASN1_PRNSTR	19
#define ASN1_TEXSTR	20
#define ASN1_VIDSTR	21
#define ASN1_IA5STR	22
#define ASN1_UNITIM	23
#define ASN1_GENTIM	24
#define ASN1_GRASTR	25
#define ASN1_VISSTR	26
#define ASN1_GENSTR	27
#define ASN1_PRI	0
#define ASN1_CON	1
#define ASN1_ERR_NOERROR		0
#define ASN1_ERR_DEC_EMPTY		2
#define ASN1_ERR_DEC_EOC_MISMATCH	3
#define ASN1_ERR_DEC_LENGTH_MISMATCH	4
#define ASN1_ERR_DEC_BADVALUE		5
struct asn1_ctx
;
struct asn1_octstr
;
static void asn1_open(struct asn1_ctx *ctx,
unsigned char *buf,
unsigned int len)
static unsigned char asn1_octet_decode(struct asn1_ctx *ctx, unsigned char *ch)
static unsigned char asn1_tag_decode(struct asn1_ctx *ctx, unsigned int *tag)
static unsigned char asn1_id_decode(struct asn1_ctx *ctx,
unsigned int *cls,
unsigned int *con,
unsigned int *tag)
static unsigned char asn1_length_decode(struct asn1_ctx *ctx,
unsigned int *def,
unsigned int *len)
static unsigned char asn1_header_decode(struct asn1_ctx *ctx,
unsigned char **eoc,
unsigned int *cls,
unsigned int *con,
unsigned int *tag)
static unsigned char asn1_eoc_decode(struct asn1_ctx *ctx, unsigned char *eoc)
static unsigned char asn1_null_decode(struct asn1_ctx *ctx, unsigned char *eoc)
static unsigned char asn1_long_decode(struct asn1_ctx *ctx,
unsigned char *eoc,
long *integer)
static unsigned char asn1_uint_decode(struct asn1_ctx *ctx,
unsigned char *eoc,
unsigned int *integer)
static unsigned char asn1_ulong_decode(struct asn1_ctx *ctx,
unsigned char *eoc,
unsigned long *integer)
static unsigned char asn1_octets_decode(struct asn1_ctx *ctx,
unsigned char *eoc,
unsigned char **octets,
unsigned int *len)
static unsigned char asn1_subid_decode(struct asn1_ctx *ctx,
unsigned long *subid)
static unsigned char asn1_oid_decode(struct asn1_ctx *ctx,
unsigned char *eoc,
unsigned long **oid,
unsigned int *len)
#define SNMP_V1				0
#define SNMP_V2C			1
#define SNMP_V2				2
#define SNMP_V3				3
#define SNMP_SIZE_COMM			256
#define SNMP_SIZE_OBJECTID		128
#define SNMP_SIZE_BUFCHR		256
#define SNMP_SIZE_BUFINT		128
#define SNMP_SIZE_SMALLOBJECTID		16
#define SNMP_PDU_GET			0
#define SNMP_PDU_NEXT			1
#define SNMP_PDU_RESPONSE		2
#define SNMP_PDU_SET			3
#define SNMP_PDU_TRAP1			4
#define SNMP_PDU_BULK			5
#define SNMP_PDU_INFORM			6
#define SNMP_PDU_TRAP2			7
#define SNMP_NOERROR			0
#define SNMP_TOOBIG			1
#define SNMP_NOSUCHNAME			2
#define SNMP_BADVALUE			3
#define SNMP_READONLY			4
#define SNMP_GENERROR			5
#define SNMP_NOACCESS			6
#define SNMP_WRONGTYPE			7
#define SNMP_WRONGLENGTH		8
#define SNMP_WRONGENCODING		9
#define SNMP_WRONGVALUE			10
#define SNMP_NOCREATION			11
#define SNMP_INCONSISTENTVALUE		12
#define SNMP_RESOURCEUNAVAILABLE	13
#define SNMP_COMMITFAILED		14
#define SNMP_UNDOFAILED			15
#define SNMP_AUTHORIZATIONERROR		16
#define SNMP_NOTWRITABLE		17
#define SNMP_INCONSISTENTNAME		18
#define SNMP_TRAP_COLDSTART		0
#define SNMP_TRAP_WARMSTART		1
#define SNMP_TRAP_LINKDOWN		2
#define SNMP_TRAP_LINKUP		3
#define SNMP_TRAP_AUTFAILURE		4
#define SNMP_TRAP_EQPNEIGHBORLOSS	5
#define SNMP_TRAP_ENTSPECIFIC		6
#define SNMP_NULL                0
#define SNMP_INTEGER             1
#define SNMP_OCTETSTR            2
#define SNMP_DISPLAYSTR          2
#define SNMP_OBJECTID            3
#define SNMP_IPADDR              4
#define SNMP_COUNTER             5
#define SNMP_GAUGE               6
#define SNMP_TIMETICKS           7
#define SNMP_OPAQUE              8
#define SNMP_UINTEGER            5
#define SNMP_BITSTR              9
#define SNMP_NSAP               10
#define SNMP_COUNTER64          11
#define SNMP_NOSUCHOBJECT       12
#define SNMP_NOSUCHINSTANCE     13
#define SNMP_ENDOFMIBVIEW       14
union snmp_syntax
;
struct snmp_object
;
struct snmp_request
;
struct snmp_v1_trap
;
#define SNMP_IPA    0
#define SNMP_CNT    1
#define SNMP_GGE    2
#define SNMP_TIT    3
#define SNMP_OPQ    4
#define SNMP_C64    6
#define SERR_NSO    0
#define SERR_NSI    1
#define SERR_EOM    2
static inline void mangle_address(unsigned char *begin,
unsigned char *addr,
const struct oct1_map *map,
__sum16 *check);
struct snmp_cnv
;
static const struct snmp_cnv snmp_conv[] = ;
static unsigned char snmp_tag_cls2syntax(unsigned int tag,
unsigned int cls,
unsigned short *syntax)
static unsigned char snmp_object_decode(struct asn1_ctx *ctx,
struct snmp_object **obj)
static unsigned char snmp_request_decode(struct asn1_ctx *ctx,
struct snmp_request *request)
static void fast_csum(__sum16 *csum,
const unsigned char *optr,
const unsigned char *nptr,
int offset)
static inline void mangle_address(unsigned char *begin,
unsigned char *addr,
const struct oct1_map *map,
__sum16 *check)
static unsigned char snmp_trap_decode(struct asn1_ctx *ctx,
struct snmp_v1_trap *trap,
const struct oct1_map *map,
__sum16 *check)
static void hex_dump(const unsigned char *buf, size_t len)
static int snmp_parse_mangle(unsigned char *msg,
u_int16_t len,
const struct oct1_map *map,
__sum16 *check)
static int snmp_translate(struct nf_conn *ct,
enum ip_conntrack_info ctinfo,
struct sk_buff *skb)
static int help(struct sk_buff *skb, unsigned int protoff,
struct nf_conn *ct,
enum ip_conntrack_info ctinfo)
static const struct nf_conntrack_expect_policy snmp_exp_policy = ;
static struct nf_conntrack_helper snmp_helper __read_mostly = ;
static struct nf_conntrack_helper snmp_trap_helper __read_mostly = ;
static int __init nf_nat_snmp_basic_init(void)
static void __exit nf_nat_snmp_basic_fini(void)
module_init(nf_nat_snmp_basic_init);
module_exit(nf_nat_snmp_basic_fini);
module_param(debug, int, 0600);
