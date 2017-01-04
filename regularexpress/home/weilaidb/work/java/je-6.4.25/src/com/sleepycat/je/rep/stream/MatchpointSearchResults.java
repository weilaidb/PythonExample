package com.sleepycat.je.rep.stream;
import java.io.Serializable;
import java.util.ArrayList;
import java.util.List;
import com.sleepycat.je.dbi.EnvironmentImpl;
import com.sleepycat.je.rep.impl.RepParams;
import com.sleepycat.je.utilint.DbLsn;
import com.sleepycat.je.utilint.Timestamp;
import com.sleepycat.je.utilint.VLSN;
public class MatchpointSearchResults implements Serializable
