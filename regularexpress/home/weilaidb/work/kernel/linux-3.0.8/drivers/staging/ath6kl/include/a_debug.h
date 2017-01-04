#define _A_DEBUG_H_
#define ATH_DEBUG_ERR   (1 << 0)
#define ATH_DEBUG_WARN  (1 << 1)
#define ATH_DEBUG_INFO  (1 << 2)
#define ATH_DEBUG_TRC   (1 << 3)
#define ATH_DEBUG_RSVD1 (1 << 4)
#define ATH_DEBUG_RSVD2 (1 << 5)
#define ATH_DEBUG_RSVD3 (1 << 6)
#define ATH_DEBUG_RSVD4 (1 << 7)
#define ATH_DEBUG_MASK_DEFAULTS  (ATH_DEBUG_ERR | ATH_DEBUG_WARN)
#define ATH_DEBUG_ANY  0xFFFF
#define ATH_DEBUG_ERROR   ATH_DEBUG_ERR
#define ATH_LOG_ERR       ATH_DEBUG_ERR
#define ATH_LOG_INF       ATH_DEBUG_INFO
#define ATH_LOG_TRC       ATH_DEBUG_TRC
#define ATH_DEBUG_TRACE   ATH_DEBUG_TRC
#define ATH_DEBUG_INIT    ATH_DEBUG_INFO
#define ATH_DEBUG_MODULE_MASK_SHIFT   8
#define ATH_DEBUG_MAKE_MODULE_MASK(index)  (1 << (ATH_DEBUG_MODULE_MASK_SHIFT + (index)))
void DebugDumpBytes(u8 *buffer, u16 length, char *pDescription);
#define ATH_DEBUG_MAX_MASK_DESC_LENGTH   32
#define ATH_DEBUG_MAX_MOD_DESC_LENGTH    64
struct ath_debug_mask_description ;
#define ATH_DEBUG_INFO_FLAGS_REGISTERED (1 << 0)
typedef struct  _ATH_DEBUG_MODULE_DBG_INFO ATH_DEBUG_MODULE_DBG_INFO;
#define ATH_DEBUG_DESCRIPTION_COUNT(d)  (int)((sizeof((d))) / (sizeof(struct ath_debug_mask_description)))
#define GET_ATH_MODULE_DEBUG_VAR_NAME(s) _XGET_ATH_MODULE_NAME_DEBUG_(s)
#define GET_ATH_MODULE_DEBUG_VAR_MASK(s) _XGET_ATH_MODULE_NAME_DEBUG_(s).CurrentMask
#define _XGET_ATH_MODULE_NAME_DEBUG_(s) debug_ ## s
#define ATH_DEBUG_INSTANTIATE_MODULE_VAR(s,name,moddesc,initmask,count,descriptions) \
ATH_DEBUG_MODULE_DBG_INFO GET_ATH_MODULE_DEBUG_VAR_NAME(s) = \
extern ATH_DEBUG_MODULE_DBG_INFO GET_ATH_MODULE_DEBUG_VAR_NAME(ATH_MODULE_NAME);
#define AR_DEBUG_LVL_CHECK(lvl) (GET_ATH_MODULE_DEBUG_VAR_MASK(ATH_MODULE_NAME) & (lvl))
#define ATH_DEBUG_SET_DEBUG_MASK(s,lvl) GET_ATH_MODULE_DEBUG_VAR_MASK(s) = (lvl)
#define ATH_DEBUG_DECLARE_EXTERN(s) \
extern ATH_DEBUG_MODULE_DBG_INFO GET_ATH_MODULE_DEBUG_VAR_NAME(s)
#define AR_DEBUG_PRINTBUF(buffer, length, desc) DebugDumpBytes(buffer,length,desc)
#define AR_DEBUG_ASSERT A_ASSERT
void a_dump_module_debug_info(ATH_DEBUG_MODULE_DBG_INFO *pInfo);
void a_register_module_debug_info(ATH_DEBUG_MODULE_DBG_INFO *pInfo);
#define A_DUMP_MODULE_DEBUG_INFO(s) a_dump_module_debug_info(&(GET_ATH_MODULE_DEBUG_VAR_NAME(s)))
#define A_REGISTER_MODULE_DEBUG_INFO(s) a_register_module_debug_info(&(GET_ATH_MODULE_DEBUG_VAR_NAME(s)))
#define ATH_DEBUG_INSTANTIATE_MODULE_VAR(s,name,moddesc,initmask,count,descriptions)
#define AR_DEBUG_LVL_CHECK(lvl) 0
#define AR_DEBUG_PRINTBUF(buffer, length, desc)
#define AR_DEBUG_ASSERT(test)
#define ATH_DEBUG_DECLARE_EXTERN(s)
#define ATH_DEBUG_SET_DEBUG_MASK(s,lvl)
#define A_DUMP_MODULE_DEBUG_INFO(s)
#define A_REGISTER_MODULE_DEBUG_INFO(s)
int a_get_module_mask(char *module_name, u32 *pMask);
int a_set_module_mask(char *module_name, u32 Mask);
void a_dump_module_debug_info_by_name(char *module_name);
void a_module_debug_support_init(void);
void a_module_debug_support_cleanup(void);
