package org.apache.hadoop.security.token;
import java.io.*;
import java.util.Arrays;
import org.apache.hadoop.io.*;
import org.apache.hadoop.security.token.delegation.AbstractDelegationTokenIdentifier;
import org.apache.hadoop.security.token.delegation.TestDelegationToken.TestDelegationTokenIdentifier;
import org.apache.hadoop.security.token.delegation.TestDelegationToken.TestDelegationTokenSecretManager;
import junit.framework.TestCase;
public class TestToken extends TestCase
