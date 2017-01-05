package org.apache.hadoop.hdfs.server.namenode;
import java.util.concurrent.locks.Lock;
import java.util.concurrent.locks.ReadWriteLock;
import java.util.concurrent.locks.ReentrantLock;
import java.util.concurrent.locks.ReentrantReadWriteLock;
import com.google.common.annotations.VisibleForTesting;
class FSNamesystemLock implements ReadWriteLock
