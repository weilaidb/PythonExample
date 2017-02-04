typedef struct DCAParseContext  DCAParseContext;
IS_CORE_MARKER \
(((state & 0xFFFFFFFFF0FF) == (((uint64_t)DCA_SYNCWORD_CORE_14B_LE << 16) | 0xF007)) || \
((state & 0xFFFFFFFFFFF0) == (((uint64_t)DCA_SYNCWORD_CORE_14B_BE << 16) | 0x07F0)) || \
((state & 0xFFFFFFFF00FC) == (((uint64_t)DCA_SYNCWORD_CORE_LE     << 16) | 0x00FC)) || \
((state & 0xFFFFFFFFFC00) == (((uint64_t)DCA_SYNCWORD_CORE_BE     << 16) | 0xFC00)))
IS_EXSS_MARKER   ((state & 0xFFFFFFFF) == DCA_SYNCWORD_SUBSTREAM)
IS_MARKER        (IS_CORE_MARKER(state) || IS_EXSS_MARKER(state))
CORE_MARKER      ((state >> 16) & 0xFFFFFFFF)
EXSS_MARKER      (state & 0xFFFFFFFF)
STATE_LE     (((state & 0xFF00FF00) >> 8) | ((state & 0x00FF00FF) << 8))
STATE_14     (((state & 0x3FFF0000) >> 8) | ((state & 0x00003FFF) >> 6))
CORE_FRAMESIZE   (((state >> 4) & 0x3FFF) + 1)
EXSS_FRAMESIZE   ((state & 0x2000000000) ? \
((state >>  5) & 0xFFFFF) + 1 : \
((state >> 13) & 0x0FFFF) + 1)
dca_find_frame_end
dca_parse_init
dca_parse_params
dca_parse
AVCodecParser ff_dca_parser = ;
