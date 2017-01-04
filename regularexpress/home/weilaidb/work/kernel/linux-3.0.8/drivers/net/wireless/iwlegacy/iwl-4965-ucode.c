#define IWL_AC_UNSET -1
static int
iwl4965_verify_inst_sparse(struct iwl_priv *priv, __le32 *image, u32 len)
static int iwl4965_verify_inst_full(struct iwl_priv *priv, __le32 *image,
u32 len)
int iwl4965_verify_ucode(struct iwl_priv *priv)
