package org.apache.hadoop.fs;
import java.io.IOException;
import static org.junit.Assert.*;
import static org.mockito.Mockito.*;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.DelegationTokenRenewer.Renewable;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.security.token.Token;
import org.apache.hadoop.util.Time;
import org.junit.Before;
import org.junit.Test;
import org.mockito.invocation.InvocationOnMock;
import org.mockito.stubbing.Answer;
public class TestDelegationTokenRenewer
