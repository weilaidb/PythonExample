package org.apache.hadoop.hdfs.server.namenode.ha;
import java.util.concurrent.atomic.AtomicBoolean;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.io.retry.FailoverProxyProvider;
public abstract class AbstractNNFailoverProxyProvider<T> implements
FailoverProxyProvider <T>
