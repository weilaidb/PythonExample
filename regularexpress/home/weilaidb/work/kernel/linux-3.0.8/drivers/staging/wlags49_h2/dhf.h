#define DHF_H
#define GET_INFO(pp)  uil_get_info((LTVP)pp)
#define PUT_INFO(pp)  uil_put_info((LTVP)pp)
#define GET_INFO(pp)  hcf_get_info(ifbp, (LTVP)pp)
#define PUT_INFO(pp)  hcf_put_info(ifbp, (LTVP)pp)
#define CODEMASK				0x0000FFFFL
#define DHF_ERR_INCOMP_FW		0x40
typedef struct  LTV_INFO_STRUCT , *LTV_INFO_STRUCT_PTR;
typedef struct  plugrecord;
#define MAX_DEBUGSTRINGS 		1024
#define MAX_DEBUGSTRING_LEN 	  82
typedef struct  stringrecord;
#define MAX_DEBUGEXPORTS 		2048
#define MAX_DEBUGEXPORT_LEN 	  12
typedef struct  exportrecord;
#define FWSTRINGS_FUNCTION		0
#define FWEXPORTS_FUNCTION		1
typedef struct  memimage;
EXTERN_C int dhf_download_fw(void *ifbp, memimage *fw);
EXTERN_C int dhf_download_binary(memimage *fw);
EXTERN_C hcf_16 *find_record_in_pda(hcf_16 *pdap, hcf_16 code);
