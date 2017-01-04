struct smb_to_posix_error ;
static const struct smb_to_posix_error mapping_table_ERRDOS[] = ;
static const struct smb_to_posix_error mapping_table_ERRSRV[] = ;
static const struct smb_to_posix_error mapping_table_ERRHRD[] = ;
static int
cifs_inet_pton(const int address_family, const char *cp, int len, void *dst)
int
cifs_convert_address(struct sockaddr *dst, const char *src, int len)
int
cifs_set_port(struct sockaddr *addr, const unsigned short int port)
int
cifs_fill_sockaddr(struct sockaddr *dst, const char *src, int len,
const unsigned short int port)
static const struct  ntstatus_to_dos_map[] = ;
static void
cifs_print_status(__u32 status_code)
static void
ntstatus_to_dos(__u32 ntstatus, __u8 *eclass, __u16 *ecode)
int
map_smb_to_linux_error(struct smb_hdr *smb, bool logErr)
unsigned int
smbCalcSize(struct smb_hdr *ptr)
#define NTFS_TIME_OFFSET ((u64)(369*365 + 89) * 24 * 3600 * 10000000)
struct timespec
cifs_NTtimeToUnix(__le64 ntutc)
u64
cifs_UnixTimeToNT(struct timespec t)
static int total_days_of_prev_months[] =
;
struct timespec cnvrtDosUnixTm(__le16 le_date, __le16 le_time, int offset)
