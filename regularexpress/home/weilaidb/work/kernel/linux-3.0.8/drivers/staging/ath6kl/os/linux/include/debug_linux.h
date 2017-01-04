#define _DEBUG_LINUX_H_
#define ATH_PRINTX_ARG(arg...) arg
#define AR_DEBUG_PRINTF(mask, args) do  while (0)
#define AR_DEBUG_PRINTF(mask, args) \
if ((mask) & (ATH_DEBUG_ERR | ATH_DEBUG_WARN))
#define _A_FUNCNAME_  __func__
