package org.apache.hadoop.io.retry;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.ipc.RemoteException;
import org.apache.hadoop.ipc.RetriableException;
import org.junit.Rule;
import org.junit.Test;
import org.junit.rules.Timeout;
import java.io.IOException;
import static org.hamcrest.core.Is.is;
import static org.junit.Assert.assertThat;
public class TestDefaultRetryPolicy
