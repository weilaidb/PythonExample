package com.sleepycat.je.rep.utilint;
import static com.sleepycat.je.rep.utilint.SizeAwaitMapStatDefinition.N_NO_WAITS;
import static com.sleepycat.je.rep.utilint.SizeAwaitMapStatDefinition.N_REAL_WAITS;
import static com.sleepycat.je.rep.utilint.SizeAwaitMapStatDefinition.N_WAIT_TIME;
import java.util.Collection;
import java.util.HashMap;
import java.util.Map;
import java.util.Set;
import java.util.concurrent.CountDownLatch;
import java.util.concurrent.TimeUnit;
import com.sleepycat.je.EnvironmentFailureException;
import com.sleepycat.je.dbi.EnvironmentImpl;
import com.sleepycat.je.rep.utilint.RepUtils.ExceptionAwareCountDownLatch;
import com.sleepycat.je.utilint.LongStat;
import com.sleepycat.je.utilint.StatGroup;
public class SizeAwaitMap<K, V> implements Map<K, V>
