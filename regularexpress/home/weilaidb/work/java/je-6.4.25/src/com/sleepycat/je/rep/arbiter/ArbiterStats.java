package com.sleepycat.je.rep.arbiter;
import java.io.Serializable;
import static com.sleepycat.je.rep.arbiter.impl.ArbiterStatDefinition.ARB_MASTER;
import static com.sleepycat.je.rep.arbiter.impl.ArbiterStatDefinition.ARB_N_ACKS;
import static com.sleepycat.je.rep.arbiter.impl.ArbiterStatDefinition.ARB_N_REPLAY_QUEUE_OVERFLOW;
import static com.sleepycat.je.rep.arbiter.impl.ArbiterStatDefinition.ARB_STATE;
import static com.sleepycat.je.rep.arbiter.impl.ArbiterStatDefinition.ARB_VLSN;
import com.sleepycat.je.rep.arbiter.impl.ArbiterStatDefinition;
import com.sleepycat.je.utilint.StatGroup;
public class ArbiterStats implements Serializable
