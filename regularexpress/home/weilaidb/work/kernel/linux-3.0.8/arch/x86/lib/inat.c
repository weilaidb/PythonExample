insn_attr_t inat_get_opcode_attribute(insn_byte_t opcode)
insn_attr_t inat_get_escape_attribute(insn_byte_t opcode, insn_byte_t last_pfx,
insn_attr_t esc_attr)
insn_attr_t inat_get_group_attribute(insn_byte_t modrm, insn_byte_t last_pfx,
insn_attr_t grp_attr)
insn_attr_t inat_get_avx_attribute(insn_byte_t opcode, insn_byte_t vex_m,
insn_byte_t vex_p)
