package com.sleepycat.je.tree.dupConvert;
import java.nio.ByteBuffer;
import com.sleepycat.je.EnvironmentFailureException;
import com.sleepycat.je.dbi.DatabaseId;
import com.sleepycat.je.log.LogUtils;
import com.sleepycat.je.log.Loggable;
import com.sleepycat.je.tree.Key;
public class INDupDeleteInfo implements Loggable
