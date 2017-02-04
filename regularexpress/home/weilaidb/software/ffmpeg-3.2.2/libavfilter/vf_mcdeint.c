enum MCDeintMode ;
enum MCDeintParity ;
typedef struct  MCDeintContext;
OFFSET offsetof(MCDeintContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
CONST
static const AVOption mcdeint_options[] = ;
AVFILTER_DEFINE_CLASS(mcdeint);
config_props
uninit
query_formats
filter_frame
}
CHECK( 1) CHECK( 2) }} }}
}
if (diff0 + diff1 > 0)
temp -= (diff0 + diff1 - FFABS(FFABS(diff0) - FFABS(diff1)) / 2) / 2;
else
temp -= (diff0 + diff1 + FFABS(FFABS(diff0) - FFABS(diff1)) / 2) / 2;
*filp = *dstp = temp > 255U ? ~(temp>>31) : temp;
} else
}
}
}
for (y = 0; y < h; y++)
}
mcdeint->parity ^= 1;
end:
av_packet_unref(&pkt);
av_frame_free(&inpic);
if (ret < 0)
ff_filter_frame;
}
static const AVFilterPad mcdeint_inputs[] = ;
static const AVFilterPad mcdeint_outputs[] = ;
AVFilter ff_vf_mcdeint = ;
