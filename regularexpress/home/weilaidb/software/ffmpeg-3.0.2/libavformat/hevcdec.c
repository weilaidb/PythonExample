static int hevc_probe(AVProbeData *p)
FF_DEF_RAWVIDEO_DEMUXER(hevc, "raw HEVC video", hevc_probe, "hevc,h265,265", AV_CODEC_ID_HEVC)
