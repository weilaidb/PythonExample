#define IWL_POLL_INTERVAL 10
static inline void __iwl_set_bit(struct iwl_priv *priv, u32 reg, u32 mask)
static inline void __iwl_clear_bit(struct iwl_priv *priv, u32 reg, u32 mask)
void iwl_set_bit(struct iwl_priv *priv, u32 reg, u32 mask)
void iwl_clear_bit(struct iwl_priv *priv, u32 reg, u32 mask)
int iwl_poll_bit(struct iwl_priv *priv, u32 addr,
u32 bits, u32 mask, int timeout)
int iwl_grab_nic_access_silent(struct iwl_priv *priv)
int iwl_grab_nic_access(struct iwl_priv *priv)
void iwl_release_nic_access(struct iwl_priv *priv)
u32 iwl_read_direct32(struct iwl_priv *priv, u32 reg)
void iwl_write_direct32(struct iwl_priv *priv, u32 reg, u32 value)
int iwl_poll_direct_bit(struct iwl_priv *priv, u32 addr, u32 mask,
int timeout)
static inline u32 __iwl_read_prph(struct iwl_priv *priv, u32 reg)
static inline void __iwl_write_prph(struct iwl_priv *priv, u32 addr, u32 val)
u32 iwl_read_prph(struct iwl_priv *priv, u32 reg)
void iwl_write_prph(struct iwl_priv *priv, u32 addr, u32 val)
void iwl_set_bits_prph(struct iwl_priv *priv, u32 reg, u32 mask)
void iwl_set_bits_mask_prph(struct iwl_priv *priv, u32 reg,
u32 bits, u32 mask)
void iwl_clear_bits_prph(struct iwl_priv *priv, u32 reg, u32 mask)
void _iwl_read_targ_mem_words(struct iwl_priv *priv, u32 addr,
void *buf, int words)
u32 iwl_read_targ_mem(struct iwl_priv *priv, u32 addr)
void iwl_write_targ_mem(struct iwl_priv *priv, u32 addr, u32 val)
