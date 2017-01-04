static int dvbtxt_probe(AVProbeData *p)
FF_DEF_RAWSUB_DEMUXER(dvbtxt, "dvbtxt", dvbtxt_probe, NULL, AV_CODEC_ID_DVB_TELETEXT, 0)
