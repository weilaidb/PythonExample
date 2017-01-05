package org.apache.hadoop.crypto.random;
import java.io.IOException;
import java.util.Arrays;
import org.apache.commons.lang.SystemUtils;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.util.Shell.ShellCommandExecutor;
import org.junit.Assume;
import org.junit.Test;
public class TestOsSecureRandom
