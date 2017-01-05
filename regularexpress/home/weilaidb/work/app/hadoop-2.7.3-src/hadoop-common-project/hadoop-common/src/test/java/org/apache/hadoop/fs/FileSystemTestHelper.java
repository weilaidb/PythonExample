package org.apache.hadoop.fs;
import java.io.IOException;
import java.io.FileNotFoundException;
import java.net.URI;
import java.util.Random;
import org.apache.commons.lang.RandomStringUtils;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.security.token.Token;
import org.junit.Assert;
import static org.junit.Assert.*;
import static org.mockito.Mockito.mock;
public class FileSystemTestHelper
