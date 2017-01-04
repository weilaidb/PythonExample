package com.sleepycat.je.rep;
import static com.sleepycat.je.dbi.EnvironmentFailureReason.HARD_RECOVERY;
import com.sleepycat.je.Database;
import com.sleepycat.je.rep.impl.RepImpl;
import com.sleepycat.je.rep.stream.MatchpointSearchResults;
import com.sleepycat.je.utilint.DbLsn;
import com.sleepycat.je.utilint.VLSN;
public class RollbackException extends RestartRequiredException
