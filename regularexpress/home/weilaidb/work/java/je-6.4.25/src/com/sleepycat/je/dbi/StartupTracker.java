package com.sleepycat.je.dbi;
import java.io.ByteArrayOutputStream;
import java.io.PrintStream;
import java.util.EnumMap;
import java.util.Formatter;
import java.util.Map;
import java.util.logging.Level;
import java.util.logging.Logger;
import com.sleepycat.je.EnvironmentFailureException;
import com.sleepycat.je.ProgressListener;
import com.sleepycat.je.RecoveryProgress;
import com.sleepycat.je.config.EnvironmentParams;
import com.sleepycat.je.recovery.CheckpointEnd;
import com.sleepycat.je.recovery.RecoveryInfo;
import com.sleepycat.je.utilint.DbLsn;
import com.sleepycat.je.utilint.LoggerUtils;
import com.sleepycat.je.utilint.StatGroup;
public class StartupTracker
