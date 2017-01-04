package com.sleepycat.je.utilint;
import static com.sleepycat.je.utilint.CollectionUtils.emptySortedMap;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.util.Map;
import java.util.Map.Entry;
import java.util.SortedMap;
import java.util.TreeMap;
import com.sleepycat.je.utilint.StatDefinition.StatType;
public abstract class MapStat<T, C extends MapStatComponent<T, C>>
extends Stat<String>
