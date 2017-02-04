#define AVCODEC_DXVA2_INTERNAL_H
#define COBJMACROS
#if CONFIG_DXVA2
#if CONFIG_D3D11VA
#if HAVE_DXVA_H
#undef WINAPI_FAMILY
#define WINAPI_FAMILY WINAPI_FAMILY_DESKTOP_APP
#undef _CRT_BUILD_DESKTOP_APP
#define _CRT_BUILD_DESKTOP_APP 0
typedef void DECODER_BUFFER_DESC;
typedef union  AVDXVAContext;
#if CONFIG_D3D11VA
D3D11VA_CONTEXT (&ctx->d3d11va)
#if CONFIG_DXVA2
DXVA2_CONTEXT   (&ctx->dxva2)
#if CONFIG_D3D11VA && CONFIG_DXVA2
DXVA_CONTEXT_WORKAROUND     (avctx->pix_fmt == AV_PIX_FMT_D3D11VA_VLD ? ctx->d3d11va.workaround : ctx->dxva2.workaround)
DXVA_CONTEXT_COUNT          (avctx->pix_fmt == AV_PIX_FMT_D3D11VA_VLD ? ctx->d3d11va.surface_count : ctx->dxva2.surface_count)
DXVA_CONTEXT_DECODER        (avctx->pix_fmt == AV_PIX_FMT_D3D11VA_VLD ? ctx->d3d11va.decoder : ctx->dxva2.decoder)
DXVA_CONTEXT_REPORT_ID      (*(avctx->pix_fmt == AV_PIX_FMT_D3D11VA_VLD ? &ctx->d3d11va.report_id : &ctx->dxva2.report_id))
DXVA_CONTEXT_CFG            (avctx->pix_fmt == AV_PIX_FMT_D3D11VA_VLD ? ctx->d3d11va.cfg : ctx->dxva2.cfg)
DXVA_CONTEXT_CFG_BITSTREAM  (avctx->pix_fmt == AV_PIX_FMT_D3D11VA_VLD ? ctx->d3d11va.cfg->ConfigBitstreamRaw : ctx->dxva2.cfg->ConfigBitstreamRaw)
DXVA_CONTEXT_CFG_INTRARESID (avctx->pix_fmt == AV_PIX_FMT_D3D11VA_VLD ? ctx->d3d11va.cfg->ConfigIntraResidUnsigned : ctx->dxva2.cfg->ConfigIntraResidUnsigned)
DXVA_CONTEXT_CFG_RESIDACCEL (avctx->pix_fmt == AV_PIX_FMT_D3D11VA_VLD ? ctx->d3d11va.cfg->ConfigResidDiffAccelerator : ctx->dxva2.cfg->ConfigResidDiffAccelerator)
#elif CONFIG_DXVA2
DXVA_CONTEXT_WORKAROUND     (ctx->dxva2.workaround)
DXVA_CONTEXT_COUNT          (ctx->dxva2.surface_count)
DXVA_CONTEXT_DECODER        (ctx->dxva2.decoder)
DXVA_CONTEXT_REPORT_ID      (*(&ctx->dxva2.report_id))
DXVA_CONTEXT_CFG            (ctx->dxva2.cfg)
DXVA_CONTEXT_CFG_BITSTREAM  (ctx->dxva2.cfg->ConfigBitstreamRaw)
DXVA_CONTEXT_CFG_INTRARESID (ctx->dxva2.cfg->ConfigIntraResidUnsigned)
DXVA_CONTEXT_CFG_RESIDACCEL (ctx->dxva2.cfg->ConfigResidDiffAccelerator)
#elif CONFIG_D3D11VA
DXVA_CONTEXT_WORKAROUND     (ctx->d3d11va.workaround)
DXVA_CONTEXT_COUNT          (ctx->d3d11va.surface_count)
DXVA_CONTEXT_DECODER        (ctx->d3d11va.decoder)
DXVA_CONTEXT_REPORT_ID      (*(&ctx->d3d11va.report_id))
DXVA_CONTEXT_CFG            (ctx->d3d11va.cfg)
DXVA_CONTEXT_CFG_BITSTREAM  (ctx->d3d11va.cfg->ConfigBitstreamRaw)
DXVA_CONTEXT_CFG_INTRARESID (ctx->d3d11va.cfg->ConfigIntraResidUnsigned)
DXVA_CONTEXT_CFG_RESIDACCEL (ctx->d3d11va.cfg->ConfigResidDiffAccelerator)
*ff_dxva2_get_surface;
ff_dxva2_get_surface_index;
ff_dxva2_commit_buffer;
ff_dxva2_common_end_frame(AVCodecContext *,
DECODER_BUFFER_DESC *bs,
DECODER_BUFFER_DESC *slice));
