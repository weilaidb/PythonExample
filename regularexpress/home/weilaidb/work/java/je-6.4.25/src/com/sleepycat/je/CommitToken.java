package com.sleepycat.je;
import java.io.Serializable;
import java.util.UUID;
import com.sleepycat.je.utilint.VLSN;
public class CommitToken implements Serializable, Comparable<CommitToken>
