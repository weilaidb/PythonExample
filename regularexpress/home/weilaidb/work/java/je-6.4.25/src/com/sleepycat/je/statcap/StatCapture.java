package com.sleepycat.je.statcap;
import java.io.File;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Iterator;
import java.util.Map.Entry;
import java.util.SortedMap;
import java.util.SortedSet;
import java.util.TreeMap;
import java.util.logging.Logger;
import com.sleepycat.je.CustomStats;
import com.sleepycat.je.DatabaseException;
import com.sleepycat.je.EnvironmentMutableConfig;
import com.sleepycat.je.StatsConfig;
import com.sleepycat.je.config.EnvironmentParams;
import com.sleepycat.je.dbi.DbConfigManager;
import com.sleepycat.je.dbi.EnvConfigObserver;
import com.sleepycat.je.dbi.EnvironmentImpl;
import com.sleepycat.je.utilint.DaemonThread;
import com.sleepycat.je.utilint.LoggerUtils;
import com.sleepycat.je.utilint.Stat;
import com.sleepycat.je.utilint.StatDefinition;
import com.sleepycat.je.utilint.StatGroup;
import com.sleepycat.utilint.StatLogger;
public class StatCapture extends DaemonThread implements EnvConfigObserver