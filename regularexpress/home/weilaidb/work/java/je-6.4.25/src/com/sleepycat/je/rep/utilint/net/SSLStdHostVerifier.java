package com.sleepycat.je.rep.utilint.net;
import static java.util.logging.Level.INFO;
import java.math.BigInteger;
import java.util.Collection;
import java.util.List;
import java.security.Principal;
import java.security.cert.Certificate;
import java.security.cert.X509Certificate;
import java.security.cert.CertificateParsingException;
import javax.net.ssl.HostnameVerifier;
import javax.net.ssl.SSLPeerUnverifiedException;
import javax.net.ssl.SSLSession;
import javax.security.auth.x500.X500Principal;
import com.sleepycat.je.rep.net.InstanceParams;
import com.sleepycat.je.rep.net.InstanceLogger;
public class SSLStdHostVerifier implements HostnameVerifier
