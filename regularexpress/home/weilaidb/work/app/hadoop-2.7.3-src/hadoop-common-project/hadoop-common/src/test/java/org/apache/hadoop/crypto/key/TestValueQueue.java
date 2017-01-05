package org.apache.hadoop.crypto.key;
import java.io.IOException;
import java.util.Queue;
import java.util.concurrent.ExecutionException;
import java.util.concurrent.LinkedBlockingQueue;
import java.util.concurrent.TimeUnit;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import org.apache.hadoop.crypto.key.kms.ValueQueue;
import org.apache.hadoop.crypto.key.kms.ValueQueue.QueueRefiller;
import org.apache.hadoop.crypto.key.kms.ValueQueue.SyncGenerationPolicy;
import org.apache.hadoop.test.GenericTestUtils;
import org.junit.Assert;
import org.junit.Test;
import com.google.common.base.Supplier;
import com.google.common.collect.Sets;
public class TestValueQueue
