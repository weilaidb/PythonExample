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
#define ASN1_ENUM	10
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
#define SPNEGO_OID_LEN 7
#define NTLMSSP_OID_LEN  10
#define KRB5_OID_LEN  7
#define KRB5U2U_OID_LEN  8
#define MSKRB5_OID_LEN  7
static unsigned long SPNEGO_OID[7] = ;
static unsigned long NTLMSSP_OID[10] = ;
static unsigned long KRB5_OID[7] = ;
static unsigned long KRB5U2U_OID[8] = ;
static unsigned long MSKRB5_OID[7] = ;
struct asn1_ctx ;
struct asn1_octstr ;
static void
asn1_open(struct asn1_ctx *ctx, unsigned char *buf, unsigned int len)
static unsigned char
asn1_octet_decode(struct asn1_ctx *ctx, unsigned char *ch)
static unsigned char
asn1_tag_decode(struct asn1_ctx *ctx, unsigned int *tag)
static unsigned char
asn1_id_decode(struct asn1_ctx *ctx,
unsigned int *cls, unsigned int *con, unsigned int *tag)
static unsigned char
asn1_length_decode(struct asn1_ctx *ctx, unsigned int *def, unsigned int *len)
static unsigned char
asn1_header_decode(struct asn1_ctx *ctx,
unsigned char **eoc,
unsigned int *cls, unsigned int *con, unsigned int *tag)
static unsigned char
asn1_eoc_decode(struct asn1_ctx *ctx, unsigned char *eoc)
static unsigned char
asn1_subid_decode(struct asn1_ctx *ctx, unsigned long *subid)
static int
asn1_oid_decode(struct asn1_ctx *ctx,
unsigned char *eoc, unsigned long **oid, unsigned int *len)
static int
compare_oid(unsigned long *oid1, unsigned int oid1len,
unsigned long *oid2, unsigned int oid2len)
int
decode_negTokenInit(unsigned char *security_blob, int length,
struct TCP_Server_Info *server)
