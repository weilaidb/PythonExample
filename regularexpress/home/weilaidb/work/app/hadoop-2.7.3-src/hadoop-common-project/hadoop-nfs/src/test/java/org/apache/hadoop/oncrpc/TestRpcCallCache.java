package org.apache.hadoop.oncrpc;
import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertFalse;
import static org.junit.Assert.assertNotNull;
import static org.junit.Assert.assertNull;
import static org.junit.Assert.assertTrue;
import java.net.InetAddress;
import java.net.UnknownHostException;
import java.util.Iterator;
import java.util.Map.Entry;
import org.apache.hadoop.oncrpc.RpcCallCache.CacheEntry;
import org.apache.hadoop.oncrpc.RpcCallCache.ClientRequest;
import org.junit.Test;
import static org.mockito.Mockito.*;
public class TestRpcCallCache
