package com.sleepycat.je.utilint;
import java.util.Map.Entry;
import java.util.concurrent.atomic.AtomicLong;
import com.sleepycat.je.utilint.StatDefinition.StatType;
public final class AtomicLongMapStat
extends MapStat<Long, AtomicLongComponent>
