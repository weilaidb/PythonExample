void ucc_fast_dump_regs(struct ucc_fast_private * uccf)
EXPORT_SYMBOL(ucc_fast_dump_regs);
u32 ucc_fast_get_qe_cr_subblock(int uccf_num)
EXPORT_SYMBOL(ucc_fast_get_qe_cr_subblock);
void ucc_fast_transmit_on_demand(struct ucc_fast_private * uccf)
EXPORT_SYMBOL(ucc_fast_transmit_on_demand);
void ucc_fast_enable(struct ucc_fast_private * uccf, enum comm_dir mode)
EXPORT_SYMBOL(ucc_fast_enable);
void ucc_fast_disable(struct ucc_fast_private * uccf, enum comm_dir mode)
EXPORT_SYMBOL(ucc_fast_disable);
int ucc_fast_init(struct ucc_fast_info * uf_info, struct ucc_fast_private ** uccf_ret)
EXPORT_SYMBOL(ucc_fast_init);
void ucc_fast_free(struct ucc_fast_private * uccf)
EXPORT_SYMBOL(ucc_fast_free);
