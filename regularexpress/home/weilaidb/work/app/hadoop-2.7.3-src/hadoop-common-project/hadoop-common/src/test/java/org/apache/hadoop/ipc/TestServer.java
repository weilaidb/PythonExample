package org.apache.hadoop.ipc;
import static org.junit.Assert.*;
import java.io.IOException;
import java.net.BindException;
import java.net.InetSocketAddress;
import java.net.ServerSocket;
import org.apache.hadoop.conf.Configuration;
import org.junit.Test;
public class TestServer
