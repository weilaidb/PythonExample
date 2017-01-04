package com.sleepycat.persist.impl;
import java.util.HashMap;
import java.util.LinkedHashMap;
import java.util.Map;
import java.util.TreeMap;
import com.sleepycat.persist.model.Persistent;
import com.sleepycat.persist.model.PersistentProxy;
@Persistent
abstract class MapProxy<K, V> implements PersistentProxy<Map<K, V>>
