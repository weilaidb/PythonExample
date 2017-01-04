#define esi_h
#define ESI_QUERY			0x00000001
#define ESI_OPEN_HANDLE			0x02000000
#define ESI_CLOSE_HANDLE		0x02000001
enum esi_proc_type ;
extern struct ia64_sal_retval esi_call_phys (void *, u64 *);
extern int ia64_esi_call(efi_guid_t, struct ia64_sal_retval *,
enum esi_proc_type,
u64, u64, u64, u64, u64, u64, u64, u64);
extern int ia64_esi_call_phys(efi_guid_t, struct ia64_sal_retval *, u64, u64,
u64, u64, u64, u64, u64, u64);
