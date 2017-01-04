package com.sleepycat.je.rep.utilint.net;
import java.security.PrivateKey;
import java.security.Principal;
import java.security.cert.X509Certificate;
import java.net.Socket;
import javax.net.ssl.SSLEngine;
import javax.net.ssl.X509ExtendedKeyManager;
public class AliasKeyManager extends X509ExtendedKeyManager
