package com.sleepycat.je;
import java.io.Serializable;
import static com.sleepycat.je.dbi.SequenceStatDefinition.SEQUENCE_CACHED_GETS;
import static com.sleepycat.je.dbi.SequenceStatDefinition.SEQUENCE_CACHE_LAST;
import static com.sleepycat.je.dbi.SequenceStatDefinition.SEQUENCE_CACHE_SIZE;
import static com.sleepycat.je.dbi.SequenceStatDefinition.SEQUENCE_CACHE_VALUE;
import static com.sleepycat.je.dbi.SequenceStatDefinition.SEQUENCE_GETS;
import static com.sleepycat.je.dbi.SequenceStatDefinition.SEQUENCE_RANGE_MAX;
import static com.sleepycat.je.dbi.SequenceStatDefinition.SEQUENCE_RANGE_MIN;
import static com.sleepycat.je.dbi.SequenceStatDefinition.SEQUENCE_STORED_VALUE;
import com.sleepycat.je.utilint.StatGroup;
public class SequenceStats implements Serializable
