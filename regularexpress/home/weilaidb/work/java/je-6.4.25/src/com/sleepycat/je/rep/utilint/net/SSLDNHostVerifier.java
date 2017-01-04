package com.sleepycat.je.rep.utilint.net;
import javax.net.ssl.HostnameVerifier;
import javax.net.ssl.SSLSession;
import com.sleepycat.je.rep.net.InstanceParams;
public class SSLDNHostVerifier
extends SSLDNMatcher
implements HostnameVerifier
