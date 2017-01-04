static bool is_first_ses_reconnect(struct cifs_ses *ses)
static __le16 get_next_vcnum(struct cifs_ses *ses)
static __u32 cifs_ssetup_hdr(struct cifs_ses *ses, SESSION_SETUP_ANDX *pSMB)
static void
unicode_oslm_strings(char **pbcc_area, const struct nls_table *nls_cp)
static void unicode_domain_string(char **pbcc_area, struct cifs_ses *ses,
const struct nls_table *nls_cp)
static void unicode_ssetup_strings(char **pbcc_area, struct cifs_ses *ses,
const struct nls_table *nls_cp)
static void ascii_ssetup_strings(char **pbcc_area, struct cifs_ses *ses,
const struct nls_table *nls_cp)
static void
decode_unicode_ssetup(char **pbcc_area, int bleft, struct cifs_ses *ses,
const struct nls_table *nls_cp)
static int decode_ascii_ssetup(char **pbcc_area, __u16 bleft,
struct cifs_ses *ses,
const struct nls_table *nls_cp)
static int decode_ntlmssp_challenge(char *bcc_ptr, int blob_len,
struct cifs_ses *ses)
static void build_ntlmssp_negotiate_blob(unsigned char *pbuffer,
struct cifs_ses *ses)
static int build_ntlmssp_auth_blob(unsigned char *pbuffer,
u16 *buflen,
struct cifs_ses *ses,
const struct nls_table *nls_cp)
int
CIFS_SessSetup(unsigned int xid, struct cifs_ses *ses,
const struct nls_table *nls_cp)
