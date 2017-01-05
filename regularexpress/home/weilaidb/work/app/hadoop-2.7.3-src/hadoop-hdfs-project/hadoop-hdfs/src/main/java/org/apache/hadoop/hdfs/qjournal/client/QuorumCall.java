package org.apache.hadoop.hdfs.qjournal.client;
import java.util.Map;
import java.util.Map.Entry;
import java.util.concurrent.TimeoutException;
import org.apache.hadoop.ipc.RemoteException;
import org.apache.hadoop.util.Time;
import com.google.common.base.Joiner;
import com.google.common.base.Preconditions;
import com.google.common.collect.Maps;
import com.google.common.util.concurrent.FutureCallback;
import com.google.common.util.concurrent.Futures;
import com.google.common.util.concurrent.ListenableFuture;
import com.google.protobuf.Message;
import com.google.protobuf.TextFormat;
class QuorumCall<KEY, RESULT>
