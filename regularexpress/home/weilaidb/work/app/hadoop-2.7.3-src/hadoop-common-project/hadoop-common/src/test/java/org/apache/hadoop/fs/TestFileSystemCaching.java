package org.apache.hadoop.fs;
import static org.junit.Assert.assertSame;
import static org.junit.Assert.assertNotSame;
import java.io.IOException;
import java.net.URI;
import java.net.URISyntaxException;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.security.UserGroupInformation;
import org.apache.hadoop.security.token.Token;
import org.apache.hadoop.security.token.TokenIdentifier;
import org.junit.Test;
import java.security.PrivilegedExceptionAction;
import java.util.concurrent.Semaphore;
import static org.junit.Assert.*;
import static org.mockito.Mockito.*;
public class TestFileSystemCaching
