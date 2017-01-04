package com.sleepycat.je.rep.impl.node;
import static com.sleepycat.je.rep.impl.RepParams.MIN_RETAINED_VLSNS;
import static com.sleepycat.je.rep.impl.RepParams.REP_STREAM_TIMEOUT;
import static com.sleepycat.je.utilint.VLSN.NULL_VLSN;
import java.text.DateFormat;
import java.util.Date;
import java.util.logging.Level;
import java.util.logging.Logger;
import com.sleepycat.je.rep.impl.RepGroupImpl;
import com.sleepycat.je.rep.impl.RepGroupImpl.BarrierState;
import com.sleepycat.je.rep.impl.RepImpl;
import com.sleepycat.je.rep.impl.RepNodeImpl;
import com.sleepycat.je.rep.vlsn.VLSNIndex;
import com.sleepycat.je.rep.vlsn.VLSNRange;
import com.sleepycat.je.utilint.LoggerUtils;
import com.sleepycat.je.utilint.TracerFormatter;
import com.sleepycat.je.utilint.VLSN;
class GlobalCBVLSN
