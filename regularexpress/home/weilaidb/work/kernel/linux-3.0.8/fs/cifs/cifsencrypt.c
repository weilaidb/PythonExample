static int cifs_calculate_signature(const struct smb_hdr *cifs_pdu,
struct TCP_Server_Info *server, char *signature)
int cifs_sign_smb(struct smb_hdr *cifs_pdu, struct TCP_Server_Info *server,
__u32 *pexpected_response_sequence_number)
static int cifs_calc_signature2(const struct kvec *iov, int n_vec,
struct TCP_Server_Info *server, char *signature)
int cifs_sign_smb2(struct kvec *iov, int n_vec, struct TCP_Server_Info *server,
__u32 *pexpected_response_sequence_number)
int cifs_verify_signature(struct smb_hdr *cifs_pdu,
struct TCP_Server_Info *server,
__u32 expected_sequence_number)
int setup_ntlm_response(struct cifs_ses *ses)
int calc_lanman_hash(const char *password, const char *cryptkey, bool encrypt,
char *lnm_session_key)
static int
build_avpair_blob(struct cifs_ses *ses, const struct nls_table *nls_cp)
static int
find_domain_name(struct cifs_ses *ses, const struct nls_table *nls_cp)
static int calc_ntlmv2_hash(struct cifs_ses *ses, char *ntlmv2_hash,
const struct nls_table *nls_cp)
static int
CalcNTLMv2_response(const struct cifs_ses *ses, char *ntlmv2_hash)
int
setup_ntlmv2_rsp(struct cifs_ses *ses, const struct nls_table *nls_cp)
int
calc_seckey(struct cifs_ses *ses)
void
cifs_crypto_shash_release(struct TCP_Server_Info *server)
int
cifs_crypto_shash_allocate(struct TCP_Server_Info *server)
