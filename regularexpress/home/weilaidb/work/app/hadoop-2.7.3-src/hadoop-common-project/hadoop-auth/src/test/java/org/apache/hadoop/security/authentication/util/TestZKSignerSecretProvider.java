package org.apache.hadoop.security.authentication.util;
import java.util.Arrays;
import java.util.Properties;
import java.util.Random;
import javax.servlet.ServletContext;
import org.apache.curator.test.TestingServer;
import org.junit.After;
import org.junit.Assert;
import org.junit.Before;
import org.junit.Test;
import org.mockito.Mockito;
public class TestZKSignerSecretProvider
