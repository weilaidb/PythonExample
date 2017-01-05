package org.apache.hadoop.hdfs;
import static org.apache.hadoop.http.HttpConfig.Policy.HTTP_AND_HTTPS;
import static org.apache.hadoop.http.HttpConfig.Policy.HTTP_ONLY;
import org.apache.hadoop.HadoopIllegalArgumentException;
import org.apache.hadoop.conf.Configuration;
import org.junit.Assert;
import org.junit.Test;
public final class TestHttpPolicy
