package com.sleepycat.je.utilint;
import java.util.Iterator;
import java.util.Map.Entry;
import java.util.concurrent.TimeUnit;
import com.sleepycat.je.utilint.StatDefinition.StatType;
public final class LongAvgRateMapStat extends MapStat<Long, LongAvgRate>
