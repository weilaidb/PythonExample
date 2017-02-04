#if HAVE_INLINE_ASM
ff_snow_horizontal_compose97i_sse2
ff_snow_horizontal_compose97i_mmx
#if HAVE_7REGS
snow_vertical_compose_sse2_load_add\
\
\
\
snow_vertical_compose_sse2_load\
snow_vertical_compose_sse2_load_add(,r,t0,t1,t2,t3)
snow_vertical_compose_sse2_add\
snow_vertical_compose_sse2_load_add(,r,t0,t1,t2,t3)
snow_vertical_compose_r2r_sub\
\
\
\
snow_vertical_compose_sse2_store\
\
\
\
snow_vertical_compose_sra\
\
\
\
snow_vertical_compose_r2r_add\
\
\
\
snow_vertical_compose_r2r_pmulhw\
\
\
\
snow_vertical_compose_sse2_move\
\
\
\
ff_snow_vertical_compose97i_sse2
snow_vertical_compose_mmx_load_add\
\
\
\
snow_vertical_compose_mmx_load\
snow_vertical_compose_mmx_load_add(,r,t0,t1,t2,t3)
snow_vertical_compose_mmx_add\
snow_vertical_compose_mmx_load_add(,r,t0,t1,t2,t3)
snow_vertical_compose_mmx_store\
\
\
\
snow_vertical_compose_mmx_move\
\
\
\
ff_snow_vertical_compose97i_mmx
#if HAVE_6REGS
#define snow_inner_add_yblock_sse2_header \
IDWTELEM * * dst_array = sb->line + src_y;\
x86_reg tmp;\
volatile\
\
\
\
\
\
\
\
\
\
\
snow_inner_add_yblock_sse2_start_16\
\
\
\
\
\
\
\
\
\
\
snow_inner_add_yblock_sse2_accum_8 \
snow_inner_add_yblock_sse2_start_8(, ptr_offset, s_offset)\
\
snow_inner_add_yblock_sse2_accum_16 \
snow_inner_add_yblock_sse2_start_16(, ptr_offset, s_offset)\
\
#define snow_inner_add_yblock_sse2_end_common1\
\
\
\
\
\
#define snow_inner_add_yblock_sse2_end_common2\
\
:(tmp)\
:\
(src_stride):\
XMM_CLOBBERS(, )\
);
#define snow_inner_add_yblock_sse2_end_8\
\
\
snow_inner_add_yblock_sse2_end_common1\
\
\
snow_inner_add_yblock_sse2_end_common2
#define snow_inner_add_yblock_sse2_end_16\
\
snow_inner_add_yblock_sse2_end_common1\
\
snow_inner_add_yblock_sse2_end_common2
inner_add_yblock_bw_8_obmc_16_bh_even_sse2
inner_add_yblock_bw_16_obmc_32_sse2
#define snow_inner_add_yblock_mmx_header \
IDWTELEM * * dst_array = sb->line + src_y;\
x86_reg tmp;\
volatile\
\
\
\
\
\
\
\
\
\
\
snow_inner_add_yblock_mmx_accum \
snow_inner_add_yblock_mmx_start(, ptr_offset, s_offset, d_offset)\
\
snow_inner_add_yblock_mmx_mix\
\
\
\
\
\
\
\
\
\
\
snow_inner_add_yblock_mmx_end\
\
\
\
\
\
\
\
\
\
:(tmp)\
:\
(src_stride):\
);
inner_add_yblock_bw_8_obmc_16_mmx
inner_add_yblock_bw_16_obmc_32_mmx
ff_snow_inner_add_yblock_sse2
ff_snow_inner_add_yblock_mmx
ff_dwt_init_x86
