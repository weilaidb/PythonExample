package org.apache.hadoop.ipc;
import java.util.ArrayList;
import java.util.List;
import java.util.Random;
import java.util.concurrent.Callable;
import java.util.concurrent.ExecutionException;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.Future;
import java.util.concurrent.atomic.AtomicInteger;
import org.apache.hadoop.ipc.RPC.RpcKind;
import org.apache.hadoop.ipc.RetryCache.CacheEntryWithPayload;
import org.junit.Assert;
import org.junit.Before;
import org.junit.Test;
public class TestRetryCache
