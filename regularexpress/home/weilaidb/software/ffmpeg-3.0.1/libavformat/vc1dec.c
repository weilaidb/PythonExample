static int vc1_probe(AVProbeData *p)
FF_DEF_RAWVIDEO_DEMUXER2(vc1, "raw VC-1", vc1_probe, "vc1", AV_CODEC_ID_VC1, AVFMT_GENERIC_INDEX|AVFMT_NOTIMESTAMPS)
