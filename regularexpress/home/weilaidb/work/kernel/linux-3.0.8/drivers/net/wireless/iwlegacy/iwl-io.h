#define __iwl_legacy_io_h__
static inline void _iwl_legacy_write8(struct iwl_priv *priv, u32 ofs, u8 val)
static inline void
__iwl_legacy_write8(const char *f, u32 l, struct iwl_priv *priv,
u32 ofs, u8 val)
#define iwl_write8(priv, ofs, val) \
__iwl_legacy_write8(__FILE__, __LINE__, priv, ofs, val)
#define iwl_write8(priv, ofs, val) _iwl_legacy_write8(priv, ofs, val)
static inline void _iwl_legacy_write32(struct iwl_priv *priv, u32 ofs, u32 val)
static inline void
__iwl_legacy_write32(const char *f, u32 l, struct iwl_priv *priv,
u32 ofs, u32 val)
#define iwl_write32(priv, ofs, val) \
__iwl_legacy_write32(__FILE__, __LINE__, priv, ofs, val)
#define iwl_write32(priv, ofs, val) _iwl_legacy_write32(priv, ofs, val)
static inline u32 _iwl_legacy_read32(struct iwl_priv *priv, u32 ofs)
static inline u32
__iwl_legacy_read32(char *f, u32 l, struct iwl_priv *priv, u32 ofs)
#define iwl_read32(priv, ofs) __iwl_legacy_read32(__FILE__, __LINE__, priv, ofs)
#define iwl_read32(p, o) _iwl_legacy_read32(p, o)
#define IWL_POLL_INTERVAL 10
static inline int
_iwl_legacy_poll_bit(struct iwl_priv *priv, u32 addr,
u32 bits, u32 mask, int timeout)
static inline int __iwl_legacy_poll_bit(const char *f, u32 l,
struct iwl_priv *priv, u32 addr,
u32 bits, u32 mask, int timeout)
#define iwl_poll_bit(priv, addr, bits, mask, timeout) \
__iwl_legacy_poll_bit(__FILE__, __LINE__, priv, addr, \
bits, mask, timeout)
#define iwl_poll_bit(p, a, b, m, t) _iwl_legacy_poll_bit(p, a, b, m, t)
static inline void _iwl_legacy_set_bit(struct iwl_priv *priv, u32 reg, u32 mask)
static inline void __iwl_legacy_set_bit(const char *f, u32 l,
struct iwl_priv *priv, u32 reg, u32 mask)
static inline void iwl_legacy_set_bit(struct iwl_priv *p, u32 r, u32 m)
static inline void iwl_legacy_set_bit(struct iwl_priv *p, u32 r, u32 m)
static inline void
_iwl_legacy_clear_bit(struct iwl_priv *priv, u32 reg, u32 mask)
static inline void
__iwl_legacy_clear_bit(const char *f, u32 l,
struct iwl_priv *priv, u32 reg, u32 mask)
static inline void iwl_legacy_clear_bit(struct iwl_priv *p, u32 r, u32 m)
static inline void iwl_legacy_clear_bit(struct iwl_priv *p, u32 r, u32 m)
static inline int _iwl_legacy_grab_nic_access(struct iwl_priv *priv)
static inline int __iwl_legacy_grab_nic_access(const char *f, u32 l,
struct iwl_priv *priv)
#define iwl_grab_nic_access(priv) \
__iwl_legacy_grab_nic_access(__FILE__, __LINE__, priv)
#define iwl_grab_nic_access(priv) \
_iwl_legacy_grab_nic_access(priv)
static inline void _iwl_legacy_release_nic_access(struct iwl_priv *priv)
static inline void __iwl_legacy_release_nic_access(const char *f, u32 l,
struct iwl_priv *priv)
#define iwl_release_nic_access(priv) \
__iwl_legacy_release_nic_access(__FILE__, __LINE__, priv)
#define iwl_release_nic_access(priv) \
_iwl_legacy_release_nic_access(priv)
static inline u32 _iwl_legacy_read_direct32(struct iwl_priv *priv, u32 reg)
static inline u32 __iwl_legacy_read_direct32(const char *f, u32 l,
struct iwl_priv *priv, u32 reg)
static inline u32 iwl_legacy_read_direct32(struct iwl_priv *priv, u32 reg)
static inline u32 iwl_legacy_read_direct32(struct iwl_priv *priv, u32 reg)
static inline void _iwl_legacy_write_direct32(struct iwl_priv *priv,
u32 reg, u32 value)
static inline void
iwl_legacy_write_direct32(struct iwl_priv *priv, u32 reg, u32 value)
static inline void iwl_legacy_write_reg_buf(struct iwl_priv *priv,
u32 reg, u32 len, u32 *values)
static inline int _iwl_legacy_poll_direct_bit(struct iwl_priv *priv, u32 addr,
u32 mask, int timeout)
static inline int __iwl_legacy_poll_direct_bit(const char *f, u32 l,
struct iwl_priv *priv,
u32 addr, u32 mask, int timeout)
#define iwl_poll_direct_bit(priv, addr, mask, timeout) \
__iwl_legacy_poll_direct_bit(__FILE__, __LINE__, priv, addr, mask, timeout)
#define iwl_poll_direct_bit _iwl_legacy_poll_direct_bit
static inline u32 _iwl_legacy_read_prph(struct iwl_priv *priv, u32 reg)
static inline u32 iwl_legacy_read_prph(struct iwl_priv *priv, u32 reg)
static inline void _iwl_legacy_write_prph(struct iwl_priv *priv,
u32 addr, u32 val)
static inline void
iwl_legacy_write_prph(struct iwl_priv *priv, u32 addr, u32 val)
#define _iwl_legacy_set_bits_prph(priv, reg, mask) \
_iwl_legacy_write_prph(priv, reg, (_iwl_legacy_read_prph(priv, reg) | mask))
static inline void
iwl_legacy_set_bits_prph(struct iwl_priv *priv, u32 reg, u32 mask)
#define _iwl_legacy_set_bits_mask_prph(priv, reg, bits, mask) \
_iwl_legacy_write_prph(priv, reg,				\
((_iwl_legacy_read_prph(priv, reg) & mask) | bits))
static inline void iwl_legacy_set_bits_mask_prph(struct iwl_priv *priv, u32 reg,
u32 bits, u32 mask)
static inline void iwl_legacy_clear_bits_prph(struct iwl_priv
*priv, u32 reg, u32 mask)
static inline u32 iwl_legacy_read_targ_mem(struct iwl_priv *priv, u32 addr)
static inline void
iwl_legacy_write_targ_mem(struct iwl_priv *priv, u32 addr, u32 val)
static inline void
iwl_legacy_write_targ_mem_buf(struct iwl_priv *priv, u32 addr,
u32 len, u32 *values)
