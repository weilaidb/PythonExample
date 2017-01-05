package org.apache.hadoop.hdfs.web;
import java.io.IOException;
import java.net.HttpURLConnection;
import java.net.URL;
import java.util.List;
import org.apache.hadoop.security.authentication.client.ConnectionConfigurator;
import org.junit.Assert;
import org.junit.Test;
import com.google.common.collect.Lists;
public final class TestURLConnectionFactory
