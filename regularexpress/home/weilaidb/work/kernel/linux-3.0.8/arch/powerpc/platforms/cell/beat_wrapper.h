extern s64 beat_hcall_norets(u64 opcode, ...);
extern s64 beat_hcall_norets8(u64 opcode, u64 arg1, u64 arg2, u64 arg3,
u64 arg4, u64 arg5, u64 arg6, u64 arg7, u64 arg8);
extern s64 beat_hcall1(u64 opcode, u64 retbuf[1], ...);
extern s64 beat_hcall2(u64 opcode, u64 retbuf[2], ...);
extern s64 beat_hcall3(u64 opcode, u64 retbuf[3], ...);
extern s64 beat_hcall4(u64 opcode, u64 retbuf[4], ...);
extern s64 beat_hcall5(u64 opcode, u64 retbuf[5], ...);
extern s64 beat_hcall6(u64 opcode, u64 retbuf[6], ...);
static inline s64 beat_downcount_of_interrupt(u64 plug_id)
static inline s64 beat_set_interrupt_mask(u64 index,
u64 val0, u64 val1, u64 val2, u64 val3)
static inline s64 beat_destruct_irq_plug(u64 plug_id)
static inline s64 beat_construct_and_connect_irq_plug(u64 plug_id,
u64 outlet_id)
static inline s64 beat_detect_pending_interrupts(u64 index, u64 *retbuf)
static inline s64 beat_pause(u64 style)
static inline s64 beat_read_htab_entries(u64 htab_id, u64 index, u64 *retbuf)
static inline s64 beat_insert_htab_entry(u64 htab_id, u64 group,
u64 bitmask, u64 hpte_v, u64 hpte_r, u64 *slot)
static inline s64 beat_write_htab_entry(u64 htab_id, u64 slot,
u64 hpte_v, u64 hpte_r, u64 mask_v, u64 mask_r,
u64 *ret_v, u64 *ret_r)
static inline s64 beat_insert_htab_entry3(u64 htab_id, u64 group,
u64 hpte_v, u64 hpte_r, u64 mask_v, u64 value_v, u64 *slot)
static inline s64 beat_invalidate_htab_entry3(u64 htab_id, u64 group,
u64 va, u64 pss)
static inline s64 beat_update_htab_permission3(u64 htab_id, u64 group,
u64 va, u64 pss, u64 ptel_mask, u64 ptel_value)
static inline s64 beat_clear_htab3(u64 htab_id)
static inline void beat_shutdown_logical_partition(u64 code)
static inline s64 beat_rtc_write(u64 time_from_epoch)
static inline s64 beat_rtc_read(u64 *time_from_epoch)
#define	BEAT_NVRW_CNT	(sizeof(u64) * 6)
static inline s64 beat_eeprom_write(u64 index, u64 length, u8 *buffer)
static inline s64 beat_eeprom_read(u64 index, u64 length, u8 *buffer)
static inline s64 beat_set_dabr(u64 value, u64 style)
static inline s64 beat_get_characters_from_console(u64 termno, u64 *len,
u8 *buffer)
static inline s64 beat_put_characters_to_console(u64 termno, u64 len,
u8 *buffer)
static inline s64 beat_get_spe_privileged_state_1_registers(
u64 id, u64 offsetof, u64 *value)
static inline s64 beat_set_irq_mask_for_spe(u64 id, u64 class, u64 mask)
static inline s64 beat_clear_interrupt_status_of_spe(u64 id, u64 class,
u64 mask)
static inline s64 beat_set_spe_privileged_state_1_registers(
u64 id, u64 offsetof, u64 value)
static inline s64 beat_get_interrupt_status_of_spe(u64 id, u64 class, u64 *val)
static inline s64 beat_put_iopte(u64 ioas_id, u64 io_addr, u64 real_addr,
u64 ioid, u64 flags)
static inline s64 beat_construct_event_receive_port(u64 *port)
static inline s64 beat_destruct_event_receive_port(u64 port)
static inline s64 beat_create_repository_node(u64 path[4], u64 data[2])
static inline s64 beat_get_repository_node_value(u64 lpid, u64 path[4],
u64 data[2])
